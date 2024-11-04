#include "ast.hh"
#include <algorithm>
#include <memory>

std::unique_ptr<programNode> startNode;

void print_space(int num) {
    for (int i = 0; i < num * 4; i++) {
        std::cout << " ";
    }
}

void expNode::print(int i) {
    print_space(i);
    std::cout << type << ' ';
    std::visit(visitor{}, var);
    for (const auto &x: args) {
        if (x) {
            x->print(i + 1);
        }
    }
    for (const auto &x: children) {
        if (x) {
            x->print(i + 1);
        }
    }
    if (type == "Prior") {
        print_space(i);
        std::cout << type << std::endl;
    }
}

void varDecNode::print(int i) {
    print_space(i);
    std::cout << "id: " << name << ' ';
    if (!dim.empty()) {
        std::cout << "dimension: ";
        for (const int &num: dim) {
            std::cout << num << ' ';
        }
    }
    std::cout << std::endl;
}

void externVarDefNode::print(int i) {
    print_space(i);
    std::cout << "type: " << type << std::endl;
    for (auto &x: children) {
        if (x) {
            x->print(i);
        }
    }
}

void externFuncDefNode::print(int i) {
    print_space(i);
    std::cout << "return type: " << type << std::endl;
    funcDec->print(i);
    compound->print(i);
}

void programNode::print(int i) {
    std::reverse(children.begin(), children.end());
    for (auto &child: children) {
        externDefNode *rawPtr = child.get();
        if (dynamic_cast<externVarDefNode *>(rawPtr)) {
            std::cout << "Identifier: " << std::endl;
            child->print(i + 1);
        } else if (dynamic_cast<externFuncDefNode *>(rawPtr)) {
            std::cout << "Function: " << std::endl;
            child->print(i + 1);
        }
    }
}

void funcDecNode::print(int i) {
    print_space(i);
    std::cout << "id: " << name << std::endl;
    std::reverse(params.begin(), params.end());
    if (!params.empty()) {
        print_space(i);
        std::cout << "params:" << std::endl;
        for (auto &param: params) {
            print_space(i + 1);
            std::cout << "param type: " << param.first << std::endl;
            param.second->print(i + 1);
        }
    }
}

void cmpdNode::print(int i) {
    print_space(i);
    std::cout << "compound stmt: " << std::endl;
    if (!def_list.empty()) {
        print_space(i + 1);
        std::cout << "Local Identifier: " << std::endl;
        for (const auto &x: def_list) {
            x->print(i + 2);
        }
    }
    if (!stmt_list.empty()) {
        print_space(i + 1);
        std::cout << "Local Statements: " << std::endl;
        std::reverse(stmt_list.begin(), stmt_list.end());
        for (const auto &x: stmt_list) {
            x->print(i + 2);
        }
    }
}

void innerVarDefNode::print(int i) {
    print_space(i);
    std::cout << "type: " << type << std::endl;
    for (auto &x: inner_dec) {
        if (x) {
            x->print(i);
        }
    }
}

void innerVarDecNode::print(int i) {
    if (assign_body) {
        print_space(i);
        std::cout << "ASSIGN" << std::endl;
        varDec->print(i + 1);
        (*assign_body)->print(i + 1);
    } else {
        varDec->print(i);
    }
}

void stmtNode::print(int i) {
    print_space(i);
    std::cout << "type: " << type << std::endl;
    if (type == "expression" || (type == "return" && exp)) {
        exp->print(i + 1);
    }
}

void whileNode::print(int i) {
    print_space(i);
    std::cout << "type: " << type << std::endl;
    condition->print(i + 1);
    body->print(i + 1);
}

void forNode::print(int i) {
    print_space(i);
    std::cout << "type: " << type << std::endl;
    if (initial)
        initial->print(i + 1);
    if (condition)
        condition->print(i + 1);
    if (change)
        change->print(i + 1);
    if (body)
        body->print(i + 1);
}

void ifNode::print(int i) {
    print_space(i);
    if (else_body) {
        std::cout << "type: " << type + "_else" << std::endl;
    } else {
        std::cout << "type: " << type << std::endl;
    }
    condition->print(i + 1);
    body->print(i + 1);
    if (else_body) {
        else_body->print(i + 1);
    }
}

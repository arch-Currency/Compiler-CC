#include "table.hh"
#include <iomanip>
#include "ast.hh"

void Table::print() {
    if (Layer() == 0) {
        std::cout << std::setw(80) << std::setfill('*') << '*';
        std::cout << std::setfill(' ') << std::endl;
    }
    std::cout << std::left << "layer: " << layer << std::endl;
    std::cout << std::setw(15) << std::left << "Variable ID";
    std::cout << std::setw(20) << std::left << "Type";
    std::cout << std::setw(25) << std::left << "Variable Type";
    std::cout << std::setw(15) << std::left << "Array Dimensions/Params" << std::endl;
    for (auto &[fst, snd]: table) {
        std::cout << std::setw(15) << std::left << fst;
        std::visit(InfoVisitor{}, snd);
    }
    if (next) {
        std::cout << std::endl;
        next->print();
    }
    if (Layer() == 0) {
        std::cout << std::setw(80) << std::setfill('*') << '*';
        std::cout << std::setfill(' ') << std::endl << std::endl;
    }
}

void VarInfo::print() const {
    std::cout << std::setw(20) << std::left << "variable";
    std::cout << std::setw(25) << std::left << std::format("type : {} ", type);
    if (dim != std::nullopt) {
        std::cout << "dim: ";
        for (const auto &x: *dim) {
            std::cout << std::format("[{}]", x);
        }
    }
    std::cout << std::endl;
}

void FuncInfo::print() const {
    std::cout << std::setw(20) << std::left << "function";
    std::cout << std::setw(25) << std::left << std::format("return type : {} ", return_type);
    ;
    for (const auto &x: params) {
        std::cout << std::left << std::setw(10);
        std::cout << x;
    }
    std::cout << std::endl;
}


std::string type_exp(expNode *e, Table *t) {
    if (!std::holds_alternative<std::monostate>(e->var)) {
        if (e->type != "id")
            return e->type;
        const auto fst = std::get<std::string>(e->var);
        if (const auto iter_opt = t->search(fst); std::holds_alternative<VarInfo>(iter_opt->operator*().second)) {
            auto [type, dim] = std::get<VarInfo>(iter_opt->operator*().second);
            return type;
        }
    }
    if (e->type == "F_INC" || e->type == "F_DEC" || e->type == "B_INC" || e->type == "B_DEC") {
        if (e->children.size() != 1) {
            throw(std::runtime_error("incorrect number of children"));
        }
        if (!std::holds_alternative<std::monostate>(e->children[0]->var) && e->children[0]->type != "id") {
            return e->children[0]->type;
        }
        if (e->children[0]->type == "id") {
            std::string var_name = std::get<std::string>(e->children[0]->var);
            auto iter_opt = t->search(var_name);
            if (iter_opt == std::nullopt) {
                throw(std::runtime_error(std::format("no declaration for '{}', error initialize.", var_name)));
            }
            if (std::holds_alternative<VarInfo>(iter_opt->operator*().second)) {
                auto [type, dim] = std::get<VarInfo>(iter_opt->operator*().second);
                return type;
            }
        }
    }
}

#include <algorithm>
#include <iostream>
#include "ast.hh"
#include "lex.hh"
#include "log.hh"
#include "parse.hh"
#include "table.hh"
using std::string;
Table *current = nullptr;

void init_process(expNode *exp, const std::string &name) {
    std::string type = type_exp(exp, current);

    auto iter_opt = current->search(name);
    if (std::holds_alternative<VarInfo>(iter_opt->operator*().second)) {
        VarInfo var_info = std::get<VarInfo>(iter_opt->operator*().second);
        if (var_info.type == type) {
            return;
        } else {
            throw(std::runtime_error(
                    std::format("Variable '{}' initial expression does not match variable type. Expected {}, get {}",
                                name, var_info.type, type)));
            ;
        }
    }
}

int main() {
    auto lexer = cc_::cc_Lexer(std::cin);
    auto parser = cc_::cc_parser(lexer);
    parser.parse();
    Table table{0};
    current = &table;
    table.insert(std::make_pair("printf", FuncInfo{"void", {"string"}}));
    if (!startNode->children.empty()) {
        for (const auto &child: startNode->children) {
            if (externDefNode *rawPtr = child.get(); dynamic_cast<externVarDefNode *>(rawPtr)) {
                auto *var = dynamic_cast<externVarDefNode *>(rawPtr);
                string type = var->type;
                for (const auto &var_list: var->children) {
                    if (!table.find(var_list->name)) {
                        if (!var_list->dim.empty()) {
                            table.insert(std::make_pair(var_list->name, VarInfo{type, var_list->dim}));
                        }
                        table.insert(std::make_pair(var_list->name, VarInfo{type}));
                    } else {
                        Logger::error(
                                std::format("Variable '{}' already exists, skip the declaration.", var_list->name));
                    }
                }
            }
            if (externDefNode *rawPtr = child.get(); dynamic_cast<externFuncDefNode *>(rawPtr)) {
                auto *func = dynamic_cast<externFuncDefNode *>(rawPtr);
                string type = func->type;

                auto info = FuncInfo{};
                info.return_type = type;
                if (!table.find(func->funcDec->name)) {
                    if (!func->funcDec->params.empty()) {
                        for (const auto &[fst, snd]: func->funcDec->params) {
                            info.params.push_back(fst);
                            if (!snd->dim.empty()) {
                                Logger::error(std::format("Function '{}' declaration cannot be arrays.",
                                                          func->funcDec->name));
                            }
                        }
                    }
                    table.insert(std::make_pair(func->funcDec->name, info));
                    if (func->compound != nullptr) {
                        table.print();
                        auto *compoundTable = new Table{&table, table.Layer()};
                        current->next = compoundTable;
                        current = current->next;
                        if (!func->compound->def_list.empty()) {
                            for (const auto &x: func->compound->def_list) {
                                string inner_type = x->type;
                                if (!x->inner_dec.empty()) {
                                    for (const auto &y: x->inner_dec) {
                                        if (!current->find(y->varDec->name)) {
                                            if (!y->varDec->dim.empty()) {
                                                current->insert(std::make_pair(y->varDec->name,
                                                                               VarInfo{inner_type, y->varDec->dim}));
                                            }
                                            current->insert(std::make_pair(y->varDec->name, VarInfo{inner_type}));
                                            if (y->assign_body != std::nullopt) {
                                                try {
                                                    init_process((*y->assign_body).get(), y->varDec->name);
                                                } catch (std::runtime_error &e) {
                                                    Logger::error(e.what());
                                                    return 0;
                                                }
                                            }
                                        } else {
                                            Logger::error(std::format("Variable '{}' already exists in this scope {}, "
                                                                      "skip the declaration.",
                                                                      y->varDec->name, current->Layer()));
                                        }
                                    }
                                }
                            }
                        }
                    }
                    table.print();
                    current = current->front;
                    delete current->next;
                    current->next = nullptr;
                    table.print();
                } else {
                    Logger::error(
                            std::format("ID '{}' already exists, skip the function definition.", func->funcDec->name));
                }
            }
        }

        auto iter_opt = table.search("main");
        if (iter_opt == std::nullopt || std::holds_alternative<VarInfo>(iter_opt->operator*().second)) {
            Logger::error("function main not found");
            return 0;
        }
        // startNode->print(0);
        return 0;
    }
}

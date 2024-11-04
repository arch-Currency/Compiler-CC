#include <iostream>
#include "lex.hh"
#include "parse.hh"
extern std::unique_ptr<programNode> startNode;

int main() {
    auto lexer = cc_::cc_Lexer(std::cin);
    auto parser = cc_::cc_parser(lexer);
    parser.parse();
    startNode->print(0);
    return 0;
}

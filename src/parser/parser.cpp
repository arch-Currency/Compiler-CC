#include <iostream>
#include "lex.hh"
#include "parse.hh"
// extern std::unique_ptr<programNode> startNode;
template<typename T>
using ptr = std::unique_ptr<T>;
int main() {
    // auto lexer = cc_::cc_Lexer(std::cin);
    // auto parser = cc_::cc_parser(lexer);
    // parser.parse();
    int ca = 0;
    ptr<int> a = std::make_unique<int>(ca);
    return 0;
}

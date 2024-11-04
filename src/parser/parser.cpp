#include <FlexLexer.h>
#include <iostream>
#include "parse.hh"
#include "lex.hh"
extern std::unique_ptr<programNode> startNode;
int main()
{
    auto lexer = cc_::cc_Lexer(std::cin);
    auto parser = cc_::cc_parser(lexer);
    parser.parse();
    return 0;
}
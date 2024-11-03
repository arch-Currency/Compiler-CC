#ifndef CC_LEX_H
#define CC_LEX_H
#if !defined(yyFlexLexerOnce)
#undef yyFlexLexer
#include <FlexLexer.h>
#endif

#include "parse.hh"

#undef YY_DECL
#define YY_DECL cc_::cc_parser::symbol_type cc_Lexer::lex()

namespace cc_
{
    class cc_Lexer final : public yyFlexLexer
    {
    public:
        cc_Lexer() = default;
        explicit cc_Lexer(std::istream &in) : yyFlexLexer(&in) {}

        cc_parser::symbol_type lex();

        Location location{1, 1};
    };
};

#endif
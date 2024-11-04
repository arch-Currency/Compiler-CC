%option c++
%option noyywrap
%option yylineno
%option yyclass="cc_Lexer"

%{
#include <iostream>
#include "lex.hh"
#include "parse.hh"
using namespace cc_;
using token = cc_parser::token_kind_type;
%}

%x IN_COMMENT

ID [A-Za-z_][A-Za-z0-9_]*
INT 0|([1-9][0-9]*)
FLOAT [0-9]*\.?[0-9]?([eE][-+]?[0-9]+)?
CHAR (\'.\')
STRING  \"[^"\n]*["\n]
_COMMENT (\/\/[^\n]*)
COMMENT  "/*"([^\*]|(\*)*[^\*/])*(\*)*"*/"
OPERATOR ([+*/%=,-;[\](){}])

%%

"<="        { location.next_word(yyleng); return cc_parser::make_LE("<=", location); }
">="        { location.next_word(yyleng); return cc_parser::make_GE(">=", location); }
"=="        { location.next_word(yyleng); return cc_parser::make_EQ("==", location); }
"!="        { location.next_word(yyleng); return cc_parser::make_NE("!=", location); }
"<"         { location.next_word(yyleng); return cc_parser::make_LT("<", location); }
">"         { location.next_word(yyleng); return cc_parser::make_GT(">", location); }
"<<"        { location.next_word(yyleng); return cc_parser::make_LS("<<", location); }
">>"        { location.next_word(yyleng); return cc_parser::make_RS(">>", location); }
"++"        { location.next_word(yyleng); return cc_parser::make_INC("++", location); }
"--"        { location.next_word(yyleng); return cc_parser::make_DEC("--", location); }
"!"         { location.next_word(yyleng); return cc_parser::make_NOT("!", location); }
"&&"        { location.next_word(yyleng); return cc_parser::make_AND("&&", location); }
"||"        { location.next_word(yyleng); return cc_parser::make_OR("||", location); }
"void"      { location.next_word(yyleng); return cc_parser::make_VOID("void",location); }
"int"       { location.next_word(yyleng); return cc_parser::make_INT("int",location); }
"float"     { location.next_word(yyleng); return cc_parser::make_FLOAT("float",location); }
"char"      { location.next_word(yyleng); return cc_parser::make_CHAR("char",location); }
"while"     { location.next_word(yyleng); return cc_parser::make_WHILE("while", location); }
"for"       { location.next_word(yyleng); return cc_parser::make_FOR("for", location); }
"if"        { location.next_word(yyleng); return cc_parser::make_IF("if", location); }
"else"      { location.next_word(yyleng); return cc_parser::make_ELSE("else", location); }
"return"    { location.next_word(yyleng); return cc_parser::make_RETURN("return", location); }
"break"     { location.next_word(yyleng); return cc_parser::make_BREAK("break", location); }
"continue"  { location.next_word(yyleng); return cc_parser::make_CONTINUE("continue", location); }
{INT}       { location.next_word(yyleng); return cc_parser::make_CONST_INT(std::stoi(yytext), location); }
{FLOAT}     { location.next_word(yyleng); return cc_parser::make_CONST_FLOAT(std::stof(yytext), location); }
{CHAR}      { location.next_word(yyleng); return cc_parser::make_CONST_CHAR(yytext[0], location); }
{STRING}    { location.next_word(yyleng); return cc_parser::make_CONST_STRING(yytext, location); }
{ID}        { location.next_word(yyleng); return cc_parser::make_CONST_ID(yytext, location); }
{_COMMENT}  { location.next_word(yyleng); }
{COMMENT}   { location.next_word(yyleng); }
{OPERATOR} {
    location.next_word(yyleng);
    switch (yytext[0]) {
        case '+': return cc_parser::make_ADD('+', location);
        case '-': return cc_parser::make_MINUS('-', location);
        case '*': return cc_parser::make_TIMES('*', location);
        case '/': return cc_parser::make_DIV('/', location);
        case '%': return cc_parser::make_MOD('%', location);
        case '=': return cc_parser::make_ASSIGN('=', location);
        case ',': return cc_parser::make_COMMA(',', location);
        case ';': return cc_parser::make_SEMI(';', location);
        case '(': return cc_parser::make_LP('(', location);
        case ')': return cc_parser::make_RP(')', location);
        case '{': return cc_parser::make_LB('{', location);
        case '}': return cc_parser::make_RB('}', location);
        case '[': return cc_parser::make_LSB('[', location);
        case ']': return cc_parser::make_RSB(']', location);
        default: return cc_parser::make_YYerror(location);
    }
}   
[ \t]       { location.next_word(yyleng); }
[\r\n]      { location.next_line(yylineno); }
<<EOF>>     { return cc_parser::make_YYEOF(location); }
.           { location.next_word(yyleng); return cc_parser::make_YYerror(location); }

%%

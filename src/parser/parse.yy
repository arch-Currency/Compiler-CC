%skeleton "lalr1.cc"
%require "3.2"

%defines
%define api.parser.class {cc_parser}
%define api.token.constructor
%define api.value.type variant
%define parse.assert
%define parse.error verbose

%parse-param {cc_Lexer &lexer}

%locations
%define api.namespace {cc_}
%define api.location.type {Location}

%code requires
{
    #include <iostream>
    #include <string>
    #include "location.h"
    namespace cc_
    {
        class cc_Lexer;
    }
}

%code top {
  #include "lex.hh"
}

%code {
  #define yylex lexer.lex
}

%start program

%token LE GE EQ NE LT GT
%token INC DEC
%token NOT AND OR 
%token LS RS
%token CONST_INT CONST_FLOAT CONST_CHAR 
%token CONST_STRING 
%token CONST_ID
%token VOID INT FLOAT CHAR
%token WHILE FOR IF ELSE RETURN BREAK CONTINUE
%token ADD MINUS TIMES DIV MOD ASSIGN COMMA SEMI LP RP LSB RSB LB RB 

%left LSB
%right UMIUS
%right INC DEC NOT
%left TIMES DIV MOD
%left ADD MINUS
%left LS RS
%left LT GT LE GE
%left EQ NE
%left AND
%left OR
%left ASSIGN
%left COMMA

%nonassoc LOWER_ELSE
%nonassoc ELSE

%%
program:
    extern_def_list
    ;

extern_def_list:
    extern_def extern_def_list
    | /* ε */	
    ;

extern_def:
    type_spec extern_dec_list SEMI
    | type_spec func_dec compound_stat
    ;

type_spec:
    INT | FLOAT | VOID | CHAR
    ;

extern_dec_list:
    var_dec
    | var_dec COMMA extern_dec_list
    ;

var_dec:
    CONST_ID
    | var_dec LSB CONST_INT RSB
    ;

func_dec:
    CONST_ID LP var_list RP 
    | CONST_ID LP RP
    ;

var_list:
    param_dec COMMA var_list
    | param_dec
    ;                                                                                                 
						
param_dec:
    type_spec var_dec
    ;

compound_stat:
    LB def_list stmt_list RB
    ;

stmt_list:
    stmt stmt_list
    | /* ε */	
    ;	

stmt:
    exp SEMI 
    | compound_stat
    | RETURN exp SEMI
    | RETURN SEMI
    | IF LP exp RP stmt %prec LOWER_ELSE
    | IF LP exp RP stmt ELSE stmt
    | WHILE LP exp RP stmt
    | FOR LP exp COMMA exp COMMA exp RP stmt
    | BREAK SEMI
    | CONTINUE SEMI
    ;

def_list:
    def def_list
    | /* ε */	
    ;

def:
    type_spec dec_list SEMI;

dec_list:
    dec
    | dec COMMA dec_list

dec:
    var_dec
    | var_dec ASSIGN exp
								
exp:
    exp ASSIGN exp
    | exp AND exp
    | exp OR exp
    | exp LT exp
    | exp LE exp
    | exp LSB exp RSB 
    | exp EQ exp
    | exp NE exp
    | exp GT exp
    | exp GE exp
    | exp ADD exp
    | exp MINUS exp
    | exp TIMES exp
    | exp DIV exp
    | exp MOD exp
    | MINUS exp  %prec UMIUS
    | CONST_ID
    | CONST_INT
    | CONST_FLOAT 
    | CONST_STRING 
    | LP exp RP 
    | NOT exp
    | CONST_ID LP args RP 
    | CONST_ID LP RP 
    | exp LS exp
    | exp RS exp
    | INC exp
    | DEC exp
    | exp INC
    | exp DEC
    ;

args:
    exp COMMA args
    | exp
    ;

%%

void cc_::cc_parser::error(const Location &loc, const std::string &msg) {
  std::cerr << "Error at " << loc << ": " << msg << std::endl;
}
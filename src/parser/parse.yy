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
    #include <memory>
    #include "location.h"
    #include "ast.hh"
    namespace cc_
    {
        class cc_Lexer;
    }
    using std::cout;
    using std::endl;
    using std::move;
    extern std::unique_ptr<programNode> startNode;
}

%code top {
  #include "lex.hh"
}

%code {
  #define yylex lexer.lex
}

%start program

%token <std::string> LE GE EQ NE LT GT INC DEC NOT AND OR LS RS
%token <int> CONST_INT 
%token <float> CONST_FLOAT 
%token <char> CONST_CHAR 
%token <std::string> CONST_STRING CONST_ID VOID INT FLOAT CHAR WHILE FOR IF ELSE RETURN BREAK CONTINUE
%token <char> ADD MINUS TIMES DIV MOD ASSIGN COMMA SEMI LP RP LSB RSB LB RB

%left COMMA
%left ASSIGN
%left OR
%left AND
%left EQ NE
%left LT GT LE GE
%left LS RS
%left ADD MINUS
%left TIMES DIV MOD
%right INC DEC NOT
%right UMIUS
%left LP
%left LSB

%nonassoc LOWER_ELSE
%nonassoc ELSE

%type <std::string> type_spec
%type <ptr<expNode>> exp
%type <ptr<std::vector<ptr<expNode>>>> args
%type <ptr<varDecNode>> var_dec
%type <ptr<std::vector<ptr<varDecNode>>>> extern_dec_list
%type <ptr<externDefNode>> extern_def
%type <ptr<programNode>> program extern_def_list
%type <std::pair<std::string, ptr<varDecNode>>> param_dec
%type <ptr<std::vector<std::pair<std::string, ptr<varDecNode>>>>> var_list
%type <ptr<funcDecNode>> func_dec
%type <ptr<stmtNode>> stmt
%type <ptr<std::vector<ptr<stmtNode>>>> stmt_list
%type <ptr<innerVarDecNode>> dec
%type <ptr<std::vector<ptr<innerVarDecNode>>>> dec_list
%type <ptr<innerVarDefNode>> def
%type <ptr<std::vector<ptr<innerVarDefNode>>>> def_list
%type <ptr<cmpdNode>> compound_stat

%%
program:
    extern_def_list { $$ = move($1); startNode = move($$); }
    ;

extern_def_list:
    extern_def extern_def_list { $2->children.push_back(move($1)); $$ = move($2); }
    | /* ε */ { if(!$$) $$ = std::make_unique<programNode>(); }
    ;

extern_def:
    type_spec extern_dec_list SEMI { if(!$$) $$ = std::make_unique<externDefNode>(); ptr<externVarDefNode> temp = std::make_unique<externVarDefNode>(); temp->type = $1; temp->children= move(*$2); $$ = move(temp); }
    | type_spec func_dec compound_stat { if(!$$) $$ = std::make_unique<externDefNode>(); ptr<externFuncDefNode> temp = std::make_unique<externFuncDefNode>(); temp->type = $1; temp->funcDec = move($2); temp->compound = move($3); $$ = move(temp); }
    ;

type_spec:
    INT { $$ = move($1); }
    | FLOAT { $$ = move($1); }
    | VOID { $$ = move($1); }
    | CHAR { $$ = move($1); }
    ;

extern_dec_list:
    var_dec  { if(!$$) $$ = std::make_unique<std::vector<ptr<varDecNode>>>(); $$->push_back(move($1)); }
    | var_dec COMMA extern_dec_list { $3->push_back(move($1)); $$ = move($3); }
    ;

var_dec:
    CONST_ID { if(!$$) $$ = std::make_unique<varDecNode>(); $$->name = move($1); }
    | var_dec LSB CONST_INT RSB { $1->dim.push_back($3); $$ = move($1); }
    ;

func_dec:
    CONST_ID LP var_list RP { if(!$$) $$ = std::make_unique<funcDecNode>(); $$->name = $1; $$->params = move(*$3); }
    | CONST_ID LP RP { if(!$$) $$ = std::make_unique<funcDecNode>(); $$->name = $1; }
    ;

var_list:
    param_dec COMMA var_list { $3->push_back(move($1)); $$ = move($3); }
    | param_dec { if(!$$) $$ = std::make_unique<std::vector<std::pair<std::string, ptr<varDecNode>>>>(); $$->push_back(move($1)); }
    ;                                                                                                 
						
param_dec:
    type_spec var_dec { $$ = std::make_pair(move($1), move($2));}
    ;

compound_stat:
    LB def_list stmt_list RB { if(!$$) $$ = std::make_unique<cmpdNode>(); $$->def_list = move(*$2); $$->stmt_list = move(*$3); }
    ;

stmt_list:
    stmt stmt_list { $2->push_back(move($1)); $$ = move($2);  }
    | /* ε */ { if(!$$) $$ = std::make_unique<std::vector<ptr<stmtNode>>>(); }
    ;	

stmt:
    exp SEMI { if(!$$) $$ = std::make_unique<stmtNode>(); $$->type = "expression"; $$->exp = move($1); }
    | compound_stat { $$ = move($1); }
    | RETURN exp SEMI { if(!$$) $$ = std::make_unique<stmtNode>();  $$->exp = move($2); $$->type = move($1); }
    | RETURN SEMI { if(!$$) $$ = std::make_unique<stmtNode>(); $$->type = move($1); }
    | IF LP exp RP stmt %prec LOWER_ELSE { auto temp = std::make_unique<whileNode>(); temp->type = move($1); temp->condition = move($3); temp->body = move($5); $$ = move(temp); }
    | IF LP exp RP stmt ELSE stmt { auto temp = std::make_unique<ifNode>(); temp->type = move($1); temp->condition = move($3); temp->body = move($5); temp->else_body = move($7); $$ = move(temp); }
    | WHILE LP exp RP stmt { auto temp = std::make_unique<whileNode>(); temp->type = move($1); temp->condition = move($3); temp->body = move($5); $$ = move(temp); }
    | FOR LP exp SEMI exp SEMI exp RP stmt { auto temp = std::make_unique<forNode>(); temp->type = move($1); temp->initial = move($3); temp->condition = move($5); temp->change = move($7); temp->body = move($9); $$ = move(temp); }
    | BREAK SEMI { if(!$$) $$ = std::make_unique<stmtNode>(); $$->type = move($1); }
    | CONTINUE SEMI { if(!$$) $$ = std::make_unique<stmtNode>(); $$->type = move($1); }
    | SEMI { if(!$$) $$ = std::make_unique<stmtNode>(); $$->type = ";"; }
    ;

def_list:
    def def_list { $2->push_back(move($1)); $$ = move($2); }
    | /* ε */ { if(!$$) $$ = std::make_unique<std::vector<ptr<innerVarDefNode>>>(); }
    ;

def:
    type_spec dec_list SEMI { if(!$$) $$ = std::make_unique<innerVarDefNode>(); $$->type = $1; $$->inner_dec = move(*$2); }
    ;

dec_list:
    dec { if(!$$) $$ = std::make_unique<std::vector<ptr<innerVarDecNode>>>(); $$->push_back(move($1)); }
    | dec COMMA dec_list { $3->push_back(move($1)); $$ = move($3); }
    ;

dec:
    var_dec { if(!$$) $$ = std::make_unique<innerVarDecNode>(); $$->varDec = move($1); }
    | var_dec ASSIGN exp { if(!$$) $$ = std::make_unique<innerVarDecNode>(); $$->varDec = move($1); $$->assign_body = move($3); }
	;

exp:
    exp ASSIGN exp { if(!$$) $$ = std::make_unique<expNode>(); $$->type = $2; $$->children.push_back(move($1)); $$->children.push_back(move($3)); }
    | exp AND exp { if(!$$) $$ = std::make_unique<expNode>(); $$->type = $2; $$->children.push_back(move($1)); $$->children.push_back(move($3)); }
    | exp OR exp { if(!$$) $$ = std::make_unique<expNode>(); $$->type = $2; $$->children.push_back(move($1)); $$->children.push_back(move($3)); }
    | exp LT exp { if(!$$) $$ = std::make_unique<expNode>(); $$->type = $2; $$->children.push_back(move($1)); $$->children.push_back(move($3)); }
    | exp LE exp { if(!$$) $$ = std::make_unique<expNode>(); $$->type = $2; $$->children.push_back(move($1)); $$->children.push_back(move($3)); }
    | exp LSB exp RSB { if(!$$) $$ = std::make_unique<expNode>(); $$->type = "ARRAY_CALL"; $$->children.push_back(move($1)); $$->children.push_back(move($3)); }
    | exp EQ exp { if(!$$) $$ = std::make_unique<expNode>(); $$->type = $2; $$->children.push_back(move($1)); $$->children.push_back(move($3)); }
    | exp NE exp { if(!$$) $$ = std::make_unique<expNode>(); $$->type = $2; $$->children.push_back(move($1)); $$->children.push_back(move($3)); }
    | exp GT exp { if(!$$) $$ = std::make_unique<expNode>(); $$->type = $2; $$->children.push_back(move($1)); $$->children.push_back(move($3)); }
    | exp GE exp { if(!$$) $$ = std::make_unique<expNode>(); $$->type = $2; $$->children.push_back(move($1)); $$->children.push_back(move($3)); }
    | exp ADD exp { if(!$$) $$ = std::make_unique<expNode>(); $$->type = $2; $$->children.push_back(move($1)); $$->children.push_back(move($3)); }
    | exp MINUS exp { if(!$$) $$ = std::make_unique<expNode>(); $$->type = $2; $$->children.push_back(move($1)); $$->children.push_back(move($3)); }
    | exp TIMES exp { if(!$$) $$ = std::make_unique<expNode>(); $$->type = $2; $$->children.push_back(move($1)); $$->children.push_back(move($3)); }
    | exp DIV exp { if(!$$) $$ = std::make_unique<expNode>(); $$->type = $2; $$->children.push_back(move($1)); $$->children.push_back(move($3)); }
    | exp MOD exp { if(!$$) $$ = std::make_unique<expNode>(); $$->type = $2; $$->children.push_back(move($1)); $$->children.push_back(move($3)); }
    | MINUS exp  %prec UMIUS { if(!$$) $$ = std::make_unique<expNode>(); $$->type = "Negative"; $$->children.push_back(move($2)); }
    | CONST_ID { if(!$$) $$ = std::make_unique<expNode>(); $$->type = "CONST_ID"; $$->var = $1; }
    | CONST_INT { if(!$$) $$ = std::make_unique<expNode>(); $$->type = "CONST_INT"; $$->var = $1; }
    | CONST_FLOAT { if(!$$) $$ = std::make_unique<expNode>(); $$->type = "CONST_FLOAT"; $$->var = $1; }
    | CONST_STRING { if(!$$) $$ = std::make_unique<expNode>(); $$->type = "CONST_STRING"; $$->var = $1; }
    | LP exp RP { if(!$$) $$ = std::make_unique<expNode>(); $$->type = "Prior"; $$->children.push_back(move($2)); }
    | NOT exp { if(!$$) $$ = std::make_unique<expNode>(); $$->type = "NOT"; $$->children.push_back(move($2)); }
    | CONST_ID LP args RP { if(!$$) $$ = std::make_unique<expNode>(); $$->type = "FUNC_CALL"; $$->var = $1; $$->args = move(*$3); }
    | CONST_ID LP RP  { if(!$$) $$ = std::make_unique<expNode>(); $$->type = "FUNC_CALL"; $$->var = $1; }
    | exp LS exp { if(!$$) $$ = std::make_unique<expNode>(); $$->type = $2; $$->children.push_back(move($1)); $$->children.push_back(move($3)); }
    | exp RS exp { if(!$$) $$ = std::make_unique<expNode>(); $$->type = $2; $$->children.push_back(move($1)); $$->children.push_back(move($3)); }
    | INC exp { if(!$$) $$ = std::make_unique<expNode>(); $$->type = "F_INC"; $$->children.push_back(move($2)); }
    | DEC exp { if(!$$) $$ = std::make_unique<expNode>(); $$->type = "F_DEC"; $$->children.push_back(move($2)); }
    | exp INC { if(!$$) $$ = std::make_unique<expNode>(); $$->type = "B_INC"; $$->children.push_back(move($1)); }
    | exp DEC { if(!$$) $$ = std::make_unique<expNode>(); $$->type = "B_DEC"; $$->children.push_back(move($1)); }
    ;

args:
    exp COMMA args { $3->push_back(move($1)); $$ = move($3); }
    | exp { if(!$$) $$ = std::make_unique<std::vector<ptr<expNode>>>(); $$->push_back(move($1)); }
    ;

%%

void cc_::cc_parser::error(const Location &loc, const std::string &msg) {
  std::cerr << "Error at " << loc << ": " << msg << std::endl;
}
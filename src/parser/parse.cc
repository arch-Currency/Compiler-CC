// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

// "%code top" blocks.
#line 35 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"

  #include "lex.hh"

#line 43 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"




#include "parse.hh"


// Unqualified %code blocks.
#line 39 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"

  #define yylex lexer.lex

#line 56 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 14 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
namespace cc_ {
#line 149 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"

  /// Build a parser object.
  cc_parser::cc_parser (cc_Lexer &lexer_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      lexer (lexer_yyarg)
  {}

  cc_parser::~cc_parser ()
  {}

  cc_parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/



  // by_state.
  cc_parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  cc_parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  cc_parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  cc_parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  cc_parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  cc_parser::symbol_kind_type
  cc_parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  cc_parser::stack_symbol_type::stack_symbol_type ()
  {}

  cc_parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_CONST_CHAR: // CONST_CHAR
      case symbol_kind::S_ADD: // ADD
      case symbol_kind::S_MINUS: // MINUS
      case symbol_kind::S_TIMES: // TIMES
      case symbol_kind::S_DIV: // DIV
      case symbol_kind::S_MOD: // MOD
      case symbol_kind::S_ASSIGN: // ASSIGN
      case symbol_kind::S_COMMA: // COMMA
      case symbol_kind::S_SEMI: // SEMI
      case symbol_kind::S_LP: // LP
      case symbol_kind::S_RP: // RP
      case symbol_kind::S_LSB: // LSB
      case symbol_kind::S_RSB: // RSB
      case symbol_kind::S_LB: // LB
      case symbol_kind::S_RB: // RB
        value.YY_MOVE_OR_COPY< char > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_CONST_FLOAT: // CONST_FLOAT
        value.YY_MOVE_OR_COPY< float > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_CONST_INT: // CONST_INT
        value.YY_MOVE_OR_COPY< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_compound_stat: // compound_stat
        value.YY_MOVE_OR_COPY< ptr<cmpdNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_exp: // exp
        value.YY_MOVE_OR_COPY< ptr<expNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_extern_def: // extern_def
        value.YY_MOVE_OR_COPY< ptr<externDefNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_func_dec: // func_dec
        value.YY_MOVE_OR_COPY< ptr<funcDecNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_dec: // dec
        value.YY_MOVE_OR_COPY< ptr<innerVarDecNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_def: // def
        value.YY_MOVE_OR_COPY< ptr<innerVarDefNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_program: // program
      case symbol_kind::S_extern_def_list: // extern_def_list
        value.YY_MOVE_OR_COPY< ptr<programNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_args: // args
        value.YY_MOVE_OR_COPY< ptr<std::vector<ptr<expNode>>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_dec_list: // dec_list
        value.YY_MOVE_OR_COPY< ptr<std::vector<ptr<innerVarDecNode>>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_def_list: // def_list
        value.YY_MOVE_OR_COPY< ptr<std::vector<ptr<innerVarDefNode>>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_list: // stmt_list
        value.YY_MOVE_OR_COPY< ptr<std::vector<ptr<stmtNode>>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_extern_dec_list: // extern_dec_list
        value.YY_MOVE_OR_COPY< ptr<std::vector<ptr<varDecNode>>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_var_list: // var_list
        value.YY_MOVE_OR_COPY< ptr<std::vector<std::pair<std::string, ptr<varDecNode>>>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt: // stmt
        value.YY_MOVE_OR_COPY< ptr<stmtNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_var_dec: // var_dec
        value.YY_MOVE_OR_COPY< ptr<varDecNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_param_dec: // param_dec
        value.YY_MOVE_OR_COPY< std::pair<std::string, ptr<varDecNode>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_LE: // LE
      case symbol_kind::S_GE: // GE
      case symbol_kind::S_EQ: // EQ
      case symbol_kind::S_NE: // NE
      case symbol_kind::S_LT: // LT
      case symbol_kind::S_GT: // GT
      case symbol_kind::S_INC: // INC
      case symbol_kind::S_DEC: // DEC
      case symbol_kind::S_NOT: // NOT
      case symbol_kind::S_AND: // AND
      case symbol_kind::S_OR: // OR
      case symbol_kind::S_LS: // LS
      case symbol_kind::S_RS: // RS
      case symbol_kind::S_CONST_STRING: // CONST_STRING
      case symbol_kind::S_CONST_ID: // CONST_ID
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_CHAR: // CHAR
      case symbol_kind::S_WHILE: // WHILE
      case symbol_kind::S_FOR: // FOR
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_BREAK: // BREAK
      case symbol_kind::S_CONTINUE: // CONTINUE
      case symbol_kind::S_type_spec: // type_spec
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  cc_parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_CONST_CHAR: // CONST_CHAR
      case symbol_kind::S_ADD: // ADD
      case symbol_kind::S_MINUS: // MINUS
      case symbol_kind::S_TIMES: // TIMES
      case symbol_kind::S_DIV: // DIV
      case symbol_kind::S_MOD: // MOD
      case symbol_kind::S_ASSIGN: // ASSIGN
      case symbol_kind::S_COMMA: // COMMA
      case symbol_kind::S_SEMI: // SEMI
      case symbol_kind::S_LP: // LP
      case symbol_kind::S_RP: // RP
      case symbol_kind::S_LSB: // LSB
      case symbol_kind::S_RSB: // RSB
      case symbol_kind::S_LB: // LB
      case symbol_kind::S_RB: // RB
        value.move< char > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_CONST_FLOAT: // CONST_FLOAT
        value.move< float > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_CONST_INT: // CONST_INT
        value.move< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_compound_stat: // compound_stat
        value.move< ptr<cmpdNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_exp: // exp
        value.move< ptr<expNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_extern_def: // extern_def
        value.move< ptr<externDefNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_func_dec: // func_dec
        value.move< ptr<funcDecNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_dec: // dec
        value.move< ptr<innerVarDecNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_def: // def
        value.move< ptr<innerVarDefNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_program: // program
      case symbol_kind::S_extern_def_list: // extern_def_list
        value.move< ptr<programNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_args: // args
        value.move< ptr<std::vector<ptr<expNode>>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_dec_list: // dec_list
        value.move< ptr<std::vector<ptr<innerVarDecNode>>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_def_list: // def_list
        value.move< ptr<std::vector<ptr<innerVarDefNode>>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_list: // stmt_list
        value.move< ptr<std::vector<ptr<stmtNode>>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_extern_dec_list: // extern_dec_list
        value.move< ptr<std::vector<ptr<varDecNode>>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_var_list: // var_list
        value.move< ptr<std::vector<std::pair<std::string, ptr<varDecNode>>>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt: // stmt
        value.move< ptr<stmtNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_var_dec: // var_dec
        value.move< ptr<varDecNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_param_dec: // param_dec
        value.move< std::pair<std::string, ptr<varDecNode>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_LE: // LE
      case symbol_kind::S_GE: // GE
      case symbol_kind::S_EQ: // EQ
      case symbol_kind::S_NE: // NE
      case symbol_kind::S_LT: // LT
      case symbol_kind::S_GT: // GT
      case symbol_kind::S_INC: // INC
      case symbol_kind::S_DEC: // DEC
      case symbol_kind::S_NOT: // NOT
      case symbol_kind::S_AND: // AND
      case symbol_kind::S_OR: // OR
      case symbol_kind::S_LS: // LS
      case symbol_kind::S_RS: // RS
      case symbol_kind::S_CONST_STRING: // CONST_STRING
      case symbol_kind::S_CONST_ID: // CONST_ID
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_CHAR: // CHAR
      case symbol_kind::S_WHILE: // WHILE
      case symbol_kind::S_FOR: // FOR
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_BREAK: // BREAK
      case symbol_kind::S_CONTINUE: // CONTINUE
      case symbol_kind::S_type_spec: // type_spec
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  cc_parser::stack_symbol_type&
  cc_parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_CONST_CHAR: // CONST_CHAR
      case symbol_kind::S_ADD: // ADD
      case symbol_kind::S_MINUS: // MINUS
      case symbol_kind::S_TIMES: // TIMES
      case symbol_kind::S_DIV: // DIV
      case symbol_kind::S_MOD: // MOD
      case symbol_kind::S_ASSIGN: // ASSIGN
      case symbol_kind::S_COMMA: // COMMA
      case symbol_kind::S_SEMI: // SEMI
      case symbol_kind::S_LP: // LP
      case symbol_kind::S_RP: // RP
      case symbol_kind::S_LSB: // LSB
      case symbol_kind::S_RSB: // RSB
      case symbol_kind::S_LB: // LB
      case symbol_kind::S_RB: // RB
        value.copy< char > (that.value);
        break;

      case symbol_kind::S_CONST_FLOAT: // CONST_FLOAT
        value.copy< float > (that.value);
        break;

      case symbol_kind::S_CONST_INT: // CONST_INT
        value.copy< int > (that.value);
        break;

      case symbol_kind::S_compound_stat: // compound_stat
        value.copy< ptr<cmpdNode> > (that.value);
        break;

      case symbol_kind::S_exp: // exp
        value.copy< ptr<expNode> > (that.value);
        break;

      case symbol_kind::S_extern_def: // extern_def
        value.copy< ptr<externDefNode> > (that.value);
        break;

      case symbol_kind::S_func_dec: // func_dec
        value.copy< ptr<funcDecNode> > (that.value);
        break;

      case symbol_kind::S_dec: // dec
        value.copy< ptr<innerVarDecNode> > (that.value);
        break;

      case symbol_kind::S_def: // def
        value.copy< ptr<innerVarDefNode> > (that.value);
        break;

      case symbol_kind::S_program: // program
      case symbol_kind::S_extern_def_list: // extern_def_list
        value.copy< ptr<programNode> > (that.value);
        break;

      case symbol_kind::S_args: // args
        value.copy< ptr<std::vector<ptr<expNode>>> > (that.value);
        break;

      case symbol_kind::S_dec_list: // dec_list
        value.copy< ptr<std::vector<ptr<innerVarDecNode>>> > (that.value);
        break;

      case symbol_kind::S_def_list: // def_list
        value.copy< ptr<std::vector<ptr<innerVarDefNode>>> > (that.value);
        break;

      case symbol_kind::S_stmt_list: // stmt_list
        value.copy< ptr<std::vector<ptr<stmtNode>>> > (that.value);
        break;

      case symbol_kind::S_extern_dec_list: // extern_dec_list
        value.copy< ptr<std::vector<ptr<varDecNode>>> > (that.value);
        break;

      case symbol_kind::S_var_list: // var_list
        value.copy< ptr<std::vector<std::pair<std::string, ptr<varDecNode>>>> > (that.value);
        break;

      case symbol_kind::S_stmt: // stmt
        value.copy< ptr<stmtNode> > (that.value);
        break;

      case symbol_kind::S_var_dec: // var_dec
        value.copy< ptr<varDecNode> > (that.value);
        break;

      case symbol_kind::S_param_dec: // param_dec
        value.copy< std::pair<std::string, ptr<varDecNode>> > (that.value);
        break;

      case symbol_kind::S_LE: // LE
      case symbol_kind::S_GE: // GE
      case symbol_kind::S_EQ: // EQ
      case symbol_kind::S_NE: // NE
      case symbol_kind::S_LT: // LT
      case symbol_kind::S_GT: // GT
      case symbol_kind::S_INC: // INC
      case symbol_kind::S_DEC: // DEC
      case symbol_kind::S_NOT: // NOT
      case symbol_kind::S_AND: // AND
      case symbol_kind::S_OR: // OR
      case symbol_kind::S_LS: // LS
      case symbol_kind::S_RS: // RS
      case symbol_kind::S_CONST_STRING: // CONST_STRING
      case symbol_kind::S_CONST_ID: // CONST_ID
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_CHAR: // CHAR
      case symbol_kind::S_WHILE: // WHILE
      case symbol_kind::S_FOR: // FOR
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_BREAK: // BREAK
      case symbol_kind::S_CONTINUE: // CONTINUE
      case symbol_kind::S_type_spec: // type_spec
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  cc_parser::stack_symbol_type&
  cc_parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_CONST_CHAR: // CONST_CHAR
      case symbol_kind::S_ADD: // ADD
      case symbol_kind::S_MINUS: // MINUS
      case symbol_kind::S_TIMES: // TIMES
      case symbol_kind::S_DIV: // DIV
      case symbol_kind::S_MOD: // MOD
      case symbol_kind::S_ASSIGN: // ASSIGN
      case symbol_kind::S_COMMA: // COMMA
      case symbol_kind::S_SEMI: // SEMI
      case symbol_kind::S_LP: // LP
      case symbol_kind::S_RP: // RP
      case symbol_kind::S_LSB: // LSB
      case symbol_kind::S_RSB: // RSB
      case symbol_kind::S_LB: // LB
      case symbol_kind::S_RB: // RB
        value.move< char > (that.value);
        break;

      case symbol_kind::S_CONST_FLOAT: // CONST_FLOAT
        value.move< float > (that.value);
        break;

      case symbol_kind::S_CONST_INT: // CONST_INT
        value.move< int > (that.value);
        break;

      case symbol_kind::S_compound_stat: // compound_stat
        value.move< ptr<cmpdNode> > (that.value);
        break;

      case symbol_kind::S_exp: // exp
        value.move< ptr<expNode> > (that.value);
        break;

      case symbol_kind::S_extern_def: // extern_def
        value.move< ptr<externDefNode> > (that.value);
        break;

      case symbol_kind::S_func_dec: // func_dec
        value.move< ptr<funcDecNode> > (that.value);
        break;

      case symbol_kind::S_dec: // dec
        value.move< ptr<innerVarDecNode> > (that.value);
        break;

      case symbol_kind::S_def: // def
        value.move< ptr<innerVarDefNode> > (that.value);
        break;

      case symbol_kind::S_program: // program
      case symbol_kind::S_extern_def_list: // extern_def_list
        value.move< ptr<programNode> > (that.value);
        break;

      case symbol_kind::S_args: // args
        value.move< ptr<std::vector<ptr<expNode>>> > (that.value);
        break;

      case symbol_kind::S_dec_list: // dec_list
        value.move< ptr<std::vector<ptr<innerVarDecNode>>> > (that.value);
        break;

      case symbol_kind::S_def_list: // def_list
        value.move< ptr<std::vector<ptr<innerVarDefNode>>> > (that.value);
        break;

      case symbol_kind::S_stmt_list: // stmt_list
        value.move< ptr<std::vector<ptr<stmtNode>>> > (that.value);
        break;

      case symbol_kind::S_extern_dec_list: // extern_dec_list
        value.move< ptr<std::vector<ptr<varDecNode>>> > (that.value);
        break;

      case symbol_kind::S_var_list: // var_list
        value.move< ptr<std::vector<std::pair<std::string, ptr<varDecNode>>>> > (that.value);
        break;

      case symbol_kind::S_stmt: // stmt
        value.move< ptr<stmtNode> > (that.value);
        break;

      case symbol_kind::S_var_dec: // var_dec
        value.move< ptr<varDecNode> > (that.value);
        break;

      case symbol_kind::S_param_dec: // param_dec
        value.move< std::pair<std::string, ptr<varDecNode>> > (that.value);
        break;

      case symbol_kind::S_LE: // LE
      case symbol_kind::S_GE: // GE
      case symbol_kind::S_EQ: // EQ
      case symbol_kind::S_NE: // NE
      case symbol_kind::S_LT: // LT
      case symbol_kind::S_GT: // GT
      case symbol_kind::S_INC: // INC
      case symbol_kind::S_DEC: // DEC
      case symbol_kind::S_NOT: // NOT
      case symbol_kind::S_AND: // AND
      case symbol_kind::S_OR: // OR
      case symbol_kind::S_LS: // LS
      case symbol_kind::S_RS: // RS
      case symbol_kind::S_CONST_STRING: // CONST_STRING
      case symbol_kind::S_CONST_ID: // CONST_ID
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_CHAR: // CHAR
      case symbol_kind::S_WHILE: // WHILE
      case symbol_kind::S_FOR: // FOR
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_BREAK: // BREAK
      case symbol_kind::S_CONTINUE: // CONTINUE
      case symbol_kind::S_type_spec: // type_spec
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  cc_parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  cc_parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  cc_parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  cc_parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  cc_parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  cc_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  cc_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  cc_parser::debug_level_type
  cc_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  cc_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  cc_parser::state_type
  cc_parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  cc_parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  cc_parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  cc_parser::operator() ()
  {
    return parse ();
  }

  int
  cc_parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex ());
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_CONST_CHAR: // CONST_CHAR
      case symbol_kind::S_ADD: // ADD
      case symbol_kind::S_MINUS: // MINUS
      case symbol_kind::S_TIMES: // TIMES
      case symbol_kind::S_DIV: // DIV
      case symbol_kind::S_MOD: // MOD
      case symbol_kind::S_ASSIGN: // ASSIGN
      case symbol_kind::S_COMMA: // COMMA
      case symbol_kind::S_SEMI: // SEMI
      case symbol_kind::S_LP: // LP
      case symbol_kind::S_RP: // RP
      case symbol_kind::S_LSB: // LSB
      case symbol_kind::S_RSB: // RSB
      case symbol_kind::S_LB: // LB
      case symbol_kind::S_RB: // RB
        yylhs.value.emplace< char > ();
        break;

      case symbol_kind::S_CONST_FLOAT: // CONST_FLOAT
        yylhs.value.emplace< float > ();
        break;

      case symbol_kind::S_CONST_INT: // CONST_INT
        yylhs.value.emplace< int > ();
        break;

      case symbol_kind::S_compound_stat: // compound_stat
        yylhs.value.emplace< ptr<cmpdNode> > ();
        break;

      case symbol_kind::S_exp: // exp
        yylhs.value.emplace< ptr<expNode> > ();
        break;

      case symbol_kind::S_extern_def: // extern_def
        yylhs.value.emplace< ptr<externDefNode> > ();
        break;

      case symbol_kind::S_func_dec: // func_dec
        yylhs.value.emplace< ptr<funcDecNode> > ();
        break;

      case symbol_kind::S_dec: // dec
        yylhs.value.emplace< ptr<innerVarDecNode> > ();
        break;

      case symbol_kind::S_def: // def
        yylhs.value.emplace< ptr<innerVarDefNode> > ();
        break;

      case symbol_kind::S_program: // program
      case symbol_kind::S_extern_def_list: // extern_def_list
        yylhs.value.emplace< ptr<programNode> > ();
        break;

      case symbol_kind::S_args: // args
        yylhs.value.emplace< ptr<std::vector<ptr<expNode>>> > ();
        break;

      case symbol_kind::S_dec_list: // dec_list
        yylhs.value.emplace< ptr<std::vector<ptr<innerVarDecNode>>> > ();
        break;

      case symbol_kind::S_def_list: // def_list
        yylhs.value.emplace< ptr<std::vector<ptr<innerVarDefNode>>> > ();
        break;

      case symbol_kind::S_stmt_list: // stmt_list
        yylhs.value.emplace< ptr<std::vector<ptr<stmtNode>>> > ();
        break;

      case symbol_kind::S_extern_dec_list: // extern_dec_list
        yylhs.value.emplace< ptr<std::vector<ptr<varDecNode>>> > ();
        break;

      case symbol_kind::S_var_list: // var_list
        yylhs.value.emplace< ptr<std::vector<std::pair<std::string, ptr<varDecNode>>>> > ();
        break;

      case symbol_kind::S_stmt: // stmt
        yylhs.value.emplace< ptr<stmtNode> > ();
        break;

      case symbol_kind::S_var_dec: // var_dec
        yylhs.value.emplace< ptr<varDecNode> > ();
        break;

      case symbol_kind::S_param_dec: // param_dec
        yylhs.value.emplace< std::pair<std::string, ptr<varDecNode>> > ();
        break;

      case symbol_kind::S_LE: // LE
      case symbol_kind::S_GE: // GE
      case symbol_kind::S_EQ: // EQ
      case symbol_kind::S_NE: // NE
      case symbol_kind::S_LT: // LT
      case symbol_kind::S_GT: // GT
      case symbol_kind::S_INC: // INC
      case symbol_kind::S_DEC: // DEC
      case symbol_kind::S_NOT: // NOT
      case symbol_kind::S_AND: // AND
      case symbol_kind::S_OR: // OR
      case symbol_kind::S_LS: // LS
      case symbol_kind::S_RS: // RS
      case symbol_kind::S_CONST_STRING: // CONST_STRING
      case symbol_kind::S_CONST_ID: // CONST_ID
      case symbol_kind::S_VOID: // VOID
      case symbol_kind::S_INT: // INT
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_CHAR: // CHAR
      case symbol_kind::S_WHILE: // WHILE
      case symbol_kind::S_FOR: // FOR
      case symbol_kind::S_IF: // IF
      case symbol_kind::S_ELSE: // ELSE
      case symbol_kind::S_RETURN: // RETURN
      case symbol_kind::S_BREAK: // BREAK
      case symbol_kind::S_CONTINUE: // CONTINUE
      case symbol_kind::S_type_spec: // type_spec
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // program: extern_def_list
#line 89 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                    { yylhs.value.as < ptr<programNode> > () = move(yystack_[0].value.as < ptr<programNode> > ()); startNode = move(yylhs.value.as < ptr<programNode> > ()); }
#line 1148 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 3: // extern_def_list: extern_def_list extern_def
#line 93 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                               { yystack_[1].value.as < ptr<programNode> > ()->children.push_back(move(yystack_[0].value.as < ptr<externDefNode> > ())); yylhs.value.as < ptr<programNode> > () = move(yystack_[1].value.as < ptr<programNode> > ()); }
#line 1154 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 4: // extern_def_list: extern_def
#line 94 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                 { if(!yylhs.value.as < ptr<programNode> > ()) yylhs.value.as < ptr<programNode> > () = std::make_unique<programNode>(); yylhs.value.as < ptr<programNode> > ()->children.push_back(move(yystack_[0].value.as < ptr<externDefNode> > ())); }
#line 1160 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 5: // extern_def: type_spec extern_dec_list SEMI
#line 98 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                                   { if(!yylhs.value.as < ptr<externDefNode> > ()) yylhs.value.as < ptr<externDefNode> > () = std::make_unique<externDefNode>(); ptr<externVarDefNode> temp = std::make_unique<externVarDefNode>(); temp->type = yystack_[2].value.as < std::string > (); temp->children= move(*yystack_[1].value.as < ptr<std::vector<ptr<varDecNode>>> > ()); yylhs.value.as < ptr<externDefNode> > () = move(temp); }
#line 1166 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 6: // extern_def: type_spec func_dec compound_stat
#line 99 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                                       { if(!yylhs.value.as < ptr<externDefNode> > ()) yylhs.value.as < ptr<externDefNode> > () = std::make_unique<externDefNode>(); ptr<externFuncDefNode> temp = std::make_unique<externFuncDefNode>(); temp->type = yystack_[2].value.as < std::string > (); temp->funcDec = move(yystack_[1].value.as < ptr<funcDecNode> > ()); temp->compound = move(yystack_[0].value.as < ptr<cmpdNode> > ()); yylhs.value.as < ptr<externDefNode> > () = move(temp); }
#line 1172 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 7: // type_spec: INT
#line 103 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
        { yylhs.value.as < std::string > () = move(yystack_[0].value.as < std::string > ()); }
#line 1178 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 8: // type_spec: FLOAT
#line 104 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
            { yylhs.value.as < std::string > () = move(yystack_[0].value.as < std::string > ()); }
#line 1184 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 9: // type_spec: VOID
#line 105 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
           { yylhs.value.as < std::string > () = move(yystack_[0].value.as < std::string > ()); }
#line 1190 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 10: // type_spec: CHAR
#line 106 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
           { yylhs.value.as < std::string > () = move(yystack_[0].value.as < std::string > ()); }
#line 1196 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 11: // extern_dec_list: var_dec
#line 110 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
             { if(!yylhs.value.as < ptr<std::vector<ptr<varDecNode>>> > ()) yylhs.value.as < ptr<std::vector<ptr<varDecNode>>> > () = std::make_unique<std::vector<ptr<varDecNode>>>(); yylhs.value.as < ptr<std::vector<ptr<varDecNode>>> > ()->push_back(move(yystack_[0].value.as < ptr<varDecNode> > ())); }
#line 1202 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 12: // extern_dec_list: var_dec COMMA extern_dec_list
#line 111 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                                    { yystack_[0].value.as < ptr<std::vector<ptr<varDecNode>>> > ()->push_back(move(yystack_[2].value.as < ptr<varDecNode> > ())); yylhs.value.as < ptr<std::vector<ptr<varDecNode>>> > () = move(yystack_[0].value.as < ptr<std::vector<ptr<varDecNode>>> > ()); }
#line 1208 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 13: // var_dec: CONST_ID
#line 115 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
             { if(!yylhs.value.as < ptr<varDecNode> > ()) yylhs.value.as < ptr<varDecNode> > () = std::make_unique<varDecNode>(); yylhs.value.as < ptr<varDecNode> > ()->name = move(yystack_[0].value.as < std::string > ()); }
#line 1214 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 14: // var_dec: var_dec LSB CONST_INT RSB
#line 116 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                                { yystack_[3].value.as < ptr<varDecNode> > ()->dim.push_back(yystack_[1].value.as < int > ()); yylhs.value.as < ptr<varDecNode> > () = move(yystack_[3].value.as < ptr<varDecNode> > ()); }
#line 1220 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 15: // func_dec: CONST_ID LP var_list RP
#line 120 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                            { if(!yylhs.value.as < ptr<funcDecNode> > ()) yylhs.value.as < ptr<funcDecNode> > () = std::make_unique<funcDecNode>(); yylhs.value.as < ptr<funcDecNode> > ()->name = yystack_[3].value.as < std::string > (); yylhs.value.as < ptr<funcDecNode> > ()->params = move(*yystack_[1].value.as < ptr<std::vector<std::pair<std::string, ptr<varDecNode>>>> > ()); }
#line 1226 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 16: // func_dec: CONST_ID LP RP
#line 121 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                     { if(!yylhs.value.as < ptr<funcDecNode> > ()) yylhs.value.as < ptr<funcDecNode> > () = std::make_unique<funcDecNode>(); yylhs.value.as < ptr<funcDecNode> > ()->name = yystack_[2].value.as < std::string > (); }
#line 1232 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 17: // var_list: var_list COMMA param_dec
#line 125 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                             { yystack_[2].value.as < ptr<std::vector<std::pair<std::string, ptr<varDecNode>>>> > ()->push_back(move(yystack_[0].value.as < std::pair<std::string, ptr<varDecNode>> > ())); yylhs.value.as < ptr<std::vector<std::pair<std::string, ptr<varDecNode>>>> > () = move(yystack_[2].value.as < ptr<std::vector<std::pair<std::string, ptr<varDecNode>>>> > ()); }
#line 1238 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 18: // var_list: param_dec
#line 126 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                { if(!yylhs.value.as < ptr<std::vector<std::pair<std::string, ptr<varDecNode>>>> > ()) yylhs.value.as < ptr<std::vector<std::pair<std::string, ptr<varDecNode>>>> > () = std::make_unique<std::vector<std::pair<std::string, ptr<varDecNode>>>>(); yylhs.value.as < ptr<std::vector<std::pair<std::string, ptr<varDecNode>>>> > ()->push_back(move(yystack_[0].value.as < std::pair<std::string, ptr<varDecNode>> > ())); }
#line 1244 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 19: // param_dec: type_spec var_dec
#line 130 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                      { yylhs.value.as < std::pair<std::string, ptr<varDecNode>> > () = std::make_pair(move(yystack_[1].value.as < std::string > ()), move(yystack_[0].value.as < ptr<varDecNode> > ()));}
#line 1250 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 20: // compound_stat: LB def_list stmt_list RB
#line 134 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                             { if(!yylhs.value.as < ptr<cmpdNode> > ()) yylhs.value.as < ptr<cmpdNode> > () = std::make_unique<cmpdNode>(); yylhs.value.as < ptr<cmpdNode> > ()->def_list = move(*yystack_[2].value.as < ptr<std::vector<ptr<innerVarDefNode>>> > ()); yylhs.value.as < ptr<cmpdNode> > ()->stmt_list = move(*yystack_[1].value.as < ptr<std::vector<ptr<stmtNode>>> > ()); }
#line 1256 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 21: // stmt_list: stmt_list stmt
#line 138 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                   { yystack_[1].value.as < ptr<std::vector<ptr<stmtNode>>> > ()->push_back(move(yystack_[0].value.as < ptr<stmtNode> > ())); yylhs.value.as < ptr<std::vector<ptr<stmtNode>>> > () = move(yystack_[1].value.as < ptr<std::vector<ptr<stmtNode>>> > ());  }
#line 1262 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 22: // stmt_list: stmt
#line 139 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
           { if(!yylhs.value.as < ptr<std::vector<ptr<stmtNode>>> > ()) yylhs.value.as < ptr<std::vector<ptr<stmtNode>>> > () = std::make_unique<std::vector<ptr<stmtNode>>>(); yylhs.value.as < ptr<std::vector<ptr<stmtNode>>> > ()->push_back(move(yystack_[0].value.as < ptr<stmtNode> > ())); }
#line 1268 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 23: // stmt: exp SEMI
#line 143 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
             { if(!yylhs.value.as < ptr<stmtNode> > ()) yylhs.value.as < ptr<stmtNode> > () = std::make_unique<stmtNode>(); yylhs.value.as < ptr<stmtNode> > ()->type = "expression"; yylhs.value.as < ptr<stmtNode> > ()->exp = move(yystack_[1].value.as < ptr<expNode> > ()); }
#line 1274 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 24: // stmt: compound_stat
#line 144 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                    { yylhs.value.as < ptr<stmtNode> > () = move(yystack_[0].value.as < ptr<cmpdNode> > ()); }
#line 1280 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 25: // stmt: RETURN exp SEMI
#line 145 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                      { if(!yylhs.value.as < ptr<stmtNode> > ()) yylhs.value.as < ptr<stmtNode> > () = std::make_unique<stmtNode>();  yylhs.value.as < ptr<stmtNode> > ()->exp = move(yystack_[1].value.as < ptr<expNode> > ()); yylhs.value.as < ptr<stmtNode> > ()->type = move(yystack_[2].value.as < std::string > ()); }
#line 1286 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 26: // stmt: RETURN SEMI
#line 146 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                  { if(!yylhs.value.as < ptr<stmtNode> > ()) yylhs.value.as < ptr<stmtNode> > () = std::make_unique<stmtNode>(); yylhs.value.as < ptr<stmtNode> > ()->type = move(yystack_[1].value.as < std::string > ()); }
#line 1292 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 27: // stmt: IF LP exp RP stmt
#line 147 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                                         { auto temp = std::make_unique<whileNode>(); temp->type = move(yystack_[4].value.as < std::string > ()); temp->condition = move(yystack_[2].value.as < ptr<expNode> > ()); temp->body = move(yystack_[0].value.as < ptr<stmtNode> > ()); yylhs.value.as < ptr<stmtNode> > () = move(temp); }
#line 1298 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 28: // stmt: IF LP exp RP stmt ELSE stmt
#line 148 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                                  { auto temp = std::make_unique<ifNode>(); temp->type = move(yystack_[6].value.as < std::string > ()); temp->condition = move(yystack_[4].value.as < ptr<expNode> > ()); temp->body = move(yystack_[2].value.as < ptr<stmtNode> > ()); temp->else_body = move(yystack_[0].value.as < ptr<stmtNode> > ()); yylhs.value.as < ptr<stmtNode> > () = move(temp); }
#line 1304 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 29: // stmt: WHILE LP exp RP stmt
#line 149 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                           { auto temp = std::make_unique<whileNode>(); temp->type = move(yystack_[4].value.as < std::string > ()); temp->condition = move(yystack_[2].value.as < ptr<expNode> > ()); temp->body = move(yystack_[0].value.as < ptr<stmtNode> > ()); yylhs.value.as < ptr<stmtNode> > () = move(temp); }
#line 1310 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 30: // stmt: FOR LP exp SEMI exp SEMI exp RP stmt
#line 150 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                                           { auto temp = std::make_unique<forNode>(); temp->type = move(yystack_[8].value.as < std::string > ()); temp->initial = move(yystack_[6].value.as < ptr<expNode> > ()); temp->condition = move(yystack_[4].value.as < ptr<expNode> > ()); temp->change = move(yystack_[2].value.as < ptr<expNode> > ()); temp->body = move(yystack_[0].value.as < ptr<stmtNode> > ()); yylhs.value.as < ptr<stmtNode> > () = move(temp); }
#line 1316 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 31: // stmt: BREAK SEMI
#line 151 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                 { if(!yylhs.value.as < ptr<stmtNode> > ()) yylhs.value.as < ptr<stmtNode> > () = std::make_unique<stmtNode>(); yylhs.value.as < ptr<stmtNode> > ()->type = move(yystack_[1].value.as < std::string > ()); }
#line 1322 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 32: // stmt: CONTINUE SEMI
#line 152 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                    { if(!yylhs.value.as < ptr<stmtNode> > ()) yylhs.value.as < ptr<stmtNode> > () = std::make_unique<stmtNode>(); yylhs.value.as < ptr<stmtNode> > ()->type = move(yystack_[1].value.as < std::string > ()); }
#line 1328 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 33: // stmt: SEMI
#line 153 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
           { if(!yylhs.value.as < ptr<stmtNode> > ()) yylhs.value.as < ptr<stmtNode> > () = std::make_unique<stmtNode>(); yylhs.value.as < ptr<stmtNode> > ()->type = ";"; }
#line 1334 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 34: // def_list: def_list def
#line 157 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                  { yystack_[1].value.as < ptr<std::vector<ptr<innerVarDefNode>>> > ()->push_back(move(yystack_[0].value.as < ptr<innerVarDefNode> > ())); yylhs.value.as < ptr<std::vector<ptr<innerVarDefNode>>> > () = move(yystack_[1].value.as < ptr<std::vector<ptr<innerVarDefNode>>> > ()); }
#line 1340 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 35: // def_list: def
#line 158 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
           { if(!yylhs.value.as < ptr<std::vector<ptr<innerVarDefNode>>> > ()) yylhs.value.as < ptr<std::vector<ptr<innerVarDefNode>>> > () = std::make_unique<std::vector<ptr<innerVarDefNode>>>(); yylhs.value.as < ptr<std::vector<ptr<innerVarDefNode>>> > ()->push_back(move(yystack_[0].value.as < ptr<innerVarDefNode> > ())); }
#line 1346 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 36: // def: type_spec dec_list SEMI
#line 162 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                            { if(!yylhs.value.as < ptr<innerVarDefNode> > ()) yylhs.value.as < ptr<innerVarDefNode> > () = std::make_unique<innerVarDefNode>(); yylhs.value.as < ptr<innerVarDefNode> > ()->type = yystack_[2].value.as < std::string > (); yylhs.value.as < ptr<innerVarDefNode> > ()->inner_dec = move(*yystack_[1].value.as < ptr<std::vector<ptr<innerVarDecNode>>> > ()); }
#line 1352 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 37: // dec_list: dec_list COMMA dec
#line 166 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                        { yystack_[2].value.as < ptr<std::vector<ptr<innerVarDecNode>>> > ()->push_back(move(yystack_[0].value.as < ptr<innerVarDecNode> > ())); yylhs.value.as < ptr<std::vector<ptr<innerVarDecNode>>> > () = move(yystack_[2].value.as < ptr<std::vector<ptr<innerVarDecNode>>> > ()); }
#line 1358 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 38: // dec_list: dec
#line 167 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
           { if(!yylhs.value.as < ptr<std::vector<ptr<innerVarDecNode>>> > ()) yylhs.value.as < ptr<std::vector<ptr<innerVarDecNode>>> > () = std::make_unique<std::vector<ptr<innerVarDecNode>>>(); yylhs.value.as < ptr<std::vector<ptr<innerVarDecNode>>> > ()->push_back(move(yystack_[0].value.as < ptr<innerVarDecNode> > ())); }
#line 1364 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 39: // dec: var_dec
#line 171 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
            { if(!yylhs.value.as < ptr<innerVarDecNode> > ()) yylhs.value.as < ptr<innerVarDecNode> > () = std::make_unique<innerVarDecNode>(); yylhs.value.as < ptr<innerVarDecNode> > ()->varDec = move(yystack_[0].value.as < ptr<varDecNode> > ()); }
#line 1370 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 40: // dec: var_dec ASSIGN exp
#line 172 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                         { if(!yylhs.value.as < ptr<innerVarDecNode> > ()) yylhs.value.as < ptr<innerVarDecNode> > () = std::make_unique<innerVarDecNode>(); yylhs.value.as < ptr<innerVarDecNode> > ()->varDec = move(yystack_[2].value.as < ptr<varDecNode> > ()); yylhs.value.as < ptr<innerVarDecNode> > ()->assign_body = move(yystack_[0].value.as < ptr<expNode> > ()); }
#line 1376 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 41: // exp: exp ASSIGN exp
#line 176 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                   { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = yystack_[1].value.as < char > (); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[2].value.as < ptr<expNode> > ())); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[0].value.as < ptr<expNode> > ())); }
#line 1382 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 42: // exp: exp AND exp
#line 177 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                  { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = yystack_[1].value.as < std::string > (); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[2].value.as < ptr<expNode> > ())); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[0].value.as < ptr<expNode> > ())); }
#line 1388 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 43: // exp: exp OR exp
#line 178 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                 { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = yystack_[1].value.as < std::string > (); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[2].value.as < ptr<expNode> > ())); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[0].value.as < ptr<expNode> > ())); }
#line 1394 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 44: // exp: exp LT exp
#line 179 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                 { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = yystack_[1].value.as < std::string > (); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[2].value.as < ptr<expNode> > ())); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[0].value.as < ptr<expNode> > ())); }
#line 1400 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 45: // exp: exp LE exp
#line 180 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                 { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = yystack_[1].value.as < std::string > (); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[2].value.as < ptr<expNode> > ())); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[0].value.as < ptr<expNode> > ())); }
#line 1406 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 46: // exp: exp LSB exp RSB
#line 181 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                      { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = "ARRAY_CALL"; yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[3].value.as < ptr<expNode> > ())); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[1].value.as < ptr<expNode> > ())); }
#line 1412 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 47: // exp: exp EQ exp
#line 182 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                 { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = yystack_[1].value.as < std::string > (); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[2].value.as < ptr<expNode> > ())); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[0].value.as < ptr<expNode> > ())); }
#line 1418 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 48: // exp: exp NE exp
#line 183 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                 { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = yystack_[1].value.as < std::string > (); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[2].value.as < ptr<expNode> > ())); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[0].value.as < ptr<expNode> > ())); }
#line 1424 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 49: // exp: exp GT exp
#line 184 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                 { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = yystack_[1].value.as < std::string > (); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[2].value.as < ptr<expNode> > ())); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[0].value.as < ptr<expNode> > ())); }
#line 1430 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 50: // exp: exp GE exp
#line 185 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                 { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = yystack_[1].value.as < std::string > (); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[2].value.as < ptr<expNode> > ())); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[0].value.as < ptr<expNode> > ())); }
#line 1436 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 51: // exp: exp ADD exp
#line 186 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                  { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = yystack_[1].value.as < char > (); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[2].value.as < ptr<expNode> > ())); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[0].value.as < ptr<expNode> > ())); }
#line 1442 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 52: // exp: exp MINUS exp
#line 187 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                    { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = yystack_[1].value.as < char > (); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[2].value.as < ptr<expNode> > ())); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[0].value.as < ptr<expNode> > ())); }
#line 1448 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 53: // exp: exp TIMES exp
#line 188 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                    { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = yystack_[1].value.as < char > (); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[2].value.as < ptr<expNode> > ())); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[0].value.as < ptr<expNode> > ())); }
#line 1454 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 54: // exp: exp DIV exp
#line 189 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                  { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = yystack_[1].value.as < char > (); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[2].value.as < ptr<expNode> > ())); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[0].value.as < ptr<expNode> > ())); }
#line 1460 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 55: // exp: exp MOD exp
#line 190 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                  { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = yystack_[1].value.as < char > (); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[2].value.as < ptr<expNode> > ())); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[0].value.as < ptr<expNode> > ())); }
#line 1466 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 56: // exp: MINUS exp
#line 191 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                             { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = "Negative"; yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[0].value.as < ptr<expNode> > ())); }
#line 1472 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 57: // exp: CONST_CHAR
#line 192 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                 { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = "char"; yylhs.value.as < ptr<expNode> > ()->var = yystack_[0].value.as < char > (); }
#line 1478 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 58: // exp: CONST_ID
#line 193 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
               { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = "id"; yylhs.value.as < ptr<expNode> > ()->var = yystack_[0].value.as < std::string > (); }
#line 1484 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 59: // exp: CONST_INT
#line 194 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = "int"; yylhs.value.as < ptr<expNode> > ()->var = yystack_[0].value.as < int > (); }
#line 1490 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 60: // exp: CONST_FLOAT
#line 195 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                  { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = "float"; yylhs.value.as < ptr<expNode> > ()->var = yystack_[0].value.as < float > (); }
#line 1496 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 61: // exp: CONST_STRING
#line 196 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                   { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = "string"; yylhs.value.as < ptr<expNode> > ()->var = yystack_[0].value.as < std::string > (); }
#line 1502 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 62: // exp: LP exp RP
#line 197 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = "Prior"; yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[1].value.as < ptr<expNode> > ())); }
#line 1508 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 63: // exp: NOT exp
#line 198 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
              { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = "NOT"; yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[0].value.as < ptr<expNode> > ())); }
#line 1514 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 64: // exp: CONST_ID LP args RP
#line 199 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                          { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = "function"; yylhs.value.as < ptr<expNode> > ()->var = yystack_[3].value.as < std::string > (); yylhs.value.as < ptr<expNode> > ()->args = move(*yystack_[1].value.as < ptr<std::vector<ptr<expNode>>> > ()); }
#line 1520 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 65: // exp: CONST_ID LP RP
#line 200 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                      { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = "function"; yylhs.value.as < ptr<expNode> > ()->var = yystack_[2].value.as < std::string > (); }
#line 1526 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 66: // exp: exp LS exp
#line 201 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                 { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = yystack_[1].value.as < std::string > (); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[2].value.as < ptr<expNode> > ())); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[0].value.as < ptr<expNode> > ())); }
#line 1532 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 67: // exp: exp RS exp
#line 202 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                 { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = yystack_[1].value.as < std::string > (); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[2].value.as < ptr<expNode> > ())); yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[0].value.as < ptr<expNode> > ())); }
#line 1538 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 68: // exp: INC exp
#line 203 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
              { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = "F_INC"; yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[0].value.as < ptr<expNode> > ())); }
#line 1544 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 69: // exp: DEC exp
#line 204 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
              { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = "F_DEC"; yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[0].value.as < ptr<expNode> > ())); }
#line 1550 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 70: // exp: exp INC
#line 205 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
              { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = "B_INC"; yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[1].value.as < ptr<expNode> > ())); }
#line 1556 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 71: // exp: exp DEC
#line 206 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
              { if(!yylhs.value.as < ptr<expNode> > ()) yylhs.value.as < ptr<expNode> > () = std::make_unique<expNode>(); yylhs.value.as < ptr<expNode> > ()->type = "B_DEC"; yylhs.value.as < ptr<expNode> > ()->children.push_back(move(yystack_[1].value.as < ptr<expNode> > ())); }
#line 1562 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 72: // args: exp COMMA args
#line 210 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
                   { yystack_[0].value.as < ptr<std::vector<ptr<expNode>>> > ()->push_back(move(yystack_[2].value.as < ptr<expNode> > ())); yylhs.value.as < ptr<std::vector<ptr<expNode>>> > () = move(yystack_[0].value.as < ptr<std::vector<ptr<expNode>>> > ()); }
#line 1568 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;

  case 73: // args: exp
#line 211 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
          { if(!yylhs.value.as < ptr<std::vector<ptr<expNode>>> > ()) yylhs.value.as < ptr<std::vector<ptr<expNode>>> > () = std::make_unique<std::vector<ptr<expNode>>>(); yylhs.value.as < ptr<std::vector<ptr<expNode>>> > ()->push_back(move(yystack_[0].value.as < ptr<expNode> > ())); }
#line 1574 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"
    break;


#line 1578 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (yyla.location, YY_MOVE (msg));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yyerror_range[1].location = yystack_[0].location;
        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  cc_parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  cc_parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
  cc_parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  // cc_parser::context.
  cc_parser::context::context (const cc_parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  cc_parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    const int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        const int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        const int yychecklim = yylast_ - yyn + 1;
        const int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }






  int
  cc_parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  cc_parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char cc_parser::yypact_ninf_ = -54;

  const signed char cc_parser::yytable_ninf_ = -1;

  const short
  cc_parser::yypact_[] =
  {
      12,   -54,   -54,   -54,   -54,    20,    12,   -54,     4,   -54,
     -54,   -14,   -12,   -21,   -16,    45,   -54,    28,    24,    12,
     -54,   -54,    28,   -32,   -54,   -54,   -54,    16,    28,   523,
     -54,    30,    12,   -54,   -54,   -27,   -20,   -54,   610,   610,
     610,   -54,   -54,   -54,   -54,    33,    34,    36,    38,   592,
      31,    40,   610,   -54,   610,   -54,   491,   -54,   -54,   109,
     -54,   610,    28,   -54,    -5,    -5,    -5,   473,   610,   610,
     610,   -54,   149,   -54,   -54,    39,   162,   -54,   -54,   610,
     610,   610,   610,   610,   610,   -54,   -54,   610,   610,   610,
     610,   610,   610,   610,   610,   610,   610,   -54,   610,   361,
     -54,   -54,   202,    41,   215,   255,   268,   -54,   -54,   582,
     582,   463,   463,   582,   582,   427,   414,    29,    29,   445,
     445,    -5,    -5,    -5,   374,    96,   610,   -54,   555,   610,
     555,   -54,   -54,   -54,   308,    52,   610,   555,   321,   -54,
     555,   -54
  };

  const signed char
  cc_parser::yydefact_[] =
  {
       0,     9,     7,     8,    10,     0,     2,     4,     0,     1,
       3,    13,     0,    11,     0,     0,     5,     0,     0,     0,
       6,    16,     0,     0,    18,    13,    12,     0,     0,     0,
      35,    19,     0,    15,    14,    39,     0,    38,     0,     0,
       0,    59,    60,    57,    61,    58,     0,     0,     0,     0,
       0,     0,     0,    33,     0,    24,     0,    22,    34,     0,
      17,     0,     0,    36,    68,    69,    63,     0,     0,     0,
       0,    26,     0,    31,    32,    56,     0,    20,    21,     0,
       0,     0,     0,     0,     0,    70,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,     0,    40,
      37,    65,    73,     0,     0,     0,     0,    25,    62,    45,
      50,    47,    48,    44,    49,    42,    43,    66,    67,    51,
      52,    53,    54,    55,    41,     0,     0,    64,     0,     0,
       0,    46,    72,    29,     0,    27,     0,     0,     0,    28,
       0,    30
  };

  const signed char
  cc_parser::yypgoto_[] =
  {
     -54,   -54,   -54,    77,    -7,    68,   -15,   -54,   -54,    57,
      76,   -54,   -53,   -54,    63,   -54,    32,   -38,   -33
  };

  const signed char
  cc_parser::yydefgoto_[] =
  {
       0,     5,     6,     7,     8,    12,    13,    14,    23,    24,
      55,    56,    57,    29,    30,    36,    37,    59,   103
  };

  const unsigned char
  cc_parser::yytable_[] =
  {
      64,    65,    66,    78,    85,    86,    32,    31,    22,    33,
      61,    72,    28,    35,    75,    18,    76,    17,    62,    63,
       9,    18,    28,    99,    11,    22,    15,    16,    19,   102,
     104,   105,   106,     1,     2,     3,     4,    98,    85,    86,
      27,   109,   110,   111,   112,   113,   114,    35,    25,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,    34,
     125,    91,    92,    93,    94,    95,     1,     2,     3,     4,
      73,    98,    18,    67,    68,   133,    69,   135,    70,    74,
     137,    98,   127,    10,   139,    26,    21,   141,   102,    60,
      20,   134,    58,   132,   100,     0,     0,     0,   138,    79,
      80,    81,    82,    83,    84,    85,    86,     0,    87,    88,
      89,    90,    79,    80,    81,    82,    83,    84,    85,    86,
       0,    87,    88,    89,    90,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,     0,     0,     0,    98,   131,
       0,    91,    92,    93,    94,    95,    96,     0,    97,     0,
       0,    98,    79,    80,    81,    82,    83,    84,    85,    86,
       0,    87,    88,    89,    90,    79,    80,    81,    82,    83,
      84,    85,    86,     0,    87,    88,    89,    90,     0,     0,
       0,    91,    92,    93,    94,    95,    96,     0,   107,     0,
       0,    98,     0,     0,    91,    92,    93,    94,    95,    96,
       0,     0,     0,   108,    98,    79,    80,    81,    82,    83,
      84,    85,    86,     0,    87,    88,    89,    90,    79,    80,
      81,    82,    83,    84,    85,    86,     0,    87,    88,    89,
      90,     0,     0,     0,    91,    92,    93,    94,    95,    96,
     126,     0,     0,     0,    98,     0,     0,    91,    92,    93,
      94,    95,    96,     0,     0,     0,   128,    98,    79,    80,
      81,    82,    83,    84,    85,    86,     0,    87,    88,    89,
      90,    79,    80,    81,    82,    83,    84,    85,    86,     0,
      87,    88,    89,    90,     0,     0,     0,    91,    92,    93,
      94,    95,    96,     0,   129,     0,     0,    98,     0,     0,
      91,    92,    93,    94,    95,    96,     0,     0,     0,   130,
      98,    79,    80,    81,    82,    83,    84,    85,    86,     0,
      87,    88,    89,    90,    79,    80,    81,    82,    83,    84,
      85,    86,     0,    87,    88,    89,    90,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,   136,     0,     0,
      98,     0,     0,    91,    92,    93,    94,    95,    96,     0,
       0,     0,   140,    98,    79,    80,    81,    82,    83,    84,
      85,    86,     0,    87,    88,    89,    90,    79,    80,    81,
      82,    83,    84,    85,    86,     0,    87,    88,    89,    90,
       0,     0,     0,    91,    92,    93,    94,    95,    96,     0,
       0,     0,     0,    98,     0,     0,    91,    92,    93,    94,
      95,     0,     0,     0,     0,     0,    98,    79,    80,    81,
      82,    83,    84,    85,    86,     0,    87,     0,    89,    90,
      79,    80,    81,    82,    83,    84,    85,    86,     0,     0,
       0,    89,    90,     0,     0,     0,    91,    92,    93,    94,
      95,     0,     0,     0,    85,    86,    98,     0,     0,    91,
      92,    93,    94,    95,     0,     0,    79,    80,     0,    98,
      83,    84,    85,    86,     0,     0,     0,    89,    90,    93,
      94,    95,    38,    39,    40,     0,     0,    98,     0,    41,
      42,    43,    44,    45,     0,    91,    92,    93,    94,    95,
      38,    39,    40,     0,     0,    98,    52,    41,    42,    43,
      44,    45,     0,    54,   101,     0,    46,    47,    48,     0,
      49,    50,    51,     0,    52,     0,     0,     0,     0,     0,
      53,    54,    38,    39,    40,    19,    77,     0,     0,    41,
      42,    43,    44,    45,     1,     2,     3,     4,    46,    47,
      48,     0,    49,    50,    51,     0,    52,     0,     0,     0,
       0,     0,    53,    54,    38,    39,    40,    19,     0,     0,
       0,    41,    42,    43,    44,    45,     0,     0,     0,     0,
      46,    47,    48,     0,    49,    50,    51,     0,    52,     0,
       0,    85,    86,     0,    53,    54,    89,    90,     0,    19,
       0,    38,    39,    40,     0,     0,     0,     0,    41,    42,
      43,    44,    45,     0,    91,    92,    93,    94,    95,    38,
      39,    40,     0,     0,    98,    52,    41,    42,    43,    44,
      45,    71,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,     0,     0,     0,
      54
  };

  const short
  cc_parser::yycheck_[] =
  {
      38,    39,    40,    56,     9,    10,    38,    22,    15,    41,
      37,    49,    19,    28,    52,    42,    54,    38,    38,    39,
       0,    42,    29,    61,    20,    32,    40,    39,    44,    67,
      68,    69,    70,    21,    22,    23,    24,    42,     9,    10,
      16,    79,    80,    81,    82,    83,    84,    62,    20,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    43,
      98,    32,    33,    34,    35,    36,    21,    22,    23,    24,
      39,    42,    42,    40,    40,   128,    40,   130,    40,    39,
      28,    42,    41,     6,   137,    17,    41,   140,   126,    32,
      14,   129,    29,   126,    62,    -1,    -1,    -1,   136,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    43,
      -1,    32,    33,    34,    35,    36,    37,    -1,    39,    -1,
      -1,    42,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    -1,    39,    -1,
      -1,    42,    -1,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    42,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    42,    -1,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    42,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      42,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    -1,    39,    -1,    -1,
      42,    -1,    -1,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    41,    42,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    42,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    -1,    -1,    -1,     9,    10,    42,    -1,    -1,    32,
      33,    34,    35,    36,    -1,    -1,     3,     4,    -1,    42,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    34,
      35,    36,     9,    10,    11,    -1,    -1,    42,    -1,    16,
      17,    18,    19,    20,    -1,    32,    33,    34,    35,    36,
       9,    10,    11,    -1,    -1,    42,    33,    16,    17,    18,
      19,    20,    -1,    40,    41,    -1,    25,    26,    27,    -1,
      29,    30,    31,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      39,    40,     9,    10,    11,    44,    45,    -1,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    29,    30,    31,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    39,    40,     9,    10,    11,    44,    -1,    -1,
      -1,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      25,    26,    27,    -1,    29,    30,    31,    -1,    33,    -1,
      -1,     9,    10,    -1,    39,    40,    14,    15,    -1,    44,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    16,    17,
      18,    19,    20,    -1,    32,    33,    34,    35,    36,     9,
      10,    11,    -1,    -1,    42,    33,    16,    17,    18,    19,
      20,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      40
  };

  const signed char
  cc_parser::yystos_[] =
  {
       0,    21,    22,    23,    24,    49,    50,    51,    52,     0,
      51,    20,    53,    54,    55,    40,    39,    38,    42,    44,
      58,    41,    52,    56,    57,    20,    53,    16,    52,    61,
      62,    54,    38,    41,    43,    54,    63,    64,     9,    10,
      11,    16,    17,    18,    19,    20,    25,    26,    27,    29,
      30,    31,    33,    39,    40,    58,    59,    60,    62,    65,
      57,    37,    38,    39,    65,    65,    65,    40,    40,    40,
      40,    39,    65,    39,    39,    65,    65,    45,    60,     3,
       4,     5,     6,     7,     8,     9,    10,    12,    13,    14,
      15,    32,    33,    34,    35,    36,    37,    39,    42,    65,
      64,    41,    65,    66,    65,    65,    65,    39,    41,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    38,    41,    41,    39,
      41,    43,    66,    60,    65,    60,    39,    28,    65,    60,
      41,    60
  };

  const signed char
  cc_parser::yyr1_[] =
  {
       0,    48,    49,    50,    50,    51,    51,    52,    52,    52,
      52,    53,    53,    54,    54,    55,    55,    56,    56,    57,
      58,    59,    59,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    61,    61,    62,    63,    63,    64,
      64,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    66,    66
  };

  const signed char
  cc_parser::yyr2_[] =
  {
       0,     2,     1,     2,     1,     3,     3,     1,     1,     1,
       1,     1,     3,     1,     4,     4,     3,     3,     1,     2,
       4,     2,     1,     2,     1,     3,     2,     5,     7,     5,
       9,     2,     2,     1,     2,     1,     3,     3,     1,     1,
       3,     3,     3,     3,     3,     3,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     1,     1,     1,
       1,     1,     3,     2,     4,     3,     3,     3,     2,     2,
       2,     2,     3,     1
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const cc_parser::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "LE", "GE", "EQ", "NE",
  "LT", "GT", "INC", "DEC", "NOT", "AND", "OR", "LS", "RS", "CONST_INT",
  "CONST_FLOAT", "CONST_CHAR", "CONST_STRING", "CONST_ID", "VOID", "INT",
  "FLOAT", "CHAR", "WHILE", "FOR", "IF", "ELSE", "RETURN", "BREAK",
  "CONTINUE", "ADD", "MINUS", "TIMES", "DIV", "MOD", "ASSIGN", "COMMA",
  "SEMI", "LP", "RP", "LSB", "RSB", "LB", "RB", "UMIUS", "LOWER_ELSE",
  "$accept", "program", "extern_def_list", "extern_def", "type_spec",
  "extern_dec_list", "var_dec", "func_dec", "var_list", "param_dec",
  "compound_stat", "stmt_list", "stmt", "def_list", "def", "dec_list",
  "dec", "exp", "args", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const unsigned char
  cc_parser::yyrline_[] =
  {
       0,    89,    89,    93,    94,    98,    99,   103,   104,   105,
     106,   110,   111,   115,   116,   120,   121,   125,   126,   130,
     134,   138,   139,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   157,   158,   162,   166,   167,   171,
     172,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   210,   211
  };

  void
  cc_parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  cc_parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


#line 14 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
} // cc_
#line 2241 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"

#line 214 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"


void cc_::cc_parser::error(const Location &loc, const std::string &msg) {
  std::cerr << "Error at " << loc << ": " << msg << std::endl;
}

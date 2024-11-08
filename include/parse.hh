// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton interface for Bison LALR(1) parsers in C++

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


/**
 ** \file /home/arch_/Work/Compiler-CC/src/parser/parse.hh
 ** Define the cc_::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

#ifndef YY_YY_HOME_ARCH_WORK_COMPILER_CC_SRC_PARSER_PARSE_HH_INCLUDED
# define YY_YY_HOME_ARCH_WORK_COMPILER_CC_SRC_PARSER_PARSE_HH_INCLUDED
// "%code requires" blocks.
#line 18 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"

    #include <iostream>
    #include <type_traits>
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

#line 66 "/home/arch_/Work/Compiler-CC/src/parser/parse.hh"

# include <cassert>
# include <cstdlib> // std::abort
# include <iostream>
# include <stdexcept>
# include <string>
# include <vector>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
#endif

#include <typeinfo>
#ifndef YY_ASSERT
# include <cassert>
# define YY_ASSERT assert
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

#line 14 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
namespace cc_ {
#line 207 "/home/arch_/Work/Compiler-CC/src/parser/parse.hh"




  /// A Bison parser.
  class cc_parser
  {
  public:
#ifdef YYSTYPE
# ifdef __GNUC__
#  pragma GCC message "bison: do not #define YYSTYPE in C++, use %define api.value.type"
# endif
    typedef YYSTYPE value_type;
#else
  /// A buffer to store and retrieve objects.
  ///
  /// Sort of a variant, but does not keep track of the nature
  /// of the stored data, since that knowledge is available
  /// via the current parser state.
  class value_type
  {
  public:
    /// Type of *this.
    typedef value_type self_type;

    /// Empty construction.
    value_type () YY_NOEXCEPT
      : yyraw_ ()
      , yytypeid_ (YY_NULLPTR)
    {}

    /// Construct and fill.
    template <typename T>
    value_type (YY_RVREF (T) t)
      : yytypeid_ (&typeid (T))
    {
      YY_ASSERT (sizeof (T) <= size);
      new (yyas_<T> ()) T (YY_MOVE (t));
    }

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    value_type (const self_type&) = delete;
    /// Non copyable.
    self_type& operator= (const self_type&) = delete;
#endif

    /// Destruction, allowed only if empty.
    ~value_type () YY_NOEXCEPT
    {
      YY_ASSERT (!yytypeid_);
    }

# if 201103L <= YY_CPLUSPLUS
    /// Instantiate a \a T in here from \a t.
    template <typename T, typename... U>
    T&
    emplace (U&&... u)
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (std::forward <U>(u)...);
    }
# else
    /// Instantiate an empty \a T in here.
    template <typename T>
    T&
    emplace ()
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T ();
    }

    /// Instantiate a \a T in here from \a t.
    template <typename T>
    T&
    emplace (const T& t)
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (t);
    }
# endif

    /// Instantiate an empty \a T in here.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build ()
    {
      return emplace<T> ();
    }

    /// Instantiate a \a T in here from \a t.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build (const T& t)
    {
      return emplace<T> (t);
    }

    /// Accessor to a built \a T.
    template <typename T>
    T&
    as () YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == typeid (T));
      YY_ASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Const accessor to a built \a T (for %printer).
    template <typename T>
    const T&
    as () const YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == typeid (T));
      YY_ASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Swap the content with \a that, of same type.
    ///
    /// Both variants must be built beforehand, because swapping the actual
    /// data requires reading it (with as()), and this is not possible on
    /// unconstructed variants: it would require some dynamic testing, which
    /// should not be the variant's responsibility.
    /// Swapping between built and (possibly) non-built is done with
    /// self_type::move ().
    template <typename T>
    void
    swap (self_type& that) YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == *that.yytypeid_);
      std::swap (as<T> (), that.as<T> ());
    }

    /// Move the content of \a that to this.
    ///
    /// Destroys \a that.
    template <typename T>
    void
    move (self_type& that)
    {
# if 201103L <= YY_CPLUSPLUS
      emplace<T> (std::move (that.as<T> ()));
# else
      emplace<T> ();
      swap<T> (that);
# endif
      that.destroy<T> ();
    }

# if 201103L <= YY_CPLUSPLUS
    /// Move the content of \a that to this.
    template <typename T>
    void
    move (self_type&& that)
    {
      emplace<T> (std::move (that.as<T> ()));
      that.destroy<T> ();
    }
#endif

    /// Copy the content of \a that to this.
    template <typename T>
    void
    copy (const self_type& that)
    {
      emplace<T> (that.as<T> ());
    }

    /// Destroy the stored \a T.
    template <typename T>
    void
    destroy ()
    {
      as<T> ().~T ();
      yytypeid_ = YY_NULLPTR;
    }

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    value_type (const self_type&);
    /// Non copyable.
    self_type& operator= (const self_type&);
#endif

    /// Accessor to raw memory as \a T.
    template <typename T>
    T*
    yyas_ () YY_NOEXCEPT
    {
      void *yyp = yyraw_;
      return static_cast<T*> (yyp);
     }

    /// Const accessor to raw memory as \a T.
    template <typename T>
    const T*
    yyas_ () const YY_NOEXCEPT
    {
      const void *yyp = yyraw_;
      return static_cast<const T*> (yyp);
     }

    /// An auxiliary type to compute the largest semantic type.
    union union_type
    {
      // CONST_CHAR
      // ADD
      // MINUS
      // TIMES
      // DIV
      // MOD
      // ASSIGN
      // COMMA
      // SEMI
      // LP
      // RP
      // LSB
      // RSB
      // LB
      // RB
      char dummy1[sizeof (char)];

      // CONST_FLOAT
      char dummy2[sizeof (float)];

      // CONST_INT
      char dummy3[sizeof (int)];

      // compound_stat
      char dummy4[sizeof (ptr<cmpdNode>)];

      // exp
      char dummy5[sizeof (ptr<expNode>)];

      // extern_def
      char dummy6[sizeof (ptr<externDefNode>)];

      // func_dec
      char dummy7[sizeof (ptr<funcDecNode>)];

      // dec
      char dummy8[sizeof (ptr<innerVarDecNode>)];

      // def
      char dummy9[sizeof (ptr<innerVarDefNode>)];

      // program
      // extern_def_list
      char dummy10[sizeof (ptr<programNode>)];

      // args
      char dummy11[sizeof (ptr<std::vector<ptr<expNode>>>)];

      // dec_list
      char dummy12[sizeof (ptr<std::vector<ptr<innerVarDecNode>>>)];

      // def_list
      char dummy13[sizeof (ptr<std::vector<ptr<innerVarDefNode>>>)];

      // stmt_list
      char dummy14[sizeof (ptr<std::vector<ptr<stmtNode>>>)];

      // extern_dec_list
      char dummy15[sizeof (ptr<std::vector<ptr<varDecNode>>>)];

      // var_list
      char dummy16[sizeof (ptr<std::vector<std::pair<std::string, ptr<varDecNode>>>>)];

      // stmt
      char dummy17[sizeof (ptr<stmtNode>)];

      // var_dec
      char dummy18[sizeof (ptr<varDecNode>)];

      // param_dec
      char dummy19[sizeof (std::pair<std::string, ptr<varDecNode>>)];

      // LE
      // GE
      // EQ
      // NE
      // LT
      // GT
      // INC
      // DEC
      // NOT
      // AND
      // OR
      // LS
      // RS
      // CONST_STRING
      // CONST_ID
      // VOID
      // INT
      // FLOAT
      // CHAR
      // WHILE
      // FOR
      // IF
      // ELSE
      // RETURN
      // BREAK
      // CONTINUE
      // type_spec
      char dummy20[sizeof (std::string)];
    };

    /// The size of the largest semantic type.
    enum { size = sizeof (union_type) };

    /// A buffer to store semantic values.
    union
    {
      /// Strongest alignment constraints.
      long double yyalign_me_;
      /// A buffer large enough to store any of the semantic values.
      char yyraw_[size];
    };

    /// Whether the content is built: if defined, the name of the stored type.
    const std::type_info *yytypeid_;
  };

#endif
    /// Backward compatibility (Bison 3.8).
    typedef value_type semantic_type;

    /// Symbol locations.
    typedef Location location_type;

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const location_type& l, const std::string& m)
        : std::runtime_error (m)
        , location (l)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
        , location (s.location)
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;

      location_type location;
    };

    /// Token kinds.
    struct token
    {
      enum token_kind_type
      {
        YYEMPTY = -2,
    YYEOF = 0,                     // "end of file"
    YYerror = 256,                 // error
    YYUNDEF = 257,                 // "invalid token"
    LE = 258,                      // LE
    GE = 259,                      // GE
    EQ = 260,                      // EQ
    NE = 261,                      // NE
    LT = 262,                      // LT
    GT = 263,                      // GT
    INC = 264,                     // INC
    DEC = 265,                     // DEC
    NOT = 266,                     // NOT
    AND = 267,                     // AND
    OR = 268,                      // OR
    LS = 269,                      // LS
    RS = 270,                      // RS
    CONST_INT = 271,               // CONST_INT
    CONST_FLOAT = 272,             // CONST_FLOAT
    CONST_CHAR = 273,              // CONST_CHAR
    CONST_STRING = 274,            // CONST_STRING
    CONST_ID = 275,                // CONST_ID
    VOID = 276,                    // VOID
    INT = 277,                     // INT
    FLOAT = 278,                   // FLOAT
    CHAR = 279,                    // CHAR
    WHILE = 280,                   // WHILE
    FOR = 281,                     // FOR
    IF = 282,                      // IF
    ELSE = 283,                    // ELSE
    RETURN = 284,                  // RETURN
    BREAK = 285,                   // BREAK
    CONTINUE = 286,                // CONTINUE
    ADD = 287,                     // ADD
    MINUS = 288,                   // MINUS
    TIMES = 289,                   // TIMES
    DIV = 290,                     // DIV
    MOD = 291,                     // MOD
    ASSIGN = 292,                  // ASSIGN
    COMMA = 293,                   // COMMA
    SEMI = 294,                    // SEMI
    LP = 295,                      // LP
    RP = 296,                      // RP
    LSB = 297,                     // LSB
    RSB = 298,                     // RSB
    LB = 299,                      // LB
    RB = 300,                      // RB
    UMIUS = 301,                   // UMIUS
    LOWER_ELSE = 302               // LOWER_ELSE
      };
      /// Backward compatibility alias (Bison 3.6).
      typedef token_kind_type yytokentype;
    };

    /// Token kind, as returned by yylex.
    typedef token::token_kind_type token_kind_type;

    /// Backward compatibility alias (Bison 3.6).
    typedef token_kind_type token_type;

    /// Symbol kinds.
    struct symbol_kind
    {
      enum symbol_kind_type
      {
        YYNTOKENS = 48, ///< Number of tokens.
        S_YYEMPTY = -2,
        S_YYEOF = 0,                             // "end of file"
        S_YYerror = 1,                           // error
        S_YYUNDEF = 2,                           // "invalid token"
        S_LE = 3,                                // LE
        S_GE = 4,                                // GE
        S_EQ = 5,                                // EQ
        S_NE = 6,                                // NE
        S_LT = 7,                                // LT
        S_GT = 8,                                // GT
        S_INC = 9,                               // INC
        S_DEC = 10,                              // DEC
        S_NOT = 11,                              // NOT
        S_AND = 12,                              // AND
        S_OR = 13,                               // OR
        S_LS = 14,                               // LS
        S_RS = 15,                               // RS
        S_CONST_INT = 16,                        // CONST_INT
        S_CONST_FLOAT = 17,                      // CONST_FLOAT
        S_CONST_CHAR = 18,                       // CONST_CHAR
        S_CONST_STRING = 19,                     // CONST_STRING
        S_CONST_ID = 20,                         // CONST_ID
        S_VOID = 21,                             // VOID
        S_INT = 22,                              // INT
        S_FLOAT = 23,                            // FLOAT
        S_CHAR = 24,                             // CHAR
        S_WHILE = 25,                            // WHILE
        S_FOR = 26,                              // FOR
        S_IF = 27,                               // IF
        S_ELSE = 28,                             // ELSE
        S_RETURN = 29,                           // RETURN
        S_BREAK = 30,                            // BREAK
        S_CONTINUE = 31,                         // CONTINUE
        S_ADD = 32,                              // ADD
        S_MINUS = 33,                            // MINUS
        S_TIMES = 34,                            // TIMES
        S_DIV = 35,                              // DIV
        S_MOD = 36,                              // MOD
        S_ASSIGN = 37,                           // ASSIGN
        S_COMMA = 38,                            // COMMA
        S_SEMI = 39,                             // SEMI
        S_LP = 40,                               // LP
        S_RP = 41,                               // RP
        S_LSB = 42,                              // LSB
        S_RSB = 43,                              // RSB
        S_LB = 44,                               // LB
        S_RB = 45,                               // RB
        S_UMIUS = 46,                            // UMIUS
        S_LOWER_ELSE = 47,                       // LOWER_ELSE
        S_YYACCEPT = 48,                         // $accept
        S_program = 49,                          // program
        S_extern_def_list = 50,                  // extern_def_list
        S_extern_def = 51,                       // extern_def
        S_type_spec = 52,                        // type_spec
        S_extern_dec_list = 53,                  // extern_dec_list
        S_var_dec = 54,                          // var_dec
        S_func_dec = 55,                         // func_dec
        S_var_list = 56,                         // var_list
        S_param_dec = 57,                        // param_dec
        S_compound_stat = 58,                    // compound_stat
        S_stmt_list = 59,                        // stmt_list
        S_stmt = 60,                             // stmt
        S_def_list = 61,                         // def_list
        S_def = 62,                              // def
        S_dec_list = 63,                         // dec_list
        S_dec = 64,                              // dec
        S_exp = 65,                              // exp
        S_args = 66                              // args
      };
    };

    /// (Internal) symbol kind.
    typedef symbol_kind::symbol_kind_type symbol_kind_type;

    /// The number of tokens.
    static const symbol_kind_type YYNTOKENS = symbol_kind::YYNTOKENS;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol kind
    /// via kind ().
    ///
    /// Provide access to semantic value and location.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol () YY_NOEXCEPT
        : value ()
        , location ()
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      basic_symbol (basic_symbol&& that)
        : Base (std::move (that))
        , value ()
        , location (std::move (that.location))
      {
        switch (this->kind ())
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
        value.move< char > (std::move (that.value));
        break;

      case symbol_kind::S_CONST_FLOAT: // CONST_FLOAT
        value.move< float > (std::move (that.value));
        break;

      case symbol_kind::S_CONST_INT: // CONST_INT
        value.move< int > (std::move (that.value));
        break;

      case symbol_kind::S_compound_stat: // compound_stat
        value.move< ptr<cmpdNode> > (std::move (that.value));
        break;

      case symbol_kind::S_exp: // exp
        value.move< ptr<expNode> > (std::move (that.value));
        break;

      case symbol_kind::S_extern_def: // extern_def
        value.move< ptr<externDefNode> > (std::move (that.value));
        break;

      case symbol_kind::S_func_dec: // func_dec
        value.move< ptr<funcDecNode> > (std::move (that.value));
        break;

      case symbol_kind::S_dec: // dec
        value.move< ptr<innerVarDecNode> > (std::move (that.value));
        break;

      case symbol_kind::S_def: // def
        value.move< ptr<innerVarDefNode> > (std::move (that.value));
        break;

      case symbol_kind::S_program: // program
      case symbol_kind::S_extern_def_list: // extern_def_list
        value.move< ptr<programNode> > (std::move (that.value));
        break;

      case symbol_kind::S_args: // args
        value.move< ptr<std::vector<ptr<expNode>>> > (std::move (that.value));
        break;

      case symbol_kind::S_dec_list: // dec_list
        value.move< ptr<std::vector<ptr<innerVarDecNode>>> > (std::move (that.value));
        break;

      case symbol_kind::S_def_list: // def_list
        value.move< ptr<std::vector<ptr<innerVarDefNode>>> > (std::move (that.value));
        break;

      case symbol_kind::S_stmt_list: // stmt_list
        value.move< ptr<std::vector<ptr<stmtNode>>> > (std::move (that.value));
        break;

      case symbol_kind::S_extern_dec_list: // extern_dec_list
        value.move< ptr<std::vector<ptr<varDecNode>>> > (std::move (that.value));
        break;

      case symbol_kind::S_var_list: // var_list
        value.move< ptr<std::vector<std::pair<std::string, ptr<varDecNode>>>> > (std::move (that.value));
        break;

      case symbol_kind::S_stmt: // stmt
        value.move< ptr<stmtNode> > (std::move (that.value));
        break;

      case symbol_kind::S_var_dec: // var_dec
        value.move< ptr<varDecNode> > (std::move (that.value));
        break;

      case symbol_kind::S_param_dec: // param_dec
        value.move< std::pair<std::string, ptr<varDecNode>> > (std::move (that.value));
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
        value.move< std::string > (std::move (that.value));
        break;

      default:
        break;
    }

      }
#endif

      /// Copy constructor.
      basic_symbol (const basic_symbol& that);

      /// Constructors for typed symbols.
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, location_type&& l)
        : Base (t)
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const location_type& l)
        : Base (t)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, char&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const char& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, float&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const float& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, int&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const int& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, ptr<cmpdNode>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const ptr<cmpdNode>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, ptr<expNode>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const ptr<expNode>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, ptr<externDefNode>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const ptr<externDefNode>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, ptr<funcDecNode>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const ptr<funcDecNode>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, ptr<innerVarDecNode>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const ptr<innerVarDecNode>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, ptr<innerVarDefNode>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const ptr<innerVarDefNode>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, ptr<programNode>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const ptr<programNode>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, ptr<std::vector<ptr<expNode>>>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const ptr<std::vector<ptr<expNode>>>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, ptr<std::vector<ptr<innerVarDecNode>>>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const ptr<std::vector<ptr<innerVarDecNode>>>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, ptr<std::vector<ptr<innerVarDefNode>>>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const ptr<std::vector<ptr<innerVarDefNode>>>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, ptr<std::vector<ptr<stmtNode>>>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const ptr<std::vector<ptr<stmtNode>>>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, ptr<std::vector<ptr<varDecNode>>>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const ptr<std::vector<ptr<varDecNode>>>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, ptr<std::vector<std::pair<std::string, ptr<varDecNode>>>>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const ptr<std::vector<std::pair<std::string, ptr<varDecNode>>>>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, ptr<stmtNode>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const ptr<stmtNode>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, ptr<varDecNode>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const ptr<varDecNode>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::pair<std::string, ptr<varDecNode>>&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::pair<std::string, ptr<varDecNode>>& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::string&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::string& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

      /// Destroy the symbol.
      ~basic_symbol ()
      {
        clear ();
      }



      /// Destroy contents, and record that is empty.
      void clear () YY_NOEXCEPT
      {
        // User destructor.
        symbol_kind_type yykind = this->kind ();
        basic_symbol<Base>& yysym = *this;
        (void) yysym;
        switch (yykind)
        {
       default:
          break;
        }

        // Value type destructor.
switch (yykind)
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
        value.template destroy< char > ();
        break;

      case symbol_kind::S_CONST_FLOAT: // CONST_FLOAT
        value.template destroy< float > ();
        break;

      case symbol_kind::S_CONST_INT: // CONST_INT
        value.template destroy< int > ();
        break;

      case symbol_kind::S_compound_stat: // compound_stat
        value.template destroy< ptr<cmpdNode> > ();
        break;

      case symbol_kind::S_exp: // exp
        value.template destroy< ptr<expNode> > ();
        break;

      case symbol_kind::S_extern_def: // extern_def
        value.template destroy< ptr<externDefNode> > ();
        break;

      case symbol_kind::S_func_dec: // func_dec
        value.template destroy< ptr<funcDecNode> > ();
        break;

      case symbol_kind::S_dec: // dec
        value.template destroy< ptr<innerVarDecNode> > ();
        break;

      case symbol_kind::S_def: // def
        value.template destroy< ptr<innerVarDefNode> > ();
        break;

      case symbol_kind::S_program: // program
      case symbol_kind::S_extern_def_list: // extern_def_list
        value.template destroy< ptr<programNode> > ();
        break;

      case symbol_kind::S_args: // args
        value.template destroy< ptr<std::vector<ptr<expNode>>> > ();
        break;

      case symbol_kind::S_dec_list: // dec_list
        value.template destroy< ptr<std::vector<ptr<innerVarDecNode>>> > ();
        break;

      case symbol_kind::S_def_list: // def_list
        value.template destroy< ptr<std::vector<ptr<innerVarDefNode>>> > ();
        break;

      case symbol_kind::S_stmt_list: // stmt_list
        value.template destroy< ptr<std::vector<ptr<stmtNode>>> > ();
        break;

      case symbol_kind::S_extern_dec_list: // extern_dec_list
        value.template destroy< ptr<std::vector<ptr<varDecNode>>> > ();
        break;

      case symbol_kind::S_var_list: // var_list
        value.template destroy< ptr<std::vector<std::pair<std::string, ptr<varDecNode>>>> > ();
        break;

      case symbol_kind::S_stmt: // stmt
        value.template destroy< ptr<stmtNode> > ();
        break;

      case symbol_kind::S_var_dec: // var_dec
        value.template destroy< ptr<varDecNode> > ();
        break;

      case symbol_kind::S_param_dec: // param_dec
        value.template destroy< std::pair<std::string, ptr<varDecNode>> > ();
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
        value.template destroy< std::string > ();
        break;

      default:
        break;
    }

        Base::clear ();
      }

      /// The user-facing name of this symbol.
      std::string name () const YY_NOEXCEPT
      {
        return cc_parser::symbol_name (this->kind ());
      }

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// Whether empty.
      bool empty () const YY_NOEXCEPT;

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      value_type value;

      /// The location.
      location_type location;

    private:
#if YY_CPLUSPLUS < 201103L
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& that);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_kind
    {
      /// The symbol kind as needed by the constructor.
      typedef token_kind_type kind_type;

      /// Default constructor.
      by_kind () YY_NOEXCEPT;

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      by_kind (by_kind&& that) YY_NOEXCEPT;
#endif

      /// Copy constructor.
      by_kind (const by_kind& that) YY_NOEXCEPT;

      /// Constructor from (external) token numbers.
      by_kind (kind_type t) YY_NOEXCEPT;



      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_kind& that);

      /// The (internal) type number (corresponding to \a type).
      /// \a empty when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// The symbol kind.
      /// \a S_YYEMPTY when empty.
      symbol_kind_type kind_;
    };

    /// Backward compatibility for a private implementation detail (Bison 3.6).
    typedef by_kind by_type;

    /// "External" symbols: returned by the scanner.
    struct symbol_type : basic_symbol<by_kind>
    {
      /// Superclass.
      typedef basic_symbol<by_kind> super_type;

      /// Empty symbol.
      symbol_type () YY_NOEXCEPT {}

      /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, location_type l)
        : super_type (token_kind_type (tok), std::move (l))
#else
      symbol_type (int tok, const location_type& l)
        : super_type (token_kind_type (tok), l)
#endif
      {
#if !defined _MSC_VER || defined __clang__
        YY_ASSERT (tok == token::YYEOF
                   || (token::YYerror <= tok && tok <= token::YYUNDEF)
                   || (token::UMIUS <= tok && tok <= token::LOWER_ELSE));
#endif
      }
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, char v, location_type l)
        : super_type (token_kind_type (tok), std::move (v), std::move (l))
#else
      symbol_type (int tok, const char& v, const location_type& l)
        : super_type (token_kind_type (tok), v, l)
#endif
      {
#if !defined _MSC_VER || defined __clang__
        YY_ASSERT (tok == token::CONST_CHAR
                   || (token::ADD <= tok && tok <= token::RB));
#endif
      }
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, float v, location_type l)
        : super_type (token_kind_type (tok), std::move (v), std::move (l))
#else
      symbol_type (int tok, const float& v, const location_type& l)
        : super_type (token_kind_type (tok), v, l)
#endif
      {
#if !defined _MSC_VER || defined __clang__
        YY_ASSERT (tok == token::CONST_FLOAT);
#endif
      }
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, int v, location_type l)
        : super_type (token_kind_type (tok), std::move (v), std::move (l))
#else
      symbol_type (int tok, const int& v, const location_type& l)
        : super_type (token_kind_type (tok), v, l)
#endif
      {
#if !defined _MSC_VER || defined __clang__
        YY_ASSERT (tok == token::CONST_INT);
#endif
      }
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, std::string v, location_type l)
        : super_type (token_kind_type (tok), std::move (v), std::move (l))
#else
      symbol_type (int tok, const std::string& v, const location_type& l)
        : super_type (token_kind_type (tok), v, l)
#endif
      {
#if !defined _MSC_VER || defined __clang__
        YY_ASSERT ((token::LE <= tok && tok <= token::RS)
                   || (token::CONST_STRING <= tok && tok <= token::CONTINUE));
#endif
      }
    };

    /// Build a parser object.
    cc_parser (cc_Lexer &lexer_yyarg);
    virtual ~cc_parser ();

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    cc_parser (const cc_parser&) = delete;
    /// Non copyable.
    cc_parser& operator= (const cc_parser&) = delete;
#endif

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error (const location_type& loc, const std::string& msg);

    /// Report a syntax error.
    void error (const syntax_error& err);

    /// The user-facing name of the symbol whose (internal) number is
    /// YYSYMBOL.  No bounds checking.
    static std::string symbol_name (symbol_kind_type yysymbol);

    // Implementation of make_symbol for each token kind.
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYEOF (location_type l)
      {
        return symbol_type (token::YYEOF, std::move (l));
      }
#else
      static
      symbol_type
      make_YYEOF (const location_type& l)
      {
        return symbol_type (token::YYEOF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYerror (location_type l)
      {
        return symbol_type (token::YYerror, std::move (l));
      }
#else
      static
      symbol_type
      make_YYerror (const location_type& l)
      {
        return symbol_type (token::YYerror, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_YYUNDEF (location_type l)
      {
        return symbol_type (token::YYUNDEF, std::move (l));
      }
#else
      static
      symbol_type
      make_YYUNDEF (const location_type& l)
      {
        return symbol_type (token::YYUNDEF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LE (std::string v, location_type l)
      {
        return symbol_type (token::LE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_LE (const std::string& v, const location_type& l)
      {
        return symbol_type (token::LE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GE (std::string v, location_type l)
      {
        return symbol_type (token::GE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_GE (const std::string& v, const location_type& l)
      {
        return symbol_type (token::GE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EQ (std::string v, location_type l)
      {
        return symbol_type (token::EQ, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_EQ (const std::string& v, const location_type& l)
      {
        return symbol_type (token::EQ, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NE (std::string v, location_type l)
      {
        return symbol_type (token::NE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_NE (const std::string& v, const location_type& l)
      {
        return symbol_type (token::NE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LT (std::string v, location_type l)
      {
        return symbol_type (token::LT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_LT (const std::string& v, const location_type& l)
      {
        return symbol_type (token::LT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GT (std::string v, location_type l)
      {
        return symbol_type (token::GT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_GT (const std::string& v, const location_type& l)
      {
        return symbol_type (token::GT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INC (std::string v, location_type l)
      {
        return symbol_type (token::INC, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_INC (const std::string& v, const location_type& l)
      {
        return symbol_type (token::INC, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DEC (std::string v, location_type l)
      {
        return symbol_type (token::DEC, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_DEC (const std::string& v, const location_type& l)
      {
        return symbol_type (token::DEC, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NOT (std::string v, location_type l)
      {
        return symbol_type (token::NOT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_NOT (const std::string& v, const location_type& l)
      {
        return symbol_type (token::NOT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AND (std::string v, location_type l)
      {
        return symbol_type (token::AND, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_AND (const std::string& v, const location_type& l)
      {
        return symbol_type (token::AND, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OR (std::string v, location_type l)
      {
        return symbol_type (token::OR, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_OR (const std::string& v, const location_type& l)
      {
        return symbol_type (token::OR, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LS (std::string v, location_type l)
      {
        return symbol_type (token::LS, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_LS (const std::string& v, const location_type& l)
      {
        return symbol_type (token::LS, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RS (std::string v, location_type l)
      {
        return symbol_type (token::RS, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_RS (const std::string& v, const location_type& l)
      {
        return symbol_type (token::RS, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONST_INT (int v, location_type l)
      {
        return symbol_type (token::CONST_INT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_CONST_INT (const int& v, const location_type& l)
      {
        return symbol_type (token::CONST_INT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONST_FLOAT (float v, location_type l)
      {
        return symbol_type (token::CONST_FLOAT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_CONST_FLOAT (const float& v, const location_type& l)
      {
        return symbol_type (token::CONST_FLOAT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONST_CHAR (char v, location_type l)
      {
        return symbol_type (token::CONST_CHAR, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_CONST_CHAR (const char& v, const location_type& l)
      {
        return symbol_type (token::CONST_CHAR, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONST_STRING (std::string v, location_type l)
      {
        return symbol_type (token::CONST_STRING, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_CONST_STRING (const std::string& v, const location_type& l)
      {
        return symbol_type (token::CONST_STRING, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONST_ID (std::string v, location_type l)
      {
        return symbol_type (token::CONST_ID, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_CONST_ID (const std::string& v, const location_type& l)
      {
        return symbol_type (token::CONST_ID, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_VOID (std::string v, location_type l)
      {
        return symbol_type (token::VOID, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_VOID (const std::string& v, const location_type& l)
      {
        return symbol_type (token::VOID, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INT (std::string v, location_type l)
      {
        return symbol_type (token::INT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_INT (const std::string& v, const location_type& l)
      {
        return symbol_type (token::INT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FLOAT (std::string v, location_type l)
      {
        return symbol_type (token::FLOAT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_FLOAT (const std::string& v, const location_type& l)
      {
        return symbol_type (token::FLOAT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CHAR (std::string v, location_type l)
      {
        return symbol_type (token::CHAR, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_CHAR (const std::string& v, const location_type& l)
      {
        return symbol_type (token::CHAR, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_WHILE (std::string v, location_type l)
      {
        return symbol_type (token::WHILE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_WHILE (const std::string& v, const location_type& l)
      {
        return symbol_type (token::WHILE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FOR (std::string v, location_type l)
      {
        return symbol_type (token::FOR, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_FOR (const std::string& v, const location_type& l)
      {
        return symbol_type (token::FOR, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IF (std::string v, location_type l)
      {
        return symbol_type (token::IF, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_IF (const std::string& v, const location_type& l)
      {
        return symbol_type (token::IF, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ELSE (std::string v, location_type l)
      {
        return symbol_type (token::ELSE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ELSE (const std::string& v, const location_type& l)
      {
        return symbol_type (token::ELSE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RETURN (std::string v, location_type l)
      {
        return symbol_type (token::RETURN, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_RETURN (const std::string& v, const location_type& l)
      {
        return symbol_type (token::RETURN, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BREAK (std::string v, location_type l)
      {
        return symbol_type (token::BREAK, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_BREAK (const std::string& v, const location_type& l)
      {
        return symbol_type (token::BREAK, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONTINUE (std::string v, location_type l)
      {
        return symbol_type (token::CONTINUE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_CONTINUE (const std::string& v, const location_type& l)
      {
        return symbol_type (token::CONTINUE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ADD (char v, location_type l)
      {
        return symbol_type (token::ADD, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ADD (const char& v, const location_type& l)
      {
        return symbol_type (token::ADD, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MINUS (char v, location_type l)
      {
        return symbol_type (token::MINUS, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_MINUS (const char& v, const location_type& l)
      {
        return symbol_type (token::MINUS, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TIMES (char v, location_type l)
      {
        return symbol_type (token::TIMES, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_TIMES (const char& v, const location_type& l)
      {
        return symbol_type (token::TIMES, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DIV (char v, location_type l)
      {
        return symbol_type (token::DIV, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_DIV (const char& v, const location_type& l)
      {
        return symbol_type (token::DIV, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MOD (char v, location_type l)
      {
        return symbol_type (token::MOD, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_MOD (const char& v, const location_type& l)
      {
        return symbol_type (token::MOD, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASSIGN (char v, location_type l)
      {
        return symbol_type (token::ASSIGN, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ASSIGN (const char& v, const location_type& l)
      {
        return symbol_type (token::ASSIGN, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COMMA (char v, location_type l)
      {
        return symbol_type (token::COMMA, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_COMMA (const char& v, const location_type& l)
      {
        return symbol_type (token::COMMA, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SEMI (char v, location_type l)
      {
        return symbol_type (token::SEMI, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_SEMI (const char& v, const location_type& l)
      {
        return symbol_type (token::SEMI, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LP (char v, location_type l)
      {
        return symbol_type (token::LP, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_LP (const char& v, const location_type& l)
      {
        return symbol_type (token::LP, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RP (char v, location_type l)
      {
        return symbol_type (token::RP, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_RP (const char& v, const location_type& l)
      {
        return symbol_type (token::RP, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LSB (char v, location_type l)
      {
        return symbol_type (token::LSB, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_LSB (const char& v, const location_type& l)
      {
        return symbol_type (token::LSB, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RSB (char v, location_type l)
      {
        return symbol_type (token::RSB, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_RSB (const char& v, const location_type& l)
      {
        return symbol_type (token::RSB, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LB (char v, location_type l)
      {
        return symbol_type (token::LB, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_LB (const char& v, const location_type& l)
      {
        return symbol_type (token::LB, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RB (char v, location_type l)
      {
        return symbol_type (token::RB, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_RB (const char& v, const location_type& l)
      {
        return symbol_type (token::RB, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_UMIUS (location_type l)
      {
        return symbol_type (token::UMIUS, std::move (l));
      }
#else
      static
      symbol_type
      make_UMIUS (const location_type& l)
      {
        return symbol_type (token::UMIUS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LOWER_ELSE (location_type l)
      {
        return symbol_type (token::LOWER_ELSE, std::move (l));
      }
#else
      static
      symbol_type
      make_LOWER_ELSE (const location_type& l)
      {
        return symbol_type (token::LOWER_ELSE, l);
      }
#endif


    class context
    {
    public:
      context (const cc_parser& yyparser, const symbol_type& yyla);
      const symbol_type& lookahead () const YY_NOEXCEPT { return yyla_; }
      symbol_kind_type token () const YY_NOEXCEPT { return yyla_.kind (); }
      const location_type& location () const YY_NOEXCEPT { return yyla_.location; }

      /// Put in YYARG at most YYARGN of the expected tokens, and return the
      /// number of tokens stored in YYARG.  If YYARG is null, return the
      /// number of expected tokens (guaranteed to be less than YYNTOKENS).
      int expected_tokens (symbol_kind_type yyarg[], int yyargn) const;

    private:
      const cc_parser& yyparser_;
      const symbol_type& yyla_;
    };

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    cc_parser (const cc_parser&);
    /// Non copyable.
    cc_parser& operator= (const cc_parser&);
#endif


    /// Stored state numbers (used for stacks).
    typedef unsigned char state_type;

    /// The arguments of the error message.
    int yy_syntax_error_arguments_ (const context& yyctx,
                                    symbol_kind_type yyarg[], int yyargn) const;

    /// Generate an error message.
    /// \param yyctx     the context in which the error occurred.
    virtual std::string yysyntax_error_ (const context& yyctx) const;
    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    static state_type yy_lr_goto_state_ (state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT;

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT;

    static const signed char yypact_ninf_;
    static const signed char yytable_ninf_;

    /// Convert a scanner token kind \a t to a symbol kind.
    /// In theory \a t should be a token_kind_type, but character literals
    /// are valid, yet not members of the token_kind_type enum.
    static symbol_kind_type yytranslate_ (int t) YY_NOEXCEPT;

    /// Convert the symbol name \a n to a form suitable for a diagnostic.
    static std::string yytnamerr_ (const char *yystr);

    /// For a symbol, its name in clear.
    static const char* const yytname_[];


    // Tables.
    // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
    // STATE-NUM.
    static const short yypact_[];

    // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
    // Performed when YYTABLE does not specify something else to do.  Zero
    // means the default is an error.
    static const signed char yydefact_[];

    // YYPGOTO[NTERM-NUM].
    static const signed char yypgoto_[];

    // YYDEFGOTO[NTERM-NUM].
    static const signed char yydefgoto_[];

    // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
    // positive, shift that token.  If negative, reduce the rule whose
    // number is the opposite.  If YYTABLE_NINF, syntax error.
    static const unsigned char yytable_[];

    static const short yycheck_[];

    // YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
    // state STATE-NUM.
    static const signed char yystos_[];

    // YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.
    static const signed char yyr1_[];

    // YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.
    static const signed char yyr2_[];


#if YYDEBUG
    // YYRLINE[YYN] -- Source line where rule number YYN was defined.
    static const unsigned char yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r) const;
    /// Print the state stack on the debug stream.
    virtual void yy_stack_print_ () const;

    /// Debugging level.
    int yydebug_;
    /// Debug stream.
    std::ostream* yycdebug_;

    /// \brief Display a symbol kind, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

  private:
    /// Type access provider for state based symbols.
    struct by_state
    {
      /// Default constructor.
      by_state () YY_NOEXCEPT;

      /// The symbol kind as needed by the constructor.
      typedef state_type kind_type;

      /// Constructor.
      by_state (kind_type s) YY_NOEXCEPT;

      /// Copy constructor.
      by_state (const by_state& that) YY_NOEXCEPT;

      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_state& that);

      /// The symbol kind (corresponding to \a state).
      /// \a symbol_kind::S_YYEMPTY when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// The state number used to denote an empty symbol.
      /// We use the initial state, as it does not have a value.
      enum { empty_state = 0 };

      /// The state.
      /// \a empty when empty.
      state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state>
    {
      /// Superclass.
      typedef basic_symbol<by_state> super_type;
      /// Construct an empty symbol.
      stack_symbol_type ();
      /// Move or copy construction.
      stack_symbol_type (YY_RVREF (stack_symbol_type) that);
      /// Steal the contents from \a sym to build this.
      stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
      /// Assignment, needed by push_back by some old implementations.
      /// Moves the contents of that.
      stack_symbol_type& operator= (stack_symbol_type& that);

      /// Assignment, needed by push_back by other implementations.
      /// Needed by some other old implementations.
      stack_symbol_type& operator= (const stack_symbol_type& that);
#endif
    };

    /// A stack with random access from its top.
    template <typename T, typename S = std::vector<T> >
    class stack
    {
    public:
      // Hide our reversed order.
      typedef typename S::iterator iterator;
      typedef typename S::const_iterator const_iterator;
      typedef typename S::size_type size_type;
      typedef typename std::ptrdiff_t index_type;

      stack (size_type n = 200) YY_NOEXCEPT
        : seq_ (n)
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Non copyable.
      stack (const stack&) = delete;
      /// Non copyable.
      stack& operator= (const stack&) = delete;
#endif

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (index_type i) const
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (index_type i)
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Steal the contents of \a t.
      ///
      /// Close to move-semantics.
      void
      push (YY_MOVE_REF (T) t)
      {
        seq_.push_back (T ());
        operator[] (0).move (t);
      }

      /// Pop elements from the stack.
      void
      pop (std::ptrdiff_t n = 1) YY_NOEXCEPT
      {
        for (; 0 < n; --n)
          seq_.pop_back ();
      }

      /// Pop all elements from the stack.
      void
      clear () YY_NOEXCEPT
      {
        seq_.clear ();
      }

      /// Number of elements on the stack.
      index_type
      size () const YY_NOEXCEPT
      {
        return index_type (seq_.size ());
      }

      /// Iterator on top of the stack (going downwards).
      const_iterator
      begin () const YY_NOEXCEPT
      {
        return seq_.begin ();
      }

      /// Bottom of the stack.
      const_iterator
      end () const YY_NOEXCEPT
      {
        return seq_.end ();
      }

      /// Present a slice of the top of a stack.
      class slice
      {
      public:
        slice (const stack& stack, index_type range) YY_NOEXCEPT
          : stack_ (stack)
          , range_ (range)
        {}

        const T&
        operator[] (index_type i) const
        {
          return stack_[range_ - i];
        }

      private:
        const stack& stack_;
        index_type range_;
      };

    private:
#if YY_CPLUSPLUS < 201103L
      /// Non copyable.
      stack (const stack&);
      /// Non copyable.
      stack& operator= (const stack&);
#endif
      /// The wrapped container.
      S seq_;
    };


    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;

    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param sym  the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a sym.value is stolen.
    void yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym);

    /// Pop \a n symbols from the stack.
    void yypop_ (int n = 1) YY_NOEXCEPT;

    /// Constants.
    enum
    {
      yylast_ = 650,     ///< Last index in yytable_.
      yynnts_ = 19,  ///< Number of nonterminal symbols.
      yyfinal_ = 9 ///< Termination state number.
    };


    // User arguments.
    cc_Lexer &lexer;

  };

  inline
  cc_parser::symbol_kind_type
  cc_parser::yytranslate_ (int t) YY_NOEXCEPT
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const signed char
    translate_table[] =
    {
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
    };
    // Last valid token kind.
    const int code_max = 302;

    if (t <= 0)
      return symbol_kind::S_YYEOF;
    else if (t <= code_max)
      return static_cast <symbol_kind_type> (translate_table[t]);
    else
      return symbol_kind::S_YYUNDEF;
  }

  // basic_symbol.
  template <typename Base>
  cc_parser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value ()
    , location (that.location)
  {
    switch (this->kind ())
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
        value.copy< char > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_CONST_FLOAT: // CONST_FLOAT
        value.copy< float > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_CONST_INT: // CONST_INT
        value.copy< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_compound_stat: // compound_stat
        value.copy< ptr<cmpdNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_exp: // exp
        value.copy< ptr<expNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_extern_def: // extern_def
        value.copy< ptr<externDefNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_func_dec: // func_dec
        value.copy< ptr<funcDecNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_dec: // dec
        value.copy< ptr<innerVarDecNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_def: // def
        value.copy< ptr<innerVarDefNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_program: // program
      case symbol_kind::S_extern_def_list: // extern_def_list
        value.copy< ptr<programNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_args: // args
        value.copy< ptr<std::vector<ptr<expNode>>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_dec_list: // dec_list
        value.copy< ptr<std::vector<ptr<innerVarDecNode>>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_def_list: // def_list
        value.copy< ptr<std::vector<ptr<innerVarDefNode>>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_list: // stmt_list
        value.copy< ptr<std::vector<ptr<stmtNode>>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_extern_dec_list: // extern_dec_list
        value.copy< ptr<std::vector<ptr<varDecNode>>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_var_list: // var_list
        value.copy< ptr<std::vector<std::pair<std::string, ptr<varDecNode>>>> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt: // stmt
        value.copy< ptr<stmtNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_var_dec: // var_dec
        value.copy< ptr<varDecNode> > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_param_dec: // param_dec
        value.copy< std::pair<std::string, ptr<varDecNode>> > (YY_MOVE (that.value));
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
        value.copy< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

  }




  template <typename Base>
  cc_parser::symbol_kind_type
  cc_parser::basic_symbol<Base>::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }


  template <typename Base>
  bool
  cc_parser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return this->kind () == symbol_kind::S_YYEMPTY;
  }

  template <typename Base>
  void
  cc_parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    switch (this->kind ())
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
        value.move< char > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_CONST_FLOAT: // CONST_FLOAT
        value.move< float > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_CONST_INT: // CONST_INT
        value.move< int > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_compound_stat: // compound_stat
        value.move< ptr<cmpdNode> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_exp: // exp
        value.move< ptr<expNode> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_extern_def: // extern_def
        value.move< ptr<externDefNode> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_func_dec: // func_dec
        value.move< ptr<funcDecNode> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_dec: // dec
        value.move< ptr<innerVarDecNode> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_def: // def
        value.move< ptr<innerVarDefNode> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_program: // program
      case symbol_kind::S_extern_def_list: // extern_def_list
        value.move< ptr<programNode> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_args: // args
        value.move< ptr<std::vector<ptr<expNode>>> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_dec_list: // dec_list
        value.move< ptr<std::vector<ptr<innerVarDecNode>>> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_def_list: // def_list
        value.move< ptr<std::vector<ptr<innerVarDefNode>>> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_stmt_list: // stmt_list
        value.move< ptr<std::vector<ptr<stmtNode>>> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_extern_dec_list: // extern_dec_list
        value.move< ptr<std::vector<ptr<varDecNode>>> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_var_list: // var_list
        value.move< ptr<std::vector<std::pair<std::string, ptr<varDecNode>>>> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_stmt: // stmt
        value.move< ptr<stmtNode> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_var_dec: // var_dec
        value.move< ptr<varDecNode> > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_param_dec: // param_dec
        value.move< std::pair<std::string, ptr<varDecNode>> > (YY_MOVE (s.value));
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
        value.move< std::string > (YY_MOVE (s.value));
        break;

      default:
        break;
    }

    location = YY_MOVE (s.location);
  }

  // by_kind.
  inline
  cc_parser::by_kind::by_kind () YY_NOEXCEPT
    : kind_ (symbol_kind::S_YYEMPTY)
  {}

#if 201103L <= YY_CPLUSPLUS
  inline
  cc_parser::by_kind::by_kind (by_kind&& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {
    that.clear ();
  }
#endif

  inline
  cc_parser::by_kind::by_kind (const by_kind& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {}

  inline
  cc_parser::by_kind::by_kind (token_kind_type t) YY_NOEXCEPT
    : kind_ (yytranslate_ (t))
  {}



  inline
  void
  cc_parser::by_kind::clear () YY_NOEXCEPT
  {
    kind_ = symbol_kind::S_YYEMPTY;
  }

  inline
  void
  cc_parser::by_kind::move (by_kind& that)
  {
    kind_ = that.kind_;
    that.clear ();
  }

  inline
  cc_parser::symbol_kind_type
  cc_parser::by_kind::kind () const YY_NOEXCEPT
  {
    return kind_;
  }


  inline
  cc_parser::symbol_kind_type
  cc_parser::by_kind::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }


#line 14 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"
} // cc_
#line 2976 "/home/arch_/Work/Compiler-CC/src/parser/parse.hh"




#endif // !YY_YY_HOME_ARCH_WORK_COMPILER_CC_SRC_PARSER_PARSE_HH_INCLUDED

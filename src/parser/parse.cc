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
#line 28 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"

  #include "lex.hh"

#line 43 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"




#include "parse.hh"


// Unqualified %code blocks.
#line 32 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"

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

#line 541 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"

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


  const signed char cc_parser::yypact_ninf_ = -52;

  const signed char cc_parser::yytable_ninf_ = -1;

  const short
  cc_parser::yypact_[] =
  {
      57,   -52,   -52,   -52,   -52,     4,   -52,    57,     2,   -52,
     -52,    -3,   -15,   -27,    16,    -5,   -52,    18,    30,    57,
     -52,   -52,    18,    28,    36,   -52,   -52,    33,    18,   353,
      57,    40,   -52,    57,   -52,   -34,    44,    47,   479,   479,
     479,   -52,   -52,   -52,    48,    59,    70,    83,   467,    89,
      90,   479,   479,   -52,    52,   353,    99,   -52,   -52,   479,
     -52,    18,   395,   395,   395,   452,   479,   479,   479,   -52,
     112,   -52,   -52,   395,   152,   -52,   -52,   479,   479,   479,
     479,   479,   479,   -52,   -52,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   -52,   479,   324,   -52,   -52,
     165,    96,   205,   218,   258,   -52,   -52,    20,    20,    22,
      22,    20,    20,    -6,    61,   430,   430,   443,   443,   408,
     408,   408,   -52,    58,   479,   -52,   353,   479,   353,   -52,
     -52,   -52,   271,   102,   479,   353,   311,   -52,   353,   -52
  };

  const signed char
  cc_parser::yydefact_[] =
  {
       4,     9,     7,     8,    10,     0,     2,     4,     0,     1,
       3,    13,     0,    11,     0,     0,     5,     0,     0,    34,
       6,    16,     0,     0,    18,    13,    12,     0,     0,    22,
      34,    19,    15,     0,    14,    38,     0,    36,     0,     0,
       0,    57,    58,    59,    56,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,    22,     0,    33,    17,     0,
      35,     0,    66,    67,    61,     0,     0,     0,     0,    26,
       0,    31,    32,    55,     0,    20,    21,     0,     0,     0,
       0,     0,     0,    68,    69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,     0,    39,    37,    63,
      71,     0,     0,     0,     0,    25,    60,    44,    49,    46,
      47,    43,    48,    41,    42,    64,    65,    50,    51,    52,
      53,    54,    40,     0,     0,    62,     0,     0,     0,    45,
      70,    29,     0,    27,     0,     0,     0,    28,     0,    30
  };

  const short
  cc_parser::yypgoto_[] =
  {
     -52,   -52,   132,   -52,   -10,   123,   -16,   -52,   109,   -52,
     129,    95,   -51,   122,   -52,    92,   -52,   -38,    39
  };

  const signed char
  cc_parser::yydefgoto_[] =
  {
       0,     5,     6,     7,     8,    12,    13,    14,    23,    24,
      53,    54,    55,    29,    30,    36,    37,    56,   101
  };

  const unsigned char
  cc_parser::yytable_[] =
  {
      62,    63,    64,    59,     9,    22,    31,    86,    18,    28,
      70,    17,    35,    73,    74,    18,     1,     2,     3,     4,
      28,    97,    11,    22,    16,    79,    80,   100,   102,   103,
     104,    94,    85,    86,    85,    86,    21,    15,    25,   107,
     108,   109,   110,   111,   112,    35,    27,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    94,   123,    94,
      19,    77,    78,    79,    80,    81,    82,    83,    84,    32,
      85,    86,    87,    88,    33,   131,    34,   133,     1,     2,
       3,     4,    18,    60,   137,    61,   100,   139,    65,   132,
      89,    90,    91,    92,    93,    94,   136,    75,    94,    66,
      96,   129,    77,    78,    79,    80,    81,    82,    83,    84,
      67,    85,    86,    87,    88,    77,    78,    79,    80,    81,
      82,    83,    84,    68,    85,    86,    87,    88,    71,    72,
     135,    89,    90,    91,    92,    93,    94,   125,    95,    10,
      26,    96,    58,    20,    89,    90,    91,    92,    93,    94,
      76,   105,    57,    98,    96,    77,    78,    79,    80,    81,
      82,    83,    84,   130,    85,    86,    87,    88,    77,    78,
      79,    80,    81,    82,    83,    84,     0,    85,    86,    87,
      88,     0,     0,     0,    89,    90,    91,    92,    93,    94,
       0,     0,     0,   106,    96,     0,     0,    89,    90,    91,
      92,    93,    94,   124,     0,     0,     0,    96,    77,    78,
      79,    80,    81,    82,    83,    84,     0,    85,    86,    87,
      88,    77,    78,    79,    80,    81,    82,    83,    84,     0,
      85,    86,    87,    88,     0,     0,     0,    89,    90,    91,
      92,    93,    94,     0,     0,     0,   126,    96,     0,     0,
      89,    90,    91,    92,    93,    94,   127,     0,     0,     0,
      96,    77,    78,    79,    80,    81,    82,    83,    84,     0,
      85,    86,    87,    88,    77,    78,    79,    80,    81,    82,
      83,    84,     0,    85,    86,    87,    88,     0,     0,     0,
      89,    90,    91,    92,    93,    94,     0,     0,     0,   128,
      96,     0,     0,    89,    90,    91,    92,    93,    94,   134,
       0,     0,     0,    96,    77,    78,    79,    80,    81,    82,
      83,    84,     0,    85,    86,    87,    88,    77,    78,    79,
      80,    81,    82,    83,    84,     0,    85,    86,    87,    88,
       0,     0,     0,    89,    90,    91,    92,    93,    94,     0,
       0,     0,   138,    96,     0,     0,    89,    90,    91,    92,
      93,    94,    38,    39,    40,     0,    96,     0,     0,    41,
      42,     0,    43,    44,     0,     0,     0,     0,    45,    46,
      47,     0,    48,    49,    50,     0,    51,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,    19,    77,    78,
      79,    80,    81,    82,    83,    84,     0,    85,    86,    87,
      88,    77,    78,    79,    80,    81,    82,     0,     0,     0,
      85,    86,    87,    88,     0,     0,     0,    89,    90,    91,
      92,    93,    94,    77,    78,    79,    80,    81,    82,     0,
      89,    90,    85,    86,     0,    94,    77,    78,    79,    80,
      81,    82,     0,     0,     0,    85,    86,    87,    88,     0,
       0,    38,    39,    40,     0,     0,     0,    94,    41,    42,
       0,    43,    44,     0,     0,     0,    38,    39,    40,     0,
      94,     0,     0,    41,    42,    51,    43,    44,    38,    39,
      40,     0,    52,    99,     0,    41,    42,     0,    43,    44,
      51,     0,     0,     0,     0,     0,    69,    52,     0,     0,
       0,     0,    51,     0,     0,     0,     0,     0,     0,    52
  };

  const short
  cc_parser::yycheck_[] =
  {
      38,    39,    40,    37,     0,    15,    22,    13,    42,    19,
      48,    38,    28,    51,    52,    42,    21,    22,    23,    24,
      30,    59,    20,    33,    39,     5,     6,    65,    66,    67,
      68,    37,    12,    13,    12,    13,    41,    40,    20,    77,
      78,    79,    80,    81,    82,    61,    16,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    37,    96,    37,
      44,     3,     4,     5,     6,     7,     8,     9,    10,    41,
      12,    13,    14,    15,    38,   126,    43,   128,    21,    22,
      23,    24,    42,    39,   135,    38,   124,   138,    40,   127,
      32,    33,    34,    35,    36,    37,   134,    45,    37,    40,
      42,    43,     3,     4,     5,     6,     7,     8,     9,    10,
      40,    12,    13,    14,    15,     3,     4,     5,     6,     7,
       8,     9,    10,    40,    12,    13,    14,    15,    39,    39,
      28,    32,    33,    34,    35,    36,    37,    41,    39,     7,
      17,    42,    33,    14,    32,    33,    34,    35,    36,    37,
      55,    39,    30,    61,    42,     3,     4,     5,     6,     7,
       8,     9,    10,   124,    12,    13,    14,    15,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    41,    42,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    42,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    41,    42,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    -1,
      42,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41,
      42,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    42,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    41,    42,    -1,    -1,    32,    33,    34,    35,
      36,    37,     9,    10,    11,    -1,    42,    -1,    -1,    16,
      17,    -1,    19,    20,    -1,    -1,    -1,    -1,    25,    26,
      27,    -1,    29,    30,    31,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    44,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      12,    13,    14,    15,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,     3,     4,     5,     6,     7,     8,    -1,
      32,    33,    12,    13,    -1,    37,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    12,    13,    14,    15,    -1,
      -1,     9,    10,    11,    -1,    -1,    -1,    37,    16,    17,
      -1,    19,    20,    -1,    -1,    -1,     9,    10,    11,    -1,
      37,    -1,    -1,    16,    17,    33,    19,    20,     9,    10,
      11,    -1,    40,    41,    -1,    16,    17,    -1,    19,    20,
      33,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40
  };

  const signed char
  cc_parser::yystos_[] =
  {
       0,    21,    22,    23,    24,    49,    50,    51,    52,     0,
      50,    20,    53,    54,    55,    40,    39,    38,    42,    44,
      58,    41,    52,    56,    57,    20,    53,    16,    52,    61,
      62,    54,    41,    38,    43,    54,    63,    64,     9,    10,
      11,    16,    17,    19,    20,    25,    26,    27,    29,    30,
      31,    33,    40,    58,    59,    60,    65,    61,    56,    37,
      39,    38,    65,    65,    65,    40,    40,    40,    40,    39,
      65,    39,    39,    65,    65,    45,    59,     3,     4,     5,
       6,     7,     8,     9,    10,    12,    13,    14,    15,    32,
      33,    34,    35,    36,    37,    39,    42,    65,    63,    41,
      65,    66,    65,    65,    65,    39,    41,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    38,    41,    41,    38,    41,    43,
      66,    60,    65,    60,    38,    28,    65,    60,    41,    60
  };

  const signed char
  cc_parser::yyr1_[] =
  {
       0,    48,    49,    50,    50,    51,    51,    52,    52,    52,
      52,    53,    53,    54,    54,    55,    55,    56,    56,    57,
      58,    59,    59,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    61,    61,    62,    63,    63,    64,    64,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      66,    66
  };

  const signed char
  cc_parser::yyr2_[] =
  {
       0,     2,     1,     2,     0,     3,     3,     1,     1,     1,
       1,     1,     3,     1,     4,     4,     3,     3,     1,     2,
       4,     2,     0,     2,     1,     3,     2,     5,     7,     5,
       9,     2,     2,     2,     0,     3,     1,     3,     1,     3,
       3,     3,     3,     3,     3,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     1,     1,     1,     1,
       3,     2,     4,     3,     3,     3,     2,     2,     2,     2,
       3,     1
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
       0,    67,    67,    71,    72,    76,    77,    81,    81,    81,
      81,    85,    86,    90,    91,    95,    96,   100,   101,   105,
     109,   113,   114,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   131,   132,   136,   139,   140,   143,   144,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     180,   181
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
#line 1173 "/home/arch_/Work/Compiler-CC/src/parser/parse.cc"

#line 184 "/home/arch_/Work/Compiler-CC/src/parser/parse.yy"


void cc_::cc_parser::error(const Location &loc, const std::string &msg) {
  std::cerr << "Error at " << loc << ": " << msg << std::endl;
}

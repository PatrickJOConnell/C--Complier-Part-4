/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOK_ELSE = 258,
     TOK_IF = 259,
     TOK_RETURN = 260,
     TOK_VOID = 261,
     TOK_INT = 262,
     TOK_WHILE = 263,
     TOK_PLUS = 264,
     TOK_MINUS = 265,
     TOK_MULT = 266,
     TOK_DIV = 267,
     TOK_LT = 268,
     TOK_LE = 269,
     TOK_GT = 270,
     TOK_GE = 271,
     TOK_EQ = 272,
     TOK_NE = 273,
     TOK_ASSIGN = 274,
     TOK_SEMI = 275,
     TOK_COMMA = 276,
     TOK_LPAREN = 277,
     TOK_RPAREN = 278,
     TOK_LSQ = 279,
     TOK_RSQ = 280,
     TOK_LBRACE = 281,
     TOK_RBRACE = 282,
     TOK_ERROR = 283,
     TOK_ID = 284,
     TOK_NUM = 285,
     TOK_SUB = 286
   };
#endif
/* Tokens.  */
#define TOK_ELSE 258
#define TOK_IF 259
#define TOK_RETURN 260
#define TOK_VOID 261
#define TOK_INT 262
#define TOK_WHILE 263
#define TOK_PLUS 264
#define TOK_MINUS 265
#define TOK_MULT 266
#define TOK_DIV 267
#define TOK_LT 268
#define TOK_LE 269
#define TOK_GT 270
#define TOK_GE 271
#define TOK_EQ 272
#define TOK_NE 273
#define TOK_ASSIGN 274
#define TOK_SEMI 275
#define TOK_COMMA 276
#define TOK_LPAREN 277
#define TOK_RPAREN 278
#define TOK_LSQ 279
#define TOK_RSQ 280
#define TOK_LBRACE 281
#define TOK_RBRACE 282
#define TOK_ERROR 283
#define TOK_ID 284
#define TOK_NUM 285
#define TOK_SUB 286




/* Copy the first part of user declarations.  */
#line 1 "cmparser.y"



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ast.h"
#include "symbolTable.h"
#include "util.h"

/* other external function prototypes */
extern int yylex();
extern int initLex(int ,  char **);
/* external global variables */
extern int yydebug;
extern int yylineno;
extern SymbolTableStackEntryPtr symbolStackTop;
extern int scopeDepth;

/* function prototypes */
void yyerror(const char *);

/* global variables */
AstNodePtr  program;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 27 "cmparser.y"
{
	AstNodePtr nodePtr;
	int        iVal;
	char      *cVal;
	Type      *type;
}
/* Line 193 of yacc.c.  */
#line 191 "cmparser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 204 "cmparser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   118

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNRULES -- Number of states.  */
#define YYNSTATES  118

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    15,    19,    26,
      27,    28,    37,    39,    41,    45,    47,    50,    55,    57,
      59,    60,    65,    66,    72,    75,    77,    80,    81,    83,
      85,    87,    89,    91,    94,    96,    98,   102,   108,   114,
     118,   121,   125,   127,   129,   134,   138,   142,   146,   150,
     154,   158,   160,   164,   168,   170,   174,   178,   180,   184,
     186,   188,   190,   195,   197,   198,   202
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      33,     0,    -1,    34,    -1,    35,    -1,    36,    34,    -1,
      37,    -1,    37,    35,    -1,    43,    29,    20,    -1,    43,
      29,    24,    30,    25,    20,    -1,    -1,    -1,    43,    29,
      22,    38,    40,    23,    39,    44,    -1,    41,    -1,     6,
      -1,    41,    21,    42,    -1,    42,    -1,    43,    29,    -1,
      43,    29,    24,    25,    -1,     7,    -1,     6,    -1,    -1,
      26,    45,    48,    27,    -1,    -1,    26,    46,    47,    48,
      27,    -1,    36,    47,    -1,    36,    -1,    49,    48,    -1,
      -1,    50,    -1,    44,    -1,    51,    -1,    53,    -1,    54,
      -1,    55,    20,    -1,    20,    -1,    52,    -1,    52,     3,
      49,    -1,     4,    22,    55,    23,    49,    -1,     8,    22,
      55,    23,    49,    -1,     5,    55,    20,    -1,     5,    20,
      -1,    56,    19,    55,    -1,    57,    -1,    29,    -1,    29,
      24,    55,    25,    -1,    58,    15,    58,    -1,    58,    13,
      58,    -1,    58,    16,    58,    -1,    58,    14,    58,    -1,
      58,    17,    58,    -1,    58,    18,    58,    -1,    58,    -1,
      58,     9,    59,    -1,    58,    10,    59,    -1,    59,    -1,
      59,    11,    60,    -1,    59,    12,    60,    -1,    60,    -1,
      22,    55,    23,    -1,    56,    -1,    61,    -1,    30,    -1,
      29,    22,    62,    23,    -1,    63,    -1,    -1,    63,    21,
      55,    -1,    55,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    66,    66,    70,    71,    75,    78,    84,    88,    98,
     112,    98,   121,   122,   126,   134,   138,   149,   165,   166,
     170,   170,   181,   181,   195,   196,   200,   204,   208,   209,
     210,   211,   212,   216,   220,   227,   230,   237,   245,   253,
     257,   263,   268,   274,   279,   288,   293,   298,   303,   308,
     313,   318,   322,   327,   332,   336,   341,   346,   350,   351,
     352,   353,   361,   369,   370,   374,   383
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_ELSE", "TOK_IF", "TOK_RETURN",
  "TOK_VOID", "TOK_INT", "TOK_WHILE", "TOK_PLUS", "TOK_MINUS", "TOK_MULT",
  "TOK_DIV", "TOK_LT", "TOK_LE", "TOK_GT", "TOK_GE", "TOK_EQ", "TOK_NE",
  "TOK_ASSIGN", "TOK_SEMI", "TOK_COMMA", "TOK_LPAREN", "TOK_RPAREN",
  "TOK_LSQ", "TOK_RSQ", "TOK_LBRACE", "TOK_RBRACE", "TOK_ERROR", "TOK_ID",
  "TOK_NUM", "TOK_SUB", "$accept", "Start", "Declarations", "Functions",
  "Var_Declaration", "Fun_Declaration", "@1", "@2", "Params", "Param_List",
  "Param", "Type_Specifier", "Compound_Stmt", "@3", "@4",
  "Local_Declarations", "Statements", "Statement", "Expr_Statement",
  "Selection_Stmt", "If_Else_Statement", "Iteration_Stmt", "Return_Stmt",
  "Expression", "Var", "Simple_Expression", "Additive_Expression", "Term",
  "Factor", "Call", "Args", "Args_List", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    35,    36,    36,    38,
      39,    37,    40,    40,    41,    41,    42,    42,    43,    43,
      45,    44,    46,    44,    47,    47,    48,    48,    49,    49,
      49,    49,    49,    50,    50,    51,    51,    52,    53,    54,
      54,    55,    55,    56,    56,    57,    57,    57,    57,    57,
      57,    57,    58,    58,    58,    59,    59,    59,    60,    60,
      60,    60,    61,    62,    62,    63,    63
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     3,     6,     0,
       0,     8,     1,     1,     3,     1,     2,     4,     1,     1,
       0,     4,     0,     5,     2,     1,     2,     0,     1,     1,
       1,     1,     1,     2,     1,     1,     3,     5,     5,     3,
       2,     3,     1,     1,     4,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     1,
       1,     1,     4,     1,     0,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    19,    18,     0,     2,     3,     0,     5,     0,     1,
       4,     6,     0,     0,     0,     7,     9,     0,     0,     0,
      13,     0,    12,    15,     0,     0,    10,     0,    16,     8,
       0,    14,     0,    20,    11,    17,    27,     0,     0,     0,
       0,    34,     0,    43,    61,    29,     0,    27,    28,    30,
      35,    31,    32,     0,    59,    42,    51,    54,    57,    60,
      25,     0,    27,     0,    40,     0,     0,     0,    64,     0,
      21,    26,     0,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,    39,
       0,    58,    66,     0,    63,     0,    36,    41,    59,    52,
      53,    46,    48,    45,    47,    49,    50,    55,    56,    23,
       0,     0,    62,     0,    44,    37,    38,    65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,    18,    30,    21,    22,
      23,     8,    45,    36,    37,    62,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      93,    94
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -71
static const yytype_int8 yypact[] =
{
       7,   -71,   -71,    20,   -71,   -71,     7,     7,    19,   -71,
     -71,   -71,    21,   -13,    10,   -71,   -71,     6,    32,    48,
      41,    65,    64,   -71,    60,    70,   -71,     7,    67,   -71,
      66,   -71,    68,    46,   -71,   -71,    29,     7,    73,   -14,
      74,   -71,   -12,     1,   -71,   -71,    71,    29,   -71,   -71,
      91,   -71,   -71,    77,    80,   -71,    62,    45,   -71,   -71,
       7,    75,    29,   -12,   -71,    81,   -12,    79,   -12,   -12,
     -71,   -71,    29,   -71,   -12,   -12,   -12,   -12,   -12,   -12,
     -12,   -12,   -12,   -12,   -12,   -71,     2,    76,    82,   -71,
      83,   -71,   -71,    84,    87,    85,   -71,   -71,   -71,    45,
      45,    72,    72,    72,    72,    72,    72,   -71,   -71,   -71,
      29,    29,   -71,   -12,   -71,   -71,   -71,   -71
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -71,   -71,    94,   102,   -32,   -71,   -71,   -71,   -71,   -71,
      86,    -6,    88,   -71,   -71,    51,   -43,   -70,   -71,   -71,
     -71,   -71,   -71,   -39,   -15,   -71,   -35,     8,     3,   -71,
     -71,   -71
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -23
static const yytype_int8 yytable[] =
{
      65,    12,    96,    67,    71,    60,    64,    15,    42,    16,
      42,    17,    24,     1,     2,    43,    44,    43,    44,    87,
       9,    24,    15,    68,    88,    69,    17,    90,    60,    92,
      95,    61,    16,    38,    39,    97,    19,    40,    20,     2,
     115,   116,   101,   102,   103,   104,   105,   106,    13,    41,
      14,    42,   -22,   -22,    61,    33,    83,    84,    43,    44,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
     -19,    75,    76,    25,   117,    77,    78,    79,    80,    81,
      82,    75,    76,    99,   100,    27,   107,   108,    26,    28,
      29,    32,    33,    35,    72,    63,    66,    73,    70,    74,
      10,    89,    91,   109,    86,   110,   111,   112,   113,    11,
     114,    85,     0,    31,     0,     0,     0,     0,    34
};

static const yytype_int8 yycheck[] =
{
      39,     7,    72,    42,    47,    37,    20,    20,    22,    22,
      22,    24,    18,     6,     7,    29,    30,    29,    30,    62,
       0,    27,    20,    22,    63,    24,    24,    66,    60,    68,
      69,    37,    22,     4,     5,    74,    30,     8,     6,     7,
     110,   111,    77,    78,    79,    80,    81,    82,    29,    20,
      29,    22,     6,     7,    60,    26,    11,    12,    29,    30,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      29,     9,    10,    25,   113,    13,    14,    15,    16,    17,
      18,     9,    10,    75,    76,    21,    83,    84,    23,    29,
      20,    24,    26,    25,     3,    22,    22,    20,    27,    19,
       6,    20,    23,    27,    29,    23,    23,    23,    21,     7,
      25,    60,    -1,    27,    -1,    -1,    -1,    -1,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    33,    34,    35,    36,    37,    43,     0,
      34,    35,    43,    29,    29,    20,    22,    24,    38,    30,
       6,    40,    41,    42,    43,    25,    23,    21,    29,    20,
      39,    42,    24,    26,    44,    25,    45,    46,     4,     5,
       8,    20,    22,    29,    30,    44,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      36,    43,    47,    22,    20,    55,    22,    55,    22,    24,
      27,    48,     3,    20,    19,     9,    10,    13,    14,    15,
      16,    17,    18,    11,    12,    47,    29,    48,    55,    20,
      55,    23,    55,    62,    63,    55,    49,    55,    56,    59,
      59,    58,    58,    58,    58,    58,    58,    60,    60,    27,
      23,    23,    23,    21,    25,    49,    49,    55
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 66 "cmparser.y"
    {;}
    break;

  case 3:
#line 70 "cmparser.y"
    { program = (yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 4:
#line 71 "cmparser.y"
    {;}
    break;

  case 5:
#line 75 "cmparser.y"
    {
		    	(yyvsp[(1) - (1)].nodePtr)->sibling = NULL;
		    	(yyval.nodePtr) = (yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 6:
#line 78 "cmparser.y"
    {
			(yyvsp[(1) - (2)].nodePtr)->sibling = (yyvsp[(2) - (2)].nodePtr);
			(yyval.nodePtr) = (yyvsp[(1) - (2)].nodePtr);;}
    break;

  case 7:
#line 84 "cmparser.y"
    {
			 	if(symLookup((yyvsp[(2) - (3)].cVal)) != NULL && (scopeDepth == symLookup((yyvsp[(2) - (3)].cVal))->scope)){ yyerror("Cannot redeclare a variable\n");}
			 	else{ ElementPtr e = symInsert((yyvsp[(2) - (3)].cVal), (yyvsp[(1) - (3)].type), yylineno);}		  
			;}
    break;

  case 8:
#line 88 "cmparser.y"
    {
				if(symLookup((yyvsp[(2) - (6)].cVal)) != NULL  && (scopeDepth == symLookup((yyvsp[(2) - (6)].cVal))->scope)) {yyerror("Cannot redeclare a variable\n");}
				else { (yyvsp[(1) - (6)].type)->kind = ARRAY;
                			(yyvsp[(1) - (6)].type)->dimension = (yyvsp[(4) - (6)].iVal);
                			ElementPtr e = symInsert((yyvsp[(2) - (6)].cVal), (yyvsp[(1) - (6)].type), yylineno);
				}
			;}
    break;

  case 9:
#line 98 "cmparser.y"
    {
				if(symLookup((yyvsp[(2) - (3)].cVal)) != NULL) {yyerror("Cannot redeclare a function name\n");}
				else { TypePtr ftype = new_type(FUNCTION);
                                        ftype->function = (yyvsp[(1) - (3)].type);
                                        ElementPtr e = symInsert((yyvsp[(2) - (3)].cVal), ftype, yylineno);
                                        (yyval.nodePtr) = new_StmtNode(COMPOUND_STMT);
                                        (yyval.nodePtr)->nLinenumber = yylineno;
                                        (yyval.nodePtr)->nKind = METHOD;
                                        (yyval.nodePtr)->nType = (yyvsp[(1) - (3)].type);
                                        (yyval.nodePtr)->nSymbolPtr = e;
                                        e->snode = (yyval.nodePtr);
                                        enterScope();
				}
		  	;}
    break;

  case 10:
#line 112 "cmparser.y"
    {(yyvsp[(4) - (6)].nodePtr)->children[0] = (yyvsp[(5) - (6)].nodePtr);;}
    break;

  case 11:
#line 113 "cmparser.y"
    {
				(yyvsp[(4) - (8)].nodePtr)->children[1] = (yyvsp[(8) - (8)].nodePtr);
				(yyval.nodePtr) = (yyvsp[(4) - (8)].nodePtr);
				leaveScope();
			;}
    break;

  case 12:
#line 121 "cmparser.y"
    {(yyval.nodePtr) = (yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 13:
#line 122 "cmparser.y"
    {(yyval.nodePtr) = NULL;;}
    break;

  case 14:
#line 126 "cmparser.y"
    {
			AstNodePtr temp = (yyvsp[(1) - (3)].nodePtr);
		     	while(temp->sibling != NULL) {
			     temp = temp->sibling;
			}
		     	temp->sibling = (yyvsp[(3) - (3)].nodePtr);
		     	(yyval.nodePtr) = (yyvsp[(1) - (3)].nodePtr);
	     	;}
    break;

  case 15:
#line 134 "cmparser.y"
    {(yyval.nodePtr) = (yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 16:
#line 138 "cmparser.y"
    {
		if(symLookup((yyvsp[(2) - (2)].cVal)) != NULL) {yyerror("Cannot redeclare a variable\n");}
		else {	(yyval.nodePtr) = new_ExprNode(VAR_EXP);
                        (yyval.nodePtr)->nSymbolPtr = symInsert((yyvsp[(2) - (2)].cVal), (yyvsp[(1) - (2)].type), yylineno);
                        (yyval.nodePtr)->nKind = FORMALVAR;
                        (yyval.nodePtr)->nType = (yyvsp[(1) - (2)].type);
                        (yyval.nodePtr)->nLinenumber = yylineno;
                        (yyval.nodePtr)->children[0] = NULL;
                        (yyval.nodePtr)->sibling = NULL;
		}
	;}
    break;

  case 17:
#line 149 "cmparser.y"
    {
		if(symLookup((yyvsp[(2) - (4)].cVal)) != NULL) {yyerror("Cannot redeclare a variable\n");}
		else {
                	(yyvsp[(1) - (4)].type)->kind = ARRAY;
                	(yyval.nodePtr) = new_ExprNode(VAR_EXP);
                	(yyval.nodePtr)->nSymbolPtr = symInsert((yyvsp[(2) - (4)].cVal), (yyvsp[(1) - (4)].type), yylineno);
                	(yyval.nodePtr)->nKind = FORMALVAR;
                	(yyval.nodePtr)->nType = (yyvsp[(1) - (4)].type);
                	(yyval.nodePtr)->nLinenumber = yylineno;
                	(yyval.nodePtr)->children[0] = NULL;
                	(yyval.nodePtr)->sibling = NULL;
	}
;}
    break;

  case 18:
#line 165 "cmparser.y"
    {(yyval.type) = new_type(INT);;}
    break;

  case 19:
#line 166 "cmparser.y"
    {(yyval.type) = new_type(VOID);;}
    break;

  case 20:
#line 170 "cmparser.y"
    {
			enterScope();
			(yyval.nodePtr) = new_StmtNode(COMPOUND_STMT);
			(yyval.nodePtr)->nLinenumber = yylineno;
			//$<nodePtr>$->nSymbolTabPtr = symbolStackTop->symbolTablePtr; 
		;}
    break;

  case 21:
#line 176 "cmparser.y"
    {
			(yyvsp[(2) - (4)].nodePtr)->children[0] = (yyvsp[(3) - (4)].nodePtr);
			(yyval.nodePtr) = (yyvsp[(2) - (4)].nodePtr);
			leaveScope();
		;}
    break;

  case 22:
#line 181 "cmparser.y"
    {
			enterScope();
			(yyval.nodePtr) = new_StmtNode(COMPOUND_STMT);
			//$<nodePtr>$->nSymbolTabPtr = symbolStackTop->symbolTablePtr;
			(yyval.nodePtr)->nLinenumber = yylineno;
		;}
    break;

  case 23:
#line 187 "cmparser.y"
    {
			(yyvsp[(2) - (5)].nodePtr)->children[0] = (yyvsp[(4) - (5)].nodePtr);
			(yyval.nodePtr) = (yyvsp[(2) - (5)].nodePtr);
			leaveScope();
		;}
    break;

  case 24:
#line 195 "cmparser.y"
    {;}
    break;

  case 25:
#line 196 "cmparser.y"
    {;}
    break;

  case 26:
#line 200 "cmparser.y"
    {
		     	(yyvsp[(1) - (2)].nodePtr)->sibling = (yyvsp[(2) - (2)].nodePtr);
	     		(yyval.nodePtr) = (yyvsp[(1) - (2)].nodePtr);
	     	;}
    break;

  case 27:
#line 204 "cmparser.y"
    {(yyval.nodePtr) = NULL;;}
    break;

  case 28:
#line 208 "cmparser.y"
    {(yyval.nodePtr) = (yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 29:
#line 209 "cmparser.y"
    {(yyval.nodePtr) = (yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 30:
#line 210 "cmparser.y"
    {(yyval.nodePtr) = (yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 31:
#line 211 "cmparser.y"
    {(yyval.nodePtr) = (yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 32:
#line 212 "cmparser.y"
    {(yyval.nodePtr) = (yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 33:
#line 216 "cmparser.y"
    {
			 	(yyval.nodePtr) = new_StmtNode(EXPRESSION_STMT);
			 	(yyval.nodePtr)->children[0] = (yyvsp[(1) - (2)].nodePtr);
		 	;}
    break;

  case 34:
#line 220 "cmparser.y"
    {
				(yyval.nodePtr) = new_StmtNode(EXPRESSION_STMT);
				(yyval.nodePtr)->children[0] = NULL;
			;}
    break;

  case 35:
#line 227 "cmparser.y"
    {
				(yyval.nodePtr) = (yyvsp[(1) - (1)].nodePtr);
		 	;}
    break;

  case 36:
#line 230 "cmparser.y"
    {
				(yyvsp[(1) - (3)].nodePtr)->children[2] = (yyvsp[(3) - (3)].nodePtr);
				(yyval.nodePtr) = (yyvsp[(1) - (3)].nodePtr);
			;}
    break;

  case 37:
#line 237 "cmparser.y"
    {
			    (yyval.nodePtr) = new_StmtNode(IF_THEN_ELSE_STMT);
			    (yyval.nodePtr)->children[0] = (yyvsp[(3) - (5)].nodePtr);
			    (yyval.nodePtr)->children[1] = (yyvsp[(5) - (5)].nodePtr);
		    ;}
    break;

  case 38:
#line 245 "cmparser.y"
    {
			 (yyval.nodePtr) = new_StmtNode(WHILE_STMT);
			 (yyval.nodePtr)->children[0] = (yyvsp[(3) - (5)].nodePtr);
			 (yyval.nodePtr)->children[1] = (yyvsp[(5) - (5)].nodePtr);
		 ;}
    break;

  case 39:
#line 253 "cmparser.y"
    {
		    	(yyval.nodePtr) = new_StmtNode(RETURN_STMT);
		      	(yyval.nodePtr)->children[0] = (yyvsp[(2) - (3)].nodePtr);
	      	;}
    break;

  case 40:
#line 257 "cmparser.y"
    {
			(yyval.nodePtr) = new_StmtNode(RETURN_STMT);
		;}
    break;

  case 41:
#line 263 "cmparser.y"
    {
		     	(yyval.nodePtr) = new_ExprNode(ASSI_EXP);
		     	(yyval.nodePtr)->children[0] = (yyvsp[(1) - (3)].nodePtr);
		     	(yyval.nodePtr)->children[1] = (yyvsp[(3) - (3)].nodePtr);
	     	;}
    break;

  case 42:
#line 268 "cmparser.y"
    {
			(yyval.nodePtr) = (yyvsp[(1) - (1)].nodePtr);
		;}
    break;

  case 43:
#line 274 "cmparser.y"
    {
	      (yyval.nodePtr) = new_ExprNode(VAR_EXP);
	      (yyval.nodePtr)->nSymbolPtr = symLookup((yyvsp[(1) - (1)].cVal));
	      if((yyval.nodePtr)->nSymbolPtr == NULL) {yyerror("reference undefined variable");}
      	;}
    break;

  case 44:
#line 279 "cmparser.y"
    {
		(yyval.nodePtr) = new_ExprNode(ARRAY_EXP);
		(yyval.nodePtr)->nSymbolPtr = symLookup((yyvsp[(1) - (4)].cVal));
		if((yyval.nodePtr)->nSymbolPtr == NULL) {yyerror("reference undefined variable");}
		(yyval.nodePtr)->children[0] = (yyvsp[(3) - (4)].nodePtr);
	;}
    break;

  case 45:
#line 288 "cmparser.y"
    {
			    (yyval.nodePtr) = new_ExprNode(GT_EXP);
			    (yyval.nodePtr)->children[0] = (yyvsp[(1) - (3)].nodePtr);
			    (yyval.nodePtr)->children[1] = (yyvsp[(3) - (3)].nodePtr);
		    	;}
    break;

  case 46:
#line 293 "cmparser.y"
    {
				(yyval.nodePtr) = new_ExprNode(LT_EXP);
				(yyval.nodePtr)->children[0] = (yyvsp[(1) - (3)].nodePtr);
				(yyval.nodePtr)->children[1] = (yyvsp[(3) - (3)].nodePtr);
			;}
    break;

  case 47:
#line 298 "cmparser.y"
    {
				(yyval.nodePtr) = new_ExprNode(GE_EXP);
				(yyval.nodePtr)->children[0] = (yyvsp[(1) - (3)].nodePtr);
				(yyval.nodePtr)->children[1] = (yyvsp[(3) - (3)].nodePtr);
			;}
    break;

  case 48:
#line 303 "cmparser.y"
    {
				(yyval.nodePtr) = new_ExprNode(LE_EXP);
				(yyval.nodePtr)->children[0] = (yyvsp[(1) - (3)].nodePtr);
				(yyval.nodePtr)->children[1] = (yyvsp[(3) - (3)].nodePtr);
			;}
    break;

  case 49:
#line 308 "cmparser.y"
    {
				(yyval.nodePtr) = new_ExprNode(EQ_EXP);
				(yyval.nodePtr)->children[0] = (yyvsp[(1) - (3)].nodePtr);
				(yyval.nodePtr)->children[1] = (yyvsp[(3) - (3)].nodePtr);
			;}
    break;

  case 50:
#line 313 "cmparser.y"
    {
				(yyval.nodePtr) = new_ExprNode(NE_EXP);
				(yyval.nodePtr)->children[0] = (yyvsp[(1) - (3)].nodePtr);
				(yyval.nodePtr)->children[1] = (yyvsp[(3) - (3)].nodePtr);
			;}
    break;

  case 51:
#line 318 "cmparser.y"
    {(yyval.nodePtr) = (yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 52:
#line 322 "cmparser.y"
    {
				(yyval.nodePtr) = new_ExprNode(ADD_EXP);
			      	(yyval.nodePtr)->children[0] = (yyvsp[(1) - (3)].nodePtr);
			      	(yyval.nodePtr)->children[1] = (yyvsp[(3) - (3)].nodePtr);
		      	;}
    break;

  case 53:
#line 327 "cmparser.y"
    {
				(yyval.nodePtr) = new_ExprNode(SUB_EXP);
				(yyval.nodePtr)->children[0] = (yyvsp[(1) - (3)].nodePtr);
				(yyval.nodePtr)->children[1] = (yyvsp[(3) - (3)].nodePtr);
			;}
    break;

  case 54:
#line 332 "cmparser.y"
    {(yyval.nodePtr) = (yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 55:
#line 336 "cmparser.y"
    {
	       (yyval.nodePtr) = new_ExprNode(MULT_EXP);
	       (yyval.nodePtr)->children[0] = (yyvsp[(1) - (3)].nodePtr);
	       (yyval.nodePtr)->children[1] = (yyvsp[(3) - (3)].nodePtr);
       	;}
    break;

  case 56:
#line 341 "cmparser.y"
    {
		(yyval.nodePtr) = new_ExprNode(DIV_EXP);
		(yyval.nodePtr)->children[0] = (yyvsp[(1) - (3)].nodePtr);
		(yyval.nodePtr)->children[1] = (yyvsp[(3) - (3)].nodePtr);
	;}
    break;

  case 57:
#line 346 "cmparser.y"
    {(yyval.nodePtr) = (yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 58:
#line 350 "cmparser.y"
    {(yyval.nodePtr) = (yyvsp[(2) - (3)].nodePtr);;}
    break;

  case 59:
#line 351 "cmparser.y"
    {(yyval.nodePtr) = (yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 60:
#line 352 "cmparser.y"
    {(yyval.nodePtr) = (yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 61:
#line 353 "cmparser.y"
    {
		(yyval.nodePtr) = new_ExprNode(CONST_EXP);
		(yyval.nodePtr)->nValue = (yyvsp[(1) - (1)].iVal);
		(yyval.nodePtr)->nLinenumber = yylineno;
	;}
    break;

  case 62:
#line 361 "cmparser.y"
    {//DONE
	       	(yyval.nodePtr) = new_ExprNode(CALL_EXP);
		(yyval.nodePtr)->children[0] = (yyvsp[(3) - (4)].nodePtr);
	       	(yyval.nodePtr)->fname = (yyvsp[(1) - (4)].cVal);
		(yyval.nodePtr)->nLinenumber = yylineno;;}
    break;

  case 63:
#line 369 "cmparser.y"
    {(yyval.nodePtr)=(yyvsp[(1) - (1)].nodePtr);;}
    break;

  case 64:
#line 370 "cmparser.y"
    {(yyval.nodePtr) = NULL;;}
    break;

  case 65:
#line 374 "cmparser.y"
    {//DONE
		    	(yyval.nodePtr) = (yyvsp[(1) - (3)].nodePtr);
			while((yyval.nodePtr)->sibling){
				(yyval.nodePtr) = (yyval.nodePtr)->sibling;
			}
			(yyval.nodePtr)->sibling = (yyvsp[(3) - (3)].nodePtr);
			(yyvsp[(3) - (3)].nodePtr)->sibling = NULL;
			(yyval.nodePtr) = (yyvsp[(1) - (3)].nodePtr); 
		;}
    break;

  case 66:
#line 383 "cmparser.y"
    {
			(yyvsp[(1) - (1)].nodePtr)->sibling = NULL;
  			(yyval.nodePtr) = (yyvsp[(1) - (1)].nodePtr);
		;}
    break;


/* Line 1267 of yacc.c.  */
#line 2007 "cmparser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 390 "cmparser.y"


void yyerror (char const *s) {
	fprintf (stderr, "Line %d: %s\n", yylineno, s);
	exit(1);
}

int main(int argc, char **argv){
	initLex(argc,argv);
	initSymbolTable();
#ifdef YYLLEXER
	while (gettok() !=0) ; //gettok returns 0 on EOF
	return;
#else
	printf("\n\n\n------------------------------BEGIN---------------------------------------\n");
	yyparse();
	print_Ast();
	//printf("\n------------------------------END---------------------------------------\n\n\n");
#endif
}



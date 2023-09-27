
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parse.y"
 
    #include <stdio.h> 
    #include "lex.yy.c"
    int flag=0; 
    void yyerror(const char *str);
    #define ANSI_COLOR_RED     "\x1b[31m"
    #define ANSI_COLOR_YELLOW  "\x1b[33m"
    #define ANSI_COLOR_GREEN   "\x1b[32m"
    #define ANSI_COLOR_RESET   "\x1b[0m"


/* Line 189 of yacc.c  */
#line 85 "parse.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     AND = 258,
     ASSIGN = 259,
     COLON = 260,
     COMMA = 261,
     DEF = 262,
     DIV = 263,
     DOT = 264,
     ELSE = 265,
     END = 266,
     EQ = 267,
     EXITLOOP = 268,
     FLOAT = 269,
     FLOAT_CONST = 270,
     FORMAT = 271,
     FROM = 272,
     FUN = 273,
     GE = 274,
     GLOBAL = 275,
     GT = 276,
     ID = 277,
     IF = 278,
     INT = 279,
     INT_CONST = 280,
     LEFT_PAREN = 281,
     LEFT_SQ_BKT = 282,
     LE = 283,
     LT = 284,
     MINUS = 285,
     MOD = 286,
     MULT = 287,
     NE = 288,
     NOT = 289,
     NUL = 290,
     OR = 291,
     PLUS = 292,
     PRINT = 293,
     PRODUCT = 294,
     READ = 295,
     RETURN = 296,
     RETURNS = 297,
     RIGHT_PAREN = 298,
     RIGHT_SQ_BKT = 299,
     SEMICOLON = 300,
     SKIP = 301,
     STEP = 302,
     STRING = 303,
     TO = 304,
     WHILE = 305
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 190 "parse.tab.c"

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   265

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNRULES -- Number of states.  */
#define YYNSTATES  188

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,    10,    13,    14,    18,    22,    28,
      32,    34,    38,    40,    43,    45,    46,    51,    55,    57,
      59,    61,    63,    65,    67,    73,    79,    81,    83,    84,
      90,    94,    98,   100,   103,   106,   108,   109,   113,   115,
     117,   119,   121,   123,   125,   127,   129,   131,   133,   135,
     139,   141,   145,   149,   152,   156,   163,   166,   167,   173,
     184,   187,   188,   194,   197,   199,   200,   202,   204,   207,
     209,   210,   215,   219,   223,   227,   230,   234,   238,   240,
     242,   244,   246,   248,   250,   254,   258,   262,   266,   270,
     273,   276,   280,   284,   286,   292,   294,   296,   298,   299,
     303
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    53,    -1,    20,    54,    70,    11,    -1,
      55,    54,    -1,    -1,     7,    56,    11,    -1,    18,    63,
      11,    -1,    56,    45,    57,     5,    61,    -1,    57,     5,
      61,    -1,    62,    -1,    58,     6,    57,    -1,    58,    -1,
      22,    59,    -1,    60,    -1,    -1,    60,    27,    25,    44,
      -1,    27,    25,    44,    -1,    24,    -1,    14,    -1,    48,
      -1,    35,    -1,    62,    -1,    22,    -1,    22,     4,    39,
      56,    11,    -1,    64,    65,    42,    61,    69,    -1,    22,
      -1,    66,    -1,    -1,    66,    45,    67,     5,    61,    -1,
      67,     5,    61,    -1,    67,     6,    68,    -1,    68,    -1,
      22,    59,    -1,    54,    70,    -1,    71,    -1,    -1,    71,
      45,    72,    -1,    72,    -1,    73,    -1,    75,    -1,    76,
      -1,    77,    -1,    79,    -1,    80,    -1,    82,    -1,    83,
      -1,    85,    -1,    86,    -1,    74,     4,    92,    -1,    87,
      -1,    87,     9,    74,    -1,    40,    16,    92,    -1,    38,
      48,    -1,    38,    16,    92,    -1,    23,    90,     5,    71,
      78,    11,    -1,    10,    71,    -1,    -1,    50,    90,     5,
      71,    11,    -1,    17,    87,     4,    92,    49,    92,    81,
       5,    70,    11,    -1,    47,    92,    -1,    -1,    26,    22,
       5,    94,    43,    -1,    41,    84,    -1,    92,    -1,    -1,
      13,    -1,    46,    -1,    22,    88,    -1,    89,    -1,    -1,
      89,    27,    92,    44,    -1,    27,    92,    44,    -1,    90,
      36,    90,    -1,    90,     3,    90,    -1,    34,    90,    -1,
      26,    90,    43,    -1,    92,    91,    92,    -1,    12,    -1,
      28,    -1,    29,    -1,    19,    -1,    21,    -1,    33,    -1,
      92,    37,    92,    -1,    92,    30,    92,    -1,    92,    32,
      92,    -1,    92,     8,    92,    -1,    92,    31,    92,    -1,
      30,    92,    -1,    37,    92,    -1,    92,     9,    92,    -1,
      26,    92,    43,    -1,    87,    -1,    26,    22,     5,    93,
      43,    -1,    25,    -1,    15,    -1,    94,    -1,    -1,    94,
       6,    92,    -1,    92,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    32,    32,    37,    39,    40,    42,    43,    45,    46,
      47,    49,    50,    52,    54,    55,    57,    58,    60,    61,
      62,    63,    64,    65,    67,    69,    71,    73,    74,    76,
      77,    79,    80,    82,    84,    86,    87,    89,    90,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   103,
     105,   106,   108,   110,   111,   113,   115,   116,   118,   120,
     122,   123,   125,   127,   129,   130,   132,   134,   136,   138,
     139,   141,   142,   144,   145,   146,   147,   148,   150,   151,
     152,   153,   154,   155,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   171,   172,   174,
     175
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AND", "ASSIGN", "COLON", "COMMA", "DEF",
  "DIV", "DOT", "ELSE", "END", "EQ", "EXITLOOP", "FLOAT", "FLOAT_CONST",
  "FORMAT", "FROM", "FUN", "GE", "GLOBAL", "GT", "ID", "IF", "INT",
  "INT_CONST", "LEFT_PAREN", "LEFT_SQ_BKT", "LE", "LT", "MINUS", "MOD",
  "MULT", "NE", "NOT", "NUL", "OR", "PLUS", "PRINT", "PRODUCT", "READ",
  "RETURN", "RETURNS", "RIGHT_PAREN", "RIGHT_SQ_BKT", "SEMICOLON", "SKIP",
  "STEP", "STRING", "TO", "WHILE", "$accept", "S", "prog", "declList",
  "decl", "typeList", "varList", "var", "sizeListO", "sizeList", "type",
  "typeDef", "funDef", "funID", "fParamListO", "fParamList", "pList",
  "idP", "funBody", "stmtListO", "stmtList", "stmt", "assignmentStmt",
  "dotId", "readStmt", "printStmt", "ifStmt", "elsePart", "whileStmt",
  "loopStmt", "stepPart", "callStmt", "returnStmt", "expO", "exitLoop",
  "skip", "id", "indxListO", "indxList", "bExp", "relOP", "exp",
  "actParamListO", "actParamList", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    54,    54,    55,    55,    56,    56,
      56,    57,    57,    58,    59,    59,    60,    60,    61,    61,
      61,    61,    61,    61,    62,    63,    64,    65,    65,    66,
      66,    67,    67,    68,    69,    70,    70,    71,    71,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    73,
      74,    74,    75,    76,    76,    77,    78,    78,    79,    80,
      81,    81,    82,    83,    84,    84,    85,    86,    87,    88,
      88,    89,    89,    90,    90,    90,    90,    90,    91,    91,
      91,    91,    91,    91,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    93,    93,    94,
      94
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     4,     2,     0,     3,     3,     5,     3,
       1,     3,     1,     2,     1,     0,     4,     3,     1,     1,
       1,     1,     1,     1,     5,     5,     1,     1,     0,     5,
       3,     3,     1,     2,     2,     1,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     3,     2,     3,     6,     2,     0,     5,    10,
       2,     0,     5,     2,     1,     0,     1,     1,     2,     1,
       0,     4,     3,     3,     3,     2,     3,     3,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     2,
       2,     3,     3,     1,     5,     1,     1,     1,     0,     3,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,     0,     2,     0,     0,    36,     5,     1,    15,
       0,     0,    12,    10,    26,     0,    28,    66,     0,    70,
       0,     0,     0,     0,    65,    67,     0,     0,    35,    38,
      39,     0,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    50,     4,     0,     0,    13,    14,     6,     0,     0,
       0,     7,    15,     0,    27,     0,    32,     0,     0,    68,
      69,    96,    95,     0,     0,     0,     0,    93,     0,     0,
       0,     0,    53,     0,     0,    63,    64,     0,     3,     0,
       0,     0,     0,     0,     0,    15,     0,    19,    23,    18,
      21,    20,     9,    22,    11,    33,     0,     0,     0,     0,
       0,     0,     0,    70,     0,     0,    89,    75,    90,     0,
       0,     0,     0,     0,    78,    81,    82,    79,    80,     0,
       0,     0,    83,     0,     0,     0,    54,    52,     0,     0,
      37,    49,    51,     0,    17,     0,     0,     5,     0,    30,
      31,     0,    72,     0,    98,    76,    92,    74,    57,    73,
      87,    91,    85,    88,    86,    84,    77,   100,     0,     0,
      24,    16,     8,    36,    25,     0,     0,    71,     0,    97,
       0,     0,     0,    62,    58,    34,    29,    61,    94,    56,
      55,    99,     0,     0,    60,    36,     0,    59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     6,     7,    10,    11,    12,    45,    46,
      92,    93,    15,    16,    53,    54,    55,    56,   164,    27,
      28,    29,    30,    31,    32,    33,    34,   171,    35,    36,
     183,    37,    38,    75,    39,    40,    67,    59,    60,    68,
     124,    69,   168,   158
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -107
static const yytype_int16 yypact[] =
{
     -13,    65,    25,  -107,    -9,    45,    90,    65,  -107,     6,
      13,    71,    64,  -107,  -107,    69,    63,  -107,    66,   -10,
     210,    70,    26,    83,   226,  -107,   210,   103,    49,  -107,
    -107,   107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,   108,  -107,    81,   104,  -107,   106,  -107,   112,    47,
     112,  -107,   111,    93,    92,   100,  -107,   135,   226,  -107,
     123,  -107,  -107,   212,   226,   210,   226,  -107,    17,   191,
     146,   226,  -107,   226,   228,  -107,   136,    27,  -107,    90,
     226,    66,    -9,   114,   127,   111,   149,  -107,   151,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,    47,    63,    47,    63,
     226,    78,   226,     9,    16,   153,   110,  -107,   110,   210,
      90,   210,   226,   226,  -107,  -107,  -107,  -107,  -107,   226,
     226,   226,  -107,   226,   226,   226,   136,   136,   161,    90,
    -107,   136,  -107,    15,  -107,   119,    47,    65,   121,  -107,
    -107,    -3,  -107,   116,   226,  -107,  -107,  -107,    11,  -107,
     147,   162,   110,   147,   147,   110,   136,   136,    12,    20,
    -107,  -107,  -107,    90,  -107,    47,   226,  -107,   132,   170,
      90,   166,   226,  -107,  -107,  -107,  -107,     7,  -107,    49,
    -107,   136,   226,   173,   136,    90,   169,  -107
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -107,  -107,  -107,    -5,  -107,   105,    18,  -107,   137,  -107,
     -87,    -1,  -107,  -107,  -107,  -107,    91,    95,  -107,  -101,
    -106,   118,  -107,   120,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,    -6,  -107,  -107,   -18,
    -107,   -23,  -107,    51
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int16 yytable[] =
{
      41,    76,    42,    13,   148,   112,   113,     1,    77,   137,
      43,   139,    57,     9,   144,   112,   113,    58,   172,   109,
     109,   170,   110,   159,    47,     8,   160,   119,   120,   121,
     109,   174,   129,    44,   123,   101,    58,   119,   120,   121,
     105,   106,    71,   108,   123,   104,   166,   107,   126,   162,
     127,   128,   111,   111,   182,   173,    79,   131,    48,   145,
      48,    87,   175,   111,   179,    79,    86,    14,    94,    88,
      50,    89,     4,    41,    72,    41,    49,   141,   176,   143,
      51,    13,    90,     5,   186,    52,   112,   113,    19,   150,
     151,   147,    70,   149,    79,    91,   152,   153,   154,    73,
     155,   156,   157,    17,    41,    98,    99,    18,   119,   120,
     121,    80,    19,    20,    78,   123,    21,    81,   112,   113,
      82,   157,   142,    41,   112,   113,   165,    99,    22,    83,
      23,    24,   163,    84,    85,    96,    25,    97,    44,   100,
      26,   120,   121,   177,   112,   113,   119,   120,   121,   181,
     102,   125,   135,   123,   136,    43,   113,    41,   134,   184,
     167,   112,   113,   161,    41,   114,   119,   120,   121,   112,
     113,    -1,   115,   123,   116,   178,   172,   180,   185,    41,
     187,   117,   118,   119,   120,   121,   122,   133,   138,    95,
     123,   119,   120,   121,   140,   169,   146,   130,   123,   112,
     113,   132,     0,   114,   146,     0,     0,     0,     0,     0,
     115,     0,   116,     0,     0,     0,     0,     0,     0,   117,
     118,   119,   120,   121,   122,    61,     0,    61,   123,     0,
       0,     0,    19,     0,   103,    62,    63,    62,    63,     0,
      64,    61,    64,    61,    65,     0,    65,    66,    19,    66,
     103,    62,    74,    62,    74,     0,    64,     0,    64,     0,
       0,     0,     0,    66,     0,    66
};

static const yytype_int16 yycheck[] =
{
       6,    24,     7,     4,   110,     8,     9,    20,    26,    96,
       4,    98,    18,    22,     5,     8,     9,    27,     6,     3,
       3,    10,     5,   129,    11,     0,    11,    30,    31,    32,
       3,    11,     5,    27,    37,    58,    27,    30,    31,    32,
      63,    64,    16,    66,    37,    63,    49,    65,    71,   136,
      73,    74,    36,    36,    47,    43,    45,    80,    45,    43,
      45,    14,   163,    36,   170,    45,    48,    22,    50,    22,
       6,    24,     7,    79,    48,    81,     5,   100,   165,   102,
      11,    82,    35,    18,   185,    22,     8,     9,    22,   112,
     113,   109,    22,   111,    45,    48,   119,   120,   121,    16,
     123,   124,   125,    13,   110,     5,     6,    17,    30,    31,
      32,     4,    22,    23,    11,    37,    26,     9,     8,     9,
      39,   144,    44,   129,     8,     9,     5,     6,    38,    25,
      40,    41,   137,    27,    22,    42,    46,    45,    27,     4,
      50,    31,    32,   166,     8,     9,    30,    31,    32,   172,
      27,     5,    25,    37,     5,     4,     9,   163,    44,   182,
      44,     8,     9,    44,   170,    12,    30,    31,    32,     8,
       9,     9,    19,    37,    21,    43,     6,    11,     5,   185,
      11,    28,    29,    30,    31,    32,    33,    82,    97,    52,
      37,    30,    31,    32,    99,   144,    43,    79,    37,     8,
       9,    81,    -1,    12,    43,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    15,    -1,    15,    37,    -1,
      -1,    -1,    22,    -1,    22,    25,    26,    25,    26,    -1,
      30,    15,    30,    15,    34,    -1,    34,    37,    22,    37,
      22,    25,    26,    25,    26,    -1,    30,    -1,    30,    -1,
      -1,    -1,    -1,    37,    -1,    37
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    20,    52,    53,     7,    18,    54,    55,     0,    22,
      56,    57,    58,    62,    22,    63,    64,    13,    17,    22,
      23,    26,    38,    40,    41,    46,    50,    70,    71,    72,
      73,    74,    75,    76,    77,    79,    80,    82,    83,    85,
      86,    87,    54,     4,    27,    59,    60,    11,    45,     5,
       6,    11,    22,    65,    66,    67,    68,    87,    27,    88,
      89,    15,    25,    26,    30,    34,    37,    87,    90,    92,
      22,    16,    48,    16,    26,    84,    92,    90,    11,    45,
       4,     9,    39,    25,    27,    22,    57,    14,    22,    24,
      35,    48,    61,    62,    57,    59,    42,    45,     5,     6,
       4,    92,    27,    22,    90,    92,    92,    90,    92,     3,
       5,    36,     8,     9,    12,    19,    21,    28,    29,    30,
      31,    32,    33,    37,    91,     5,    92,    92,    92,     5,
      72,    92,    74,    56,    44,    25,     5,    61,    67,    61,
      68,    92,    44,    92,     5,    43,    43,    90,    71,    90,
      92,    92,    92,    92,    92,    92,    92,    92,    94,    71,
      11,    44,    61,    54,    69,     5,    49,    44,    93,    94,
      10,    78,     6,    43,    11,    70,    61,    92,    43,    71,
      11,    92,    47,    81,    92,     5,    70,    11
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 33 "parse.y"
    { 
	printf("Successfully parsed"); 
	return 0; 
;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 37 "parse.y"
    {;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 39 "parse.y"
    {;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 40 "parse.y"
    {;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 42 "parse.y"
    {;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 43 "parse.y"
    {;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 45 "parse.y"
    {;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 46 "parse.y"
    {;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 47 "parse.y"
    {;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 49 "parse.y"
    {;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 50 "parse.y"
    {;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 52 "parse.y"
    {;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 54 "parse.y"
    {;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 55 "parse.y"
    {;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 57 "parse.y"
    {;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 58 "parse.y"
    {;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 60 "parse.y"
    {;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 61 "parse.y"
    {;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 62 "parse.y"
    {;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 63 "parse.y"
    {;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 64 "parse.y"
    {;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 65 "parse.y"
    {;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 67 "parse.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 69 "parse.y"
    {;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 71 "parse.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 73 "parse.y"
    {;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 74 "parse.y"
    {;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 76 "parse.y"
    {;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 77 "parse.y"
    {;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 79 "parse.y"
    {;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 80 "parse.y"
    {;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 82 "parse.y"
    {;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 84 "parse.y"
    {;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 86 "parse.y"
    {;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 87 "parse.y"
    {;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 89 "parse.y"
    {;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 90 "parse.y"
    {;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 92 "parse.y"
    {;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 93 "parse.y"
    {;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 94 "parse.y"
    {;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 95 "parse.y"
    {;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 96 "parse.y"
    {;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 97 "parse.y"
    {;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 98 "parse.y"
    {;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 99 "parse.y"
    {;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 100 "parse.y"
    {;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 101 "parse.y"
    {;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 103 "parse.y"
    {;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 105 "parse.y"
    {;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 106 "parse.y"
    {;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 108 "parse.y"
    {;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 110 "parse.y"
    {;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 111 "parse.y"
    {;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 113 "parse.y"
    {;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 115 "parse.y"
    {;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 116 "parse.y"
    {;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 118 "parse.y"
    {;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 120 "parse.y"
    {;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 122 "parse.y"
    {;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 123 "parse.y"
    {;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 125 "parse.y"
    {;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 127 "parse.y"
    {;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 129 "parse.y"
    {;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 130 "parse.y"
    {;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 132 "parse.y"
    {;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 134 "parse.y"
    {;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 136 "parse.y"
    {;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 138 "parse.y"
    {;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 139 "parse.y"
    {;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 141 "parse.y"
    {;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 142 "parse.y"
    {;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 144 "parse.y"
    {;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 145 "parse.y"
    {;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 146 "parse.y"
    {;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 147 "parse.y"
    {;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 148 "parse.y"
    {;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 150 "parse.y"
    {;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 151 "parse.y"
    {;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 152 "parse.y"
    {;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 153 "parse.y"
    {;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 154 "parse.y"
    {;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 155 "parse.y"
    {;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 157 "parse.y"
    {;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 158 "parse.y"
    {;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 159 "parse.y"
    {;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 160 "parse.y"
    {;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 161 "parse.y"
    {;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 162 "parse.y"
    {;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 163 "parse.y"
    {;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 164 "parse.y"
    {;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 165 "parse.y"
    {;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 166 "parse.y"
    {;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 167 "parse.y"
    {;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 168 "parse.y"
    {;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 169 "parse.y"
    {;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 171 "parse.y"
    {;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 172 "parse.y"
    {;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 174 "parse.y"
    {;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 175 "parse.y"
    {;}
    break;



/* Line 1455 of yacc.c  */
#line 2306 "parse.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
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

  yyerror_range[0] = yylsp[1-yylen];
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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



/* Line 1675 of yacc.c  */
#line 177 "parse.y"
 
 
void main() 
{ 
  // Get the file location
  char filename[100];
  printf(ANSI_COLOR_YELLOW "Enter the location of the file to be parsed: " ANSI_COLOR_RESET);
  scanf("%s", &filename);
  printf("\n");  
	
  // Open the file
  extern FILE *yyin;
	yyin = fopen(filename,"r");
  if (yyin == NULL) {
    printf(ANSI_COLOR_RED "Could not open file %s\n" ANSI_COLOR_RESET, filename);
    return;
  }
	
  //Parse
  yyparse(); 
	
  // Successful parsing
  if(flag==0) 
  {
		printf(ANSI_COLOR_GREEN "\nEntered program is Valid\n\n" ANSI_COLOR_RESET); 
  }
} 

// Error handling
void yyerror(const char *str) 
{ 
  
	printf(ANSI_COLOR_RED "Error at Line: %d\n%s\n" ANSI_COLOR_RESET, yylineno, str); 
	flag=1; 
} 



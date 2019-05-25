/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 9 "pmysql.y"

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <iostream>
#include <string>
#include <memory>

#include "interpreter.h"
#include "../core/any.h"

#include "../core/text.h"
#include "../core/float64.h"
#include "../core/integer.h"
#include "../core/name.h"

#include "../core/operation.h"
#include "../core/createoperation.h"
#include "../core/deleteoperation.h"
#include "../core/divoperation.h"
#include "../core/dropoperation.h"
#include "../core/insertoperation.h"
#include "../core/muloperation.h"
#include "../core/selectoperation.h"
#include "../core/suboperation.h"
#include "../core/sumoperation.h"
#include "../core/whereoperation.h"
#include "../core/comparisonoperation.h"


using namespace sdb;

extern void yyerror(const char msg[], ...);
void emit(std::shared_ptr<sdb::Any> interpreterStackCell);
void welcomeToBeta(std::string);

void handle(Any* someCellObjectPointer)
{
    emit(std::shared_ptr<Any>(someCellObjectPointer));
}

#define beta(string) {welcomeToBeta(string); return 1;}
// sorry, but I'm lazy and imho a bit stupid
#define stk sdb::Interpreter::interpreterStack


extern int yylex(void);

/* Line 371 of yacc.c  */
#line 117 "pmysql.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "pmysql.tab.h".  */
#ifndef YY_YY_PMYSQL_TAB_H_INCLUDED
# define YY_YY_PMYSQL_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NAME = 258,
     STRING = 259,
     INTNUM = 260,
     WinBOOL = 261,
     APPROXNUM = 262,
     USERVAR = 263,
     ASSIGN = 264,
     OR = 265,
     XOR = 266,
     ANDOP = 267,
     REGEXP = 268,
     LIKE = 269,
     IS = 270,
     IN = 271,
     NOT = 272,
     BETWEEN = 273,
     COMPARISON = 274,
     SHIFT = 275,
     MOD = 276,
     UMINUS = 277,
     EXIT = 278,
     ADD = 279,
     ALL = 280,
     ALTER = 281,
     ANALYZE = 282,
     AND = 283,
     ANY = 284,
     AS = 285,
     ASC = 286,
     AUTO_INCREMENT = 287,
     BEFORE = 288,
     BIGINT = 289,
     BINARY = 290,
     BIT = 291,
     WinBLOB = 292,
     BOTH = 293,
     BY = 294,
     CALL = 295,
     CASCADE = 296,
     CASE = 297,
     CHANGE = 298,
     WinCHAR = 299,
     CHECK = 300,
     COLLATE = 301,
     COLUMN = 302,
     COMMENT = 303,
     CONDITION = 304,
     CONSTRAINT = 305,
     CONTINUE = 306,
     CONVERT = 307,
     CREATE = 308,
     CROSS = 309,
     CURRENT_DATE = 310,
     CURRENT_TIME = 311,
     CURRENT_TIMESTAMP = 312,
     CURRENT_USER = 313,
     CURSOR = 314,
     DATABASE = 315,
     DATABASES = 316,
     WinDATE = 317,
     DATETIME = 318,
     DAY_HOUR = 319,
     DAY_MICROSECOND = 320,
     DAY_MINUTE = 321,
     DAY_SECOND = 322,
     WinDECIMAL = 323,
     DECLARE = 324,
     DEFAULT = 325,
     DELAYED = 326,
     DELETE = 327,
     DESC = 328,
     DESCRIBE = 329,
     DETERMINISTIC = 330,
     DISTINCT = 331,
     DISTINCTROW = 332,
     DIV = 333,
     WinDOUBLE = 334,
     DROP = 335,
     DUAL = 336,
     EACH = 337,
     ELSE = 338,
     ELSEIF = 339,
     END = 340,
     ENUM = 341,
     EXPLAIN = 342,
     FETCH = 343,
     WinFLOAT = 344,
     FOR = 345,
     FORCE = 346,
     FOREIGN = 347,
     FROM = 348,
     FULLTEXT = 349,
     GRANT = 350,
     GROUP = 351,
     HAVING = 352,
     HIGH_PRIORITY = 353,
     HOUR_MICROSECOND = 354,
     HOUR_MINUTE = 355,
     HOUR_SECOND = 356,
     IF = 357,
     IGNORE = 358,
     INFILE = 359,
     INDEX = 360,
     INNER = 361,
     INOUT = 362,
     INSENSITIVE = 363,
     INSERT = 364,
     WinINT = 365,
     INTEGER = 366,
     INTERVAL = 367,
     INTO = 368,
     ITERATE = 369,
     JOIN = 370,
     KEY = 371,
     KEYS = 372,
     KILL = 373,
     LEADING = 374,
     LEAVE = 375,
     LEFT = 376,
     LIMIT = 377,
     LINES = 378,
     LOAD = 379,
     LOCALTIME = 380,
     LOCALTIMESTAMP = 381,
     LOCK = 382,
     WinLONG = 383,
     LONGBLOB = 384,
     LONGTEXT = 385,
     LOOP = 386,
     LOW_PRIORITY = 387,
     MATCH = 388,
     MEDIUMBLOB = 389,
     MEDIUMINT = 390,
     MEDIUMTEXT = 391,
     MINUTE_MICROSECOND = 392,
     MINUTE_SECOND = 393,
     MODIFIES = 394,
     NATURAL = 395,
     NO_WRITE_TO_BINLOG = 396,
     NULLX = 397,
     NUMBER = 398,
     ON = 399,
     ONDUPLICATE = 400,
     OPTIMIZE = 401,
     OPTION = 402,
     OPTIONALLY = 403,
     ORDER = 404,
     OUT = 405,
     OUTER = 406,
     OUTFILE = 407,
     PRECISION = 408,
     PRIMARY = 409,
     PROCEDURE = 410,
     PURGE = 411,
     QUICK = 412,
     READ = 413,
     READS = 414,
     REAL = 415,
     REFERENCES = 416,
     RELEASE = 417,
     RENAME = 418,
     REPEAT = 419,
     REPLACE = 420,
     REQUIRE = 421,
     RESTRICT = 422,
     RETURN = 423,
     REVOKE = 424,
     RIGHT = 425,
     ROLLUP = 426,
     SECOND_MICROSECOND = 427,
     SELECT = 428,
     SENSITIVE = 429,
     SEPARATOR = 430,
     SET = 431,
     SHOW = 432,
     SMALLINT = 433,
     SOME = 434,
     SONAME = 435,
     SPATIAL = 436,
     SPECIFIC = 437,
     SQL = 438,
     SQLEXCEPTION = 439,
     SQLSTATE = 440,
     SQLWARNING = 441,
     SQL_BIG_RESULT = 442,
     SQL_CALC_FOUND_ROWS = 443,
     SQL_SMALL_RESULT = 444,
     SSL = 445,
     STARTING = 446,
     STRAIGHT_JOIN = 447,
     TABLE = 448,
     TEMPORARY = 449,
     TERMINATED = 450,
     TEXT = 451,
     THEN = 452,
     TIME = 453,
     TIMESTAMP = 454,
     TINYBLOB = 455,
     TINYINT = 456,
     TINYTEXT = 457,
     TO = 458,
     TRAILING = 459,
     TRIGGER = 460,
     UNDO = 461,
     UNION = 462,
     UNIQUE = 463,
     UNLOCK = 464,
     UNSIGNED = 465,
     UPDATE = 466,
     USAGE = 467,
     USE = 468,
     USING = 469,
     UTC_DATE = 470,
     UTC_TIME = 471,
     UTC_TIMESTAMP = 472,
     VALUES = 473,
     VARBINARY = 474,
     VARCHAR = 475,
     VARYING = 476,
     WHEN = 477,
     WHERE = 478,
     WHILE = 479,
     WITH = 480,
     WRITE = 481,
     YEAR = 482,
     YEAR_MONTH = 483,
     ZEROFILL = 484,
     ESCAPED = 485,
     EXISTS = 486,
     FSUBSTRING = 487,
     FTRIM = 488,
     FDATE_ADD = 489,
     FDATE_SUB = 490,
     FCOUNT = 491
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 58 "pmysql.y"

        int intval;
        double floatval;
        char *strval;
        int subtok;


/* Line 387 of yacc.c  */
#line 404 "pmysql.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_PMYSQL_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 432 "pmysql.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  55
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1457

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  251
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  72
/* YYNRULES -- Number of rules.  */
#define YYNRULES  288
/* YYNRULES -- Number of states.  */
#define YYNSTATES  607

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   491

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    17,     2,     2,     2,    28,    22,     2,
     248,   249,    26,    24,   250,    25,   247,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   246,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    30,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    21,     2,     2,     2,     2,     2,
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
      15,    16,    18,    19,    20,    23,    29,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    15,    17,    19,
      21,    23,    25,    29,    33,    37,    41,    45,    49,    52,
      56,    60,    64,    68,    72,    76,    80,    83,    86,    90,
      96,   103,   110,   117,   121,   126,   130,   135,   139,   145,
     147,   151,   152,   154,   160,   167,   173,   180,   185,   190,
     195,   200,   205,   212,   221,   226,   234,   236,   238,   240,
     247,   254,   258,   262,   266,   270,   274,   278,   282,   286,
     290,   295,   302,   306,   312,   317,   323,   327,   332,   336,
     341,   343,   345,   347,   350,   352,   363,   364,   367,   368,
     373,   376,   381,   382,   384,   386,   387,   388,   391,   392,
     395,   396,   400,   401,   404,   409,   410,   412,   413,   416,
     418,   422,   424,   428,   430,   433,   436,   438,   439,   441,
     445,   447,   449,   453,   459,   463,   467,   469,   470,   476,
     480,   486,   493,   499,   500,   502,   504,   505,   507,   509,
     511,   514,   517,   518,   519,   521,   524,   529,   536,   543,
     550,   551,   554,   555,   557,   561,   565,   567,   575,   578,
     581,   584,   585,   592,   595,   600,   601,   604,   612,   614,
     623,   624,   629,   630,   633,   636,   639,   642,   643,   647,
     651,   657,   659,   661,   665,   669,   677,   681,   685,   691,
     697,   705,   707,   716,   724,   732,   734,   743,   744,   747,
     750,   754,   760,   766,   774,   776,   780,   782,   791,   802,
     812,   819,   831,   840,   841,   843,   845,   849,   855,   860,
     865,   871,   877,   881,   882,   886,   889,   893,   897,   901,
     905,   908,   914,   918,   922,   925,   929,   930,   934,   940,
     941,   943,   944,   947,   950,   951,   956,   960,   963,   967,
     971,   975,   979,   983,   987,   991,   995,   999,  1003,  1005,
    1007,  1009,  1011,  1013,  1017,  1023,  1026,  1031,  1033,  1035,
    1037,  1039,  1043,  1047,  1051,  1055,  1061,  1067,  1069,  1073,
    1077,  1078,  1080,  1082,  1084,  1087,  1089,  1093,  1097
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     252,     0,    -1,    -1,   259,   246,    -1,    32,    -1,     3,
      -1,     3,   247,     3,    -1,     8,    -1,     4,    -1,     5,
      -1,     7,    -1,     6,    -1,   253,    24,   253,    -1,   253,
      25,   253,    -1,   253,    26,   253,    -1,   253,    27,   253,
      -1,   253,    28,   253,    -1,   253,    29,   253,    -1,    25,
     253,    -1,   253,    12,   253,    -1,   253,    10,   253,    -1,
     253,    11,   253,    -1,   253,    21,   253,    -1,   253,    22,
     253,    -1,   253,    30,   253,    -1,   253,    23,   253,    -1,
      18,   253,    -1,    17,   253,    -1,   253,    20,   253,    -1,
     253,    20,   248,   260,   249,    -1,   253,    20,    38,   248,
     260,   249,    -1,   253,    20,   188,   248,   260,   249,    -1,
     253,    20,    34,   248,   260,   249,    -1,   253,    15,   151,
      -1,   253,    15,    18,   151,    -1,   253,    15,     6,    -1,
     253,    15,    18,     6,    -1,     8,     9,   253,    -1,   253,
      19,   253,    37,   253,    -1,   253,    -1,   253,   250,   254,
      -1,    -1,   254,    -1,   253,    16,   248,   254,   249,    -1,
     253,    18,    16,   248,   254,   249,    -1,   253,    16,   248,
     260,   249,    -1,   253,    18,    16,   248,   260,   249,    -1,
     240,   248,   260,   249,    -1,     3,   248,   255,   249,    -1,
     245,   248,    26,   249,    -1,   245,   248,   253,   249,    -1,
     241,   248,   254,   249,    -1,   241,   248,   253,   102,   253,
     249,    -1,   241,   248,   253,   102,   253,    99,   253,   249,
      -1,   242,   248,   254,   249,    -1,   242,   248,   256,   253,
     102,   254,   249,    -1,   128,    -1,   213,    -1,    47,    -1,
     243,   248,   253,   250,   257,   249,    -1,   244,   248,   253,
     250,   257,   249,    -1,   121,   253,    73,    -1,   121,   253,
      74,    -1,   121,   253,    75,    -1,   121,   253,    76,    -1,
     121,   253,   237,    -1,   121,   253,   236,    -1,   121,   253,
     108,    -1,   121,   253,   109,    -1,   121,   253,   110,    -1,
      51,   253,   258,    94,    -1,    51,   253,   258,    92,   253,
      94,    -1,    51,   258,    94,    -1,    51,   258,    92,   253,
      94,    -1,   231,   253,   206,   253,    -1,   258,   231,   253,
     206,   253,    -1,   253,    14,   253,    -1,   253,    18,    14,
     253,    -1,   253,    13,   253,    -1,   253,    18,    13,   253,
      -1,    66,    -1,    64,    -1,    65,    -1,    44,   253,    -1,
     260,    -1,   182,   273,   102,   276,   261,   262,   267,   268,
     269,   271,    -1,    -1,   232,   253,    -1,    -1,   105,    48,
     263,   266,    -1,   253,   264,    -1,   263,   250,   253,   264,
      -1,    -1,    40,    -1,    82,    -1,    -1,    -1,   234,   180,
      -1,    -1,   106,   253,    -1,    -1,   158,    48,   263,    -1,
      -1,   131,   253,    -1,   131,   253,   250,   253,    -1,    -1,
     122,    -1,    -1,   122,   272,    -1,     3,    -1,   272,   250,
       3,    -1,   274,    -1,   273,   250,   274,    -1,    26,    -1,
     253,   275,    -1,    39,     3,    -1,     3,    -1,    -1,   277,
      -1,   276,   250,   277,    -1,   278,    -1,   280,    -1,     3,
     275,   287,    -1,     3,   247,     3,   275,   287,    -1,   290,
     279,     3,    -1,   248,   276,   249,    -1,    39,    -1,    -1,
     277,   281,   124,   278,   285,    -1,   277,   201,   278,    -1,
     277,   201,   278,   153,   253,    -1,   277,   283,   282,   124,
     278,   286,    -1,   277,   149,   284,   124,   278,    -1,    -1,
     115,    -1,    63,    -1,    -1,   160,    -1,   130,    -1,   179,
      -1,   130,   282,    -1,   179,   282,    -1,    -1,    -1,   286,
      -1,   153,   253,    -1,   223,   248,   272,   249,    -1,   222,
     125,   288,   248,   289,   249,    -1,   112,   125,   288,   248,
     289,   249,    -1,   100,   125,   288,   248,   289,   249,    -1,
      -1,    99,   124,    -1,    -1,     3,    -1,   289,   250,     3,
      -1,   248,   260,   249,    -1,   291,    -1,    81,   292,   102,
       3,   261,   268,   269,    -1,   292,   141,    -1,   292,   166,
      -1,   292,   112,    -1,    -1,    81,   292,   293,   102,   276,
     261,    -1,     3,   294,    -1,   293,   250,     3,   294,    -1,
      -1,   247,    26,    -1,    81,   292,   102,   293,   223,   276,
     261,    -1,   295,    -1,   118,   297,   122,     3,   298,   227,
     299,   296,    -1,    -1,   154,   125,   220,   301,    -1,    -1,
     297,   141,    -1,   297,    80,    -1,   297,   107,    -1,   297,
     112,    -1,    -1,   248,   272,   249,    -1,   248,   300,   249,
      -1,   299,   250,   248,   300,   249,    -1,   253,    -1,    79,
      -1,   300,   250,   253,    -1,   300,   250,    79,    -1,   118,
     297,   270,     3,   185,   301,   296,    -1,     3,    20,   253,
      -1,     3,    20,    79,    -1,   301,   250,     3,    20,   253,
      -1,   301,   250,     3,    20,    79,    -1,   118,   297,   270,
       3,   298,   260,   296,    -1,   302,    -1,   174,   297,   270,
       3,   298,   227,   299,   296,    -1,   174,   297,   270,     3,
     185,   301,   296,    -1,   174,   297,   270,     3,   298,   260,
     296,    -1,   303,    -1,   220,   304,   276,   185,   305,   261,
     268,   269,    -1,    -1,   297,   141,    -1,   297,   112,    -1,
       3,    20,   253,    -1,     3,   247,     3,    20,   253,    -1,
     305,   250,     3,    20,   253,    -1,   305,   250,     3,   247,
       3,    20,   253,    -1,   306,    -1,    89,   202,     3,    -1,
     307,    -1,    62,   308,   202,   265,     3,   248,   309,   249,
      -1,    62,   308,   202,   265,     3,   247,     3,   248,   309,
     249,    -1,    62,   308,   202,   265,     3,   248,   309,   249,
     318,    -1,    62,   308,   202,   265,     3,   318,    -1,    62,
     308,   202,   265,     3,   247,     3,   248,   309,   249,   318,
      -1,    62,   308,   202,   265,     3,   247,     3,   318,    -1,
      -1,   203,    -1,   310,    -1,   309,   250,   310,    -1,   163,
     125,   248,   272,   249,    -1,   125,   248,   272,   249,    -1,
     114,   248,   272,   249,    -1,   103,   114,   248,   272,   249,
      -1,   103,   125,   248,   272,   249,    -1,     3,   316,   311,
      -1,    -1,   311,    18,   151,    -1,   311,   151,    -1,   311,
      79,     4,    -1,   311,    79,     5,    -1,   311,    79,     7,
      -1,   311,    79,     6,    -1,   311,    41,    -1,   311,   217,
     248,   272,   249,    -1,   311,   217,   125,    -1,   311,   163,
     125,    -1,   311,   125,    -1,   311,    57,     4,    -1,    -1,
     248,     5,   249,    -1,   248,     5,   250,     5,   249,    -1,
      -1,    44,    -1,    -1,   314,   219,    -1,   314,   238,    -1,
      -1,   315,    53,   185,     4,    -1,   315,    55,     4,    -1,
      45,   312,    -1,   210,   312,   314,    -1,   187,   312,   314,
      -1,   144,   312,   314,    -1,   119,   312,   314,    -1,   120,
     312,   314,    -1,    43,   312,   314,    -1,   169,   312,   314,
      -1,    88,   312,   314,    -1,    98,   312,   314,    -1,    77,
     312,   314,    -1,    71,    -1,   207,    -1,   208,    -1,    72,
      -1,   236,    -1,    53,   312,   315,    -1,   229,   248,     5,
     249,   315,    -1,    44,   312,    -1,   228,   248,     5,   249,
      -1,   209,    -1,    46,    -1,   143,    -1,   138,    -1,   211,
     313,   315,    -1,   205,   313,   315,    -1,   145,   313,   315,
      -1,   139,   313,   315,    -1,    95,   248,   317,   249,   315,
      -1,   185,   248,   317,   249,   315,    -1,     4,    -1,   317,
     250,     4,    -1,   319,   279,   260,    -1,    -1,   112,    -1,
     174,    -1,   320,    -1,   185,   321,    -1,   322,    -1,   321,
     250,   322,    -1,     8,    20,   253,    -1,     8,     9,   253,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   330,   330,   331,   332,   338,   339,   345,   346,   352,
     353,   354,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   376,
     377,   378,   379,   382,   383,   384,   385,   387,   390,   393,
     394,   397,   398,   401,   402,   403,   404,   405,   409,   413,
     414,   416,   417,   418,   420,   421,   424,   425,   426,   429,
     430,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     443,   444,   445,   446,   449,   450,   453,   454,   457,   458,
     461,   462,   463,   466,   471,   478,   484,   485,   487,   488,
     492,   494,   498,   499,   500,   503,   505,   506,   509,   510,
     512,   513,   516,   516,   517,   520,   521,   524,   525,   528,
     529,   533,   534,   535,   538,   540,   541,   542,   545,   546,
     549,   550,   554,   555,   557,   558,   561,   562,   566,   568,
     570,   572,   574,   578,   579,   580,   583,   584,   587,   588,
     591,   592,   593,   596,   597,   600,   601,   605,   607,   609,
     611,   614,   615,   618,   619,   622,   627,   631,   639,   640,
     641,   642,   646,   651,   652,   656,   656,   659,   667,   670,
     681,   682,   685,   686,   687,   688,   689,   693,   694,   697,
     698,   701,   702,   703,   704,   706,   713,   716,   719,   722,
     727,   733,   736,   742,   748,   754,   757,   764,   765,   766,
     770,   773,   776,   779,   786,   789,   795,   798,   806,   810,
     815,   819,   824,   828,   829,   832,   833,   836,   837,   838,
     839,   840,   843,   850,   851,   852,   853,   855,   857,   859,
     861,   863,   865,   866,   867,   868,   872,   873,   874,   877,
     878,   881,   882,   883,   886,   887,   888,   892,   893,   894,
     895,   896,   897,   898,   899,   900,   901,   902,   903,   904,
     905,   906,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   918,   919,   920,   921,   924,   925,   928,
     931,   932,   933,   938,   941,   943,   943,   946,   948
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "WinBOOL",
  "APPROXNUM", "USERVAR", "ASSIGN", "OR", "XOR", "ANDOP", "REGEXP", "LIKE",
  "IS", "IN", "'!'", "NOT", "BETWEEN", "COMPARISON", "'|'", "'&'", "SHIFT",
  "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'", "UMINUS", "EXIT", "ADD",
  "ALL", "ALTER", "ANALYZE", "AND", "ANY", "AS", "ASC", "AUTO_INCREMENT",
  "BEFORE", "BIGINT", "BINARY", "BIT", "WinBLOB", "BOTH", "BY", "CALL",
  "CASCADE", "CASE", "CHANGE", "WinCHAR", "CHECK", "COLLATE", "COLUMN",
  "COMMENT", "CONDITION", "CONSTRAINT", "CONTINUE", "CONVERT", "CREATE",
  "CROSS", "CURRENT_DATE", "CURRENT_TIME", "CURRENT_TIMESTAMP",
  "CURRENT_USER", "CURSOR", "DATABASE", "DATABASES", "WinDATE", "DATETIME",
  "DAY_HOUR", "DAY_MICROSECOND", "DAY_MINUTE", "DAY_SECOND", "WinDECIMAL",
  "DECLARE", "DEFAULT", "DELAYED", "DELETE", "DESC", "DESCRIBE",
  "DETERMINISTIC", "DISTINCT", "DISTINCTROW", "DIV", "WinDOUBLE", "DROP",
  "DUAL", "EACH", "ELSE", "ELSEIF", "END", "ENUM", "EXPLAIN", "FETCH",
  "WinFLOAT", "FOR", "FORCE", "FOREIGN", "FROM", "FULLTEXT", "GRANT",
  "GROUP", "HAVING", "HIGH_PRIORITY", "HOUR_MICROSECOND", "HOUR_MINUTE",
  "HOUR_SECOND", "IF", "IGNORE", "INFILE", "INDEX", "INNER", "INOUT",
  "INSENSITIVE", "INSERT", "WinINT", "INTEGER", "INTERVAL", "INTO",
  "ITERATE", "JOIN", "KEY", "KEYS", "KILL", "LEADING", "LEAVE", "LEFT",
  "LIMIT", "LINES", "LOAD", "LOCALTIME", "LOCALTIMESTAMP", "LOCK",
  "WinLONG", "LONGBLOB", "LONGTEXT", "LOOP", "LOW_PRIORITY", "MATCH",
  "MEDIUMBLOB", "MEDIUMINT", "MEDIUMTEXT", "MINUTE_MICROSECOND",
  "MINUTE_SECOND", "MODIFIES", "NATURAL", "NO_WRITE_TO_BINLOG", "NULLX",
  "NUMBER", "ON", "ONDUPLICATE", "OPTIMIZE", "OPTION", "OPTIONALLY",
  "ORDER", "OUT", "OUTER", "OUTFILE", "PRECISION", "PRIMARY", "PROCEDURE",
  "PURGE", "QUICK", "READ", "READS", "REAL", "REFERENCES", "RELEASE",
  "RENAME", "REPEAT", "REPLACE", "REQUIRE", "RESTRICT", "RETURN", "REVOKE",
  "RIGHT", "ROLLUP", "SECOND_MICROSECOND", "SELECT", "SENSITIVE",
  "SEPARATOR", "SET", "SHOW", "SMALLINT", "SOME", "SONAME", "SPATIAL",
  "SPECIFIC", "SQL", "SQLEXCEPTION", "SQLSTATE", "SQLWARNING",
  "SQL_BIG_RESULT", "SQL_CALC_FOUND_ROWS", "SQL_SMALL_RESULT", "SSL",
  "STARTING", "STRAIGHT_JOIN", "TABLE", "TEMPORARY", "TERMINATED", "TEXT",
  "THEN", "TIME", "TIMESTAMP", "TINYBLOB", "TINYINT", "TINYTEXT", "TO",
  "TRAILING", "TRIGGER", "UNDO", "UNION", "UNIQUE", "UNLOCK", "UNSIGNED",
  "UPDATE", "USAGE", "USE", "USING", "UTC_DATE", "UTC_TIME",
  "UTC_TIMESTAMP", "VALUES", "VARBINARY", "VARCHAR", "VARYING", "WHEN",
  "WHERE", "WHILE", "WITH", "WRITE", "YEAR", "YEAR_MONTH", "ZEROFILL",
  "ESCAPED", "EXISTS", "FSUBSTRING", "FTRIM", "FDATE_ADD", "FDATE_SUB",
  "FCOUNT", "';'", "'.'", "'('", "')'", "','", "$accept", "query", "expr",
  "val_list", "opt_val_list", "trim_ltb", "interval_exp", "case_list",
  "stmt", "select_stmt", "opt_where", "opt_groupby", "groupby_list",
  "opt_asc_desc", "opt_if_not_exists", "opt_with_rollup", "opt_having",
  "opt_orderby", "opt_limit", "opt_into", "opt_into_list", "column_list",
  "select_expr_list", "select_expr", "opt_as_alias", "table_references",
  "table_reference", "table_factor", "opt_as", "join_table",
  "opt_inner_cross", "opt_outer", "left_or_right",
  "opt_left_or_right_outer", "opt_join_condition", "join_condition",
  "index_hint", "opt_for_join", "index_list", "table_subquery",
  "delete_stmt", "delete_opts", "delete_list", "opt_dot_star",
  "insert_stmt", "opt_ondupupdate", "insert_opts", "opt_col_names",
  "insert_vals_list", "insert_vals", "insert_asgn_list", "replace_stmt",
  "update_stmt", "update_opts", "update_asgn_list", "drop_table_stmt",
  "create_table_stmt", "opt_temporary", "create_col_list",
  "create_definition", "column_atts", "opt_length", "opt_binary", "opt_uz",
  "opt_csc", "data_type", "enum_list", "create_select_statement",
  "opt_ignore_replace", "set_stmt", "set_list", "set_expr", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    33,   272,   273,
     274,   124,    38,   275,    43,    45,    42,    47,    37,   276,
      94,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,    59,    46,    40,    41,
      44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   251,   252,   252,   252,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   254,
     254,   255,   255,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   256,   256,   256,   253,
     253,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     253,   253,   253,   253,   258,   258,   253,   253,   253,   253,
     253,   253,   253,   253,   259,   260,   261,   261,   262,   262,
     263,   263,   264,   264,   264,   265,   266,   266,   267,   267,
     268,   268,   269,   269,   269,   270,   270,   271,   271,   272,
     272,   273,   273,   273,   274,   275,   275,   275,   276,   276,
     277,   277,   278,   278,   278,   278,   279,   279,   280,   280,
     280,   280,   280,   281,   281,   281,   282,   282,   283,   283,
     284,   284,   284,   285,   285,   286,   286,   287,   287,   287,
     287,   288,   288,   289,   289,   290,   259,   291,   292,   292,
     292,   292,   291,   293,   293,   294,   294,   291,   259,   295,
     296,   296,   297,   297,   297,   297,   297,   298,   298,   299,
     299,   300,   300,   300,   300,   295,   301,   301,   301,   301,
     295,   259,   302,   302,   302,   259,   303,   304,   304,   304,
     305,   305,   305,   305,   259,   306,   259,   307,   307,   307,
     307,   307,   307,   308,   308,   309,   309,   310,   310,   310,
     310,   310,   310,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   312,   312,   312,   313,
     313,   314,   314,   314,   315,   315,   315,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   317,   317,   318,
     319,   319,   319,   259,   320,   321,   321,   322,   322
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     3,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     3,     5,
       6,     6,     6,     3,     4,     3,     4,     3,     5,     1,
       3,     0,     1,     5,     6,     5,     6,     4,     4,     4,
       4,     4,     6,     8,     4,     7,     1,     1,     1,     6,
       6,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     6,     3,     5,     4,     5,     3,     4,     3,     4,
       1,     1,     1,     2,     1,    10,     0,     2,     0,     4,
       2,     4,     0,     1,     1,     0,     0,     2,     0,     2,
       0,     3,     0,     2,     4,     0,     1,     0,     2,     1,
       3,     1,     3,     1,     2,     2,     1,     0,     1,     3,
       1,     1,     3,     5,     3,     3,     1,     0,     5,     3,
       5,     6,     5,     0,     1,     1,     0,     1,     1,     1,
       2,     2,     0,     0,     1,     2,     4,     6,     6,     6,
       0,     2,     0,     1,     3,     3,     1,     7,     2,     2,
       2,     0,     6,     2,     4,     0,     2,     7,     1,     8,
       0,     4,     0,     2,     2,     2,     2,     0,     3,     3,
       5,     1,     1,     3,     3,     7,     3,     3,     5,     5,
       7,     1,     8,     7,     7,     1,     8,     0,     2,     2,
       3,     5,     5,     7,     1,     3,     1,     8,    10,     9,
       6,    11,     8,     0,     1,     1,     3,     5,     4,     4,
       5,     5,     3,     0,     3,     2,     3,     3,     3,     3,
       2,     5,     3,     3,     2,     3,     0,     3,     5,     0,
       1,     0,     2,     2,     0,     4,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     3,     5,     2,     4,     1,     1,     1,
       1,     3,     3,     3,     3,     5,     5,     1,     3,     3,
       0,     1,     1,     1,     2,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     4,   213,   161,     0,   172,   172,     0,     0,   172,
       0,     0,    84,   156,   168,   191,   195,   204,   206,   283,
     214,     0,     0,     0,   105,   105,     5,     8,     9,    11,
      10,     7,     0,     0,     0,   113,     0,     0,    81,    82,
      80,     0,     0,     0,     0,     0,     0,   117,     0,   111,
       0,   284,   285,     0,     0,     1,     3,    95,   165,     0,
     160,   158,   159,     0,   205,   174,   175,   176,     0,   173,
       0,   106,     0,     0,    41,     0,    27,    26,    18,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,     0,     0,     0,     0,     0,   176,   173,   117,
       0,     0,   118,   120,   121,   127,     0,     0,   163,    86,
       0,     0,     0,   177,   177,   177,     6,    39,    42,     0,
      37,     0,     0,     0,    72,     0,     0,    39,     0,    58,
      56,    57,     0,     0,     0,     0,     0,     0,    20,    21,
      19,    78,    76,    35,     0,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,    22,    23,    25,    12,
      13,    14,    15,    16,    17,    24,   115,    86,   112,   288,
     287,   286,     0,   150,     0,     0,     0,     0,   135,   134,
     138,   142,   139,     0,     0,   136,   126,     0,   280,   166,
       0,   100,     0,    86,   165,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,    70,     0,     0,    47,     0,
      51,    54,     0,     0,     0,    49,    50,    36,    34,     0,
       0,    79,    77,     0,     0,     0,     0,     0,     0,    88,
     117,     0,     0,     0,   122,   155,   125,     0,    86,   119,
     136,   136,     0,   129,     0,   137,     0,   124,   281,   282,
       0,     0,   210,   127,    87,     0,   102,    86,   162,   164,
     109,     0,     0,     0,   170,   170,   170,     0,   170,    40,
      74,     0,    73,     0,     0,     0,     0,     0,     0,    43,
      45,     0,     0,    38,     0,     0,     0,    29,     0,    98,
     150,   152,   152,   152,     0,     0,     0,   100,   140,   141,
       0,     0,   143,     0,   280,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,   157,   167,   178,     0,     0,
     170,     0,     0,     0,   185,   190,   193,   170,   194,    71,
      75,     0,    52,     0,     0,    59,    60,    44,    46,    32,
      30,    31,     0,     0,   100,   123,     0,     0,     0,     0,
     200,     0,     0,   102,   132,   130,     0,     0,   128,   144,
       0,     0,   212,   236,   236,   236,   268,   236,   258,   261,
     236,   236,     0,   236,   236,   236,   270,   239,   269,   236,
     239,   236,     0,   236,   239,   259,   260,   267,   236,   239,
       0,     0,   262,   223,     0,     0,     0,     0,     0,   280,
       0,   279,    92,   101,   103,   110,   182,   181,     0,     0,
     169,   187,   186,     0,     0,   192,     0,    55,    61,    62,
      63,    64,    67,    68,    69,    66,    65,    96,    99,   102,
     151,     0,     0,     0,     0,     0,     0,   196,   145,     0,
     131,     0,     0,   241,   265,   247,   244,   241,   241,     0,
     241,   241,   241,   240,   244,   241,   244,   241,     0,   241,
     244,   241,   244,     0,     0,   222,     0,     0,     0,     0,
       0,   209,   216,    93,    94,    90,     0,     0,   179,     0,
       0,     0,     0,    53,     0,    89,   107,   153,     0,     0,
       0,   201,   202,     0,     0,   280,     0,   253,   263,   257,
     255,   277,     0,   256,   251,   252,   274,   250,   273,   254,
       0,   249,   272,   248,   271,     0,     0,     0,   230,     0,
       0,   234,   225,     0,     0,     0,     0,   219,   218,     0,
      92,   104,   184,   183,     0,   171,   189,   188,    97,     0,
      85,   149,     0,   148,   147,     0,   146,   211,   237,     0,
     242,   243,     0,     0,   244,     0,   244,   266,   244,   224,
     235,   226,   227,   229,   228,   233,   232,     0,   220,   221,
     217,    91,   180,   108,   154,   203,     0,     0,   246,   275,
     278,   276,   264,     0,   238,   245,   231
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,   137,   138,   139,   153,   297,    82,    11,    12,
     211,   309,   423,   495,   126,   505,   364,   276,   335,    70,
     560,   281,    48,    49,   111,   121,   122,   123,   207,   124,
     204,   266,   205,   262,   378,   379,   254,   367,   508,   125,
      13,    22,    63,   128,    14,   344,    24,   216,   340,   428,
     284,    15,    16,    54,   258,    17,    18,    21,   330,   331,
     485,   463,   474,   517,   518,   413,   522,   272,   273,    19,
      51,    52
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -315
static const yytype_int16 yypact[] =
{
     966,  -315,  -151,  -315,  -148,  -315,  -315,   168,    52,     5,
      69,  -164,  -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,
    -315,   -12,   204,   136,   442,   481,  -159,  -315,  -315,  -315,
    -315,   186,   421,   421,   421,  -315,   421,   257,  -315,  -315,
    -315,   -27,     2,     4,    10,    44,    47,  1312,   -83,  -315,
     188,   -14,  -315,   239,     7,  -315,  -315,  -315,    58,   309,
    -315,  -315,  -315,   -71,  -315,  -315,  -315,  -315,   317,  -315,
     322,  -315,   325,   328,   421,   421,   628,   628,  -315,  -315,
     421,   940,   -53,   151,   421,   145,   421,   421,   273,  -315,
     421,   421,   421,   421,   421,    17,    94,   213,   421,    -1,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     345,  -315,     7,   421,   421,   421,    52,     8,     9,    12,
       6,  -145,   433,  -315,  -315,   311,   354,   351,  -315,   208,
     -22,     7,   368,   131,  -129,  -115,  -315,   657,  -315,   135,
    1370,   967,   -50,   421,  -315,   421,   144,   102,   181,  -315,
    -315,  -315,   187,   421,   678,   699,   195,   824,  1390,  1409,
    1139,  1427,  1427,  -315,    26,  -315,   356,   421,   421,   206,
    1342,   228,   243,   246,   151,   727,   770,   906,   454,   369,
     369,   387,   387,   387,   387,  -315,  -315,  -179,  -315,  1370,
    1370,  -315,   449,   -64,   212,    18,   531,     7,  -315,  -315,
    -315,   -75,  -315,     7,   411,   376,  -315,   534,   -34,  -315,
     421,   381,     7,  -179,    58,   537,   314,   541,   151,   541,
     -28,   421,  -315,   421,   421,  -315,  1235,   994,  -315,   421,
    -315,  -315,  1214,   424,   424,  -315,  -315,  -315,  -315,   302,
     303,  1427,  1427,   356,   421,   151,   151,   151,   306,   451,
      35,   435,   437,   440,  -315,  -315,  -315,    -2,  -174,   433,
     376,   376,   453,   425,     7,  -315,   455,  -315,  -315,  -315,
     577,   215,  -315,   311,  1370,   538,   456,  -179,  -315,  -315,
    -315,    21,   346,   575,  -109,   448,  -109,   346,   448,  -315,
    1370,  1256,  -315,   421,   803,   421,   421,   357,   358,  -315,
    -315,   359,   360,   710,   361,   365,   366,  -315,   557,   517,
     -64,   526,   526,   526,   421,   624,   626,   381,  -315,  -315,
       7,   421,   -86,     7,   -84,   987,   121,   388,   389,   510,
      53,  -315,   151,   421,   421,  -315,  -315,  -315,   641,   398,
    -108,   502,   520,   656,  -315,  -315,  -315,  -108,  -315,  -315,
    1370,   421,  -315,   446,   866,  -315,  -315,  -315,  -315,  -315,
    -315,  -315,   421,   421,   381,  -315,   536,   426,   468,   493,
    1370,   738,     1,   456,  -315,  1370,   421,   511,  -315,  -315,
     -86,   215,  -315,   512,   512,   512,  -315,   512,  -315,  -315,
     512,   512,   513,   512,   512,   512,  -315,   718,  -315,   512,
     718,   512,   515,   512,   718,  -315,  -315,  -315,   512,   718,
     516,   530,  -315,  -315,   553,   554,   537,   537,   555,   -99,
     215,  -315,  1277,   556,   761,  -315,  -315,  1370,    86,   572,
    -315,  -315,  1370,   584,   785,  -315,   845,  -315,  -315,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,  -315,   -19,  1370,   456,
    -315,   838,   838,   838,   421,   421,   859,  -315,  1370,   537,
    -315,   104,   878,  -315,  -315,  -315,  -315,  -315,  -315,   893,
    -315,  -315,  -315,  -315,  -315,  -315,  -315,  -315,   893,  -315,
    -315,  -315,  -315,   894,   895,   396,   537,   537,   126,   133,
     537,  -315,  -315,  -315,  -315,  -315,   421,   421,  -315,   525,
     398,   541,   567,  -315,   721,  -315,   776,  -315,   142,   169,
     201,  1370,  1370,   885,   207,   -40,   210,  -172,   147,  -172,
    -172,  -315,   217,  -172,  -172,  -172,   147,  -172,   147,  -172,
     219,  -172,   147,  -172,   147,   659,   662,   764,  -315,   912,
     428,  -315,  -315,   792,  -103,   221,   224,  -315,  -315,   254,
    1277,  1370,  -315,  1370,   262,   669,  -315,  1370,  -315,   537,
    -315,  -315,   918,  -315,  -315,   421,  -315,  -315,  -315,   919,
    -315,  -315,   740,   922,  -315,   933,  -315,  -315,  -315,  -315,
    -315,  -315,  -315,  -315,  -315,  -315,  -315,   537,  -315,  -315,
    -315,  -315,  -315,   673,  -315,  1370,   689,   939,  -315,   147,
    -315,   147,   147,   274,  -315,  -315,  -315
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -315,  -315,    -7,   -23,  -315,  -315,   711,   863,  -315,   -63,
      38,  -315,   585,   407,  -315,  -315,  -315,  -173,  -314,   921,
    -315,  -193,  -315,   835,   -85,   118,   774,  -154,   700,  -315,
    -315,    24,  -315,  -315,  -315,   592,   674,   -25,    73,  -315,
    -315,  -315,   941,   787,  -315,    25,   150,   233,   712,   503,
    -218,  -315,  -315,  -315,  -315,  -315,  -315,  -315,   621,   605,
    -315,   519,  -100,   149,  -133,  -315,   548,  -310,  -315,  -315,
    -315,   911
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -209
static const yytype_int16 yytable[] =
{
      47,   286,    26,    27,    28,    29,    30,    31,  -197,   119,
     119,  -199,  -198,   268,   382,    89,    32,    33,   314,   112,
     146,   455,   586,   163,    34,    76,    77,    78,   268,    79,
      81,   131,   237,   171,   193,   164,   251,   172,    89,   143,
     196,   144,   224,    36,   225,   342,   342,   570,   252,   263,
      37,   110,    20,   210,    23,   260,   217,   194,   210,   457,
      50,   148,   152,    38,    39,    40,   571,   376,   140,    55,
     219,   197,   268,   141,   110,   269,   316,   147,   268,   154,
     155,   157,    56,   158,   159,   160,   161,   162,    73,    74,
     269,   170,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   240,   261,   197,    47,   189,   190,   491,
     322,   248,    90,    91,    92,    93,    94,    95,    96,   215,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   215,   269,   506,   226,   377,   227,    64,
     269,   343,   429,   239,   373,   587,   232,  -207,    26,    27,
      28,    29,    30,    31,     7,   285,    25,   288,   253,    53,
     241,   242,    32,    33,   381,   310,   374,   113,   165,   380,
      34,    26,    27,    28,    29,    30,    31,   238,   145,   132,
     302,   145,   304,   305,   306,    32,    33,   173,     7,    36,
      57,   449,   149,    34,    35,    75,    37,   114,   289,   287,
     572,   212,   573,   274,   229,   567,  -208,    58,   115,    38,
      39,    40,    36,   270,   271,   504,   290,   291,   325,    37,
     301,    83,   294,   488,   489,   249,   167,   168,   132,   169,
     187,   496,    38,    39,    40,   414,   116,   303,   195,    41,
      42,    43,    44,    45,    46,   315,   415,   174,   456,   213,
      84,   278,    85,  -197,   120,   120,  -199,  -198,    86,   192,
      26,    27,    28,    29,    30,    31,   514,   256,   197,   421,
     337,   338,   353,   150,    32,    33,    26,    27,    28,    29,
      30,    31,    34,   555,   318,   319,   350,   368,   369,   354,
      32,    33,    87,   545,   546,    88,   317,   549,    34,   156,
     476,    36,   419,   420,   480,   127,    59,   370,    37,   482,
     345,   346,   129,   348,   375,   336,    60,    36,   326,    65,
     133,    38,    39,    40,    37,   134,   422,   424,   135,   327,
     277,   136,   427,     7,   432,   498,   499,    38,    39,    40,
     328,   526,   166,   528,   436,    61,    66,   532,   186,   534,
     206,   117,   221,   515,   420,   422,   448,   208,   151,    26,
      27,    28,    29,    30,    31,   430,   593,   218,   220,   458,
      62,   214,   435,    32,    33,   547,   338,   209,   329,   215,
     118,    34,   548,   338,   222,    41,    42,    43,    44,    45,
      46,   561,   562,   228,   603,   105,   106,   107,   108,   109,
      36,    26,    27,    28,    29,    30,    31,    37,    41,    42,
      43,    44,    45,    46,   537,    32,    33,   109,   563,   562,
      38,    39,    40,    34,    26,    27,    28,    29,    30,    31,
     230,  -165,   581,   582,   583,   584,   231,   538,    32,    33,
     210,   599,    36,   601,   235,   602,    34,   511,   512,    37,
     564,   562,   250,   539,   243,   127,   566,   338,  -165,   568,
     569,   255,    38,    39,    40,    36,   574,   575,   576,   575,
     588,   338,    37,   589,   338,   540,   245,   426,   103,   104,
     105,   106,   107,   108,   109,    38,    39,    40,    80,   550,
     551,   246,   553,   427,   247,   557,   198,    41,    42,    43,
      44,    45,    46,   590,   338,    26,    27,    28,    29,    30,
      31,   592,   499,    41,    42,    43,    44,    45,    46,    32,
      33,   541,    65,   606,   338,   509,   510,    34,    26,    27,
      28,    29,    30,    31,   257,   264,   265,   267,     7,   275,
     280,   282,    32,    33,   283,   296,    36,   542,   199,    66,
      34,   299,   300,    37,    67,   307,   308,  -133,   595,   543,
     311,    65,   312,   200,    68,   313,    38,    39,    40,    36,
      26,    27,    28,    29,    30,    31,    37,   320,   321,   323,
     324,   431,   201,    69,    32,    33,   333,   334,    66,    38,
      39,    40,    34,    67,   339,   341,    41,    42,    43,    44,
      45,    46,   342,    71,   552,   362,   355,   356,   357,   358,
     359,    36,   202,   544,   360,   361,   519,   520,    37,   523,
     524,   525,    69,   363,   527,   366,   529,   371,   531,   372,
     533,    38,    39,    40,   203,   418,   416,   417,    41,    42,
      43,    44,    45,    46,   425,   433,   556,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   434,
     450,    41,    42,    43,    44,    45,    46,    90,    91,    92,
      93,    94,    95,    96,   451,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    90,    91,
      92,    93,    94,    95,    96,   437,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    90,
      91,    92,    93,    94,    95,    96,   452,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   453,    41,    42,    43,    44,    45,    46,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   454,   459,
     462,   469,   473,   478,   483,    41,    42,    43,    44,    45,
      46,    90,    91,    92,    93,    94,    95,    96,   484,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   486,   487,   490,   501,   502,   496,    41,    42,    43,
      44,    45,    46,    90,    91,    92,    93,    94,    95,    96,
     500,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    90,    91,    92,    93,    94,    95,
      96,   507,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,    90,    91,    92,    93,    94,
      95,    96,   513,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    90,    91,    92,    93,
      94,    95,    96,   516,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   521,   559,   535,
     536,   558,   351,   464,   465,   565,   466,   221,   577,   467,
     468,   578,   470,   471,   472,   579,   580,   585,   475,   343,
     477,   594,   479,   338,   596,   597,   598,   481,   233,   102,
     103,   104,   105,   106,   107,   108,   109,   600,   604,   438,
     439,   440,   441,   605,   142,   298,    72,   447,   188,   234,
      90,    91,    92,    93,    94,    95,    96,   591,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   259,   460,   332,   442,   443,   444,    90,    91,    92,
      93,    94,    95,    96,   365,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,     1,   347,
     130,   279,   461,   554,    90,    91,    92,    93,    94,    95,
      96,   497,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   492,   530,   191,     2,     0,
     383,   384,   385,   386,     0,     0,     0,     0,     0,     0,
     387,     0,     0,     0,     0,     0,     0,     3,     0,     0,
       0,     0,   352,     0,     0,     4,     0,     0,   388,   389,
       0,     0,     0,     0,   390,     0,     0,     0,     0,     0,
       0,     0,     0,   236,     0,   391,     0,     0,     0,     0,
       0,     0,   392,     0,     5,   393,     0,     0,     0,     0,
       0,     0,     0,     0,   503,     0,     0,     0,     0,     0,
       0,     0,   445,   446,     0,     0,   394,   395,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   396,   397,     0,     0,     0,
     398,   399,   400,     0,     0,     0,     0,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     8,    93,    94,    95,    96,   401,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
       0,    80,   402,   223,   403,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,   404,     0,   405,   406,   407,   408,   409,     0,
     293,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   410,   411,     0,     0,     0,
       0,     0,     0,   412,    90,    91,    92,    93,    94,    95,
      96,     0,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,    90,    91,    92,    93,    94,
      95,    96,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    90,    91,    92,    93,
      94,    95,    96,     0,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    90,    91,    92,
      93,    94,    95,    96,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,     0,     0,
       0,     0,     0,     0,     0,    89,   295,   493,     0,     0,
       0,     0,    90,    91,    92,    93,    94,    95,    96,   292,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,     0,     0,     0,     0,     0,     0,     0,
     349,   110,    90,    91,    92,    93,    94,    95,    96,   494,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,     0,     0,     0,     0,     0,     0,   244,
      90,    91,    92,    93,    94,    95,    96,     0,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    91,    92,    93,    94,    95,    96,     0,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    92,    93,    94,    95,    96,     0,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
    -209,  -209,  -209,  -209,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-315)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-209)))

static const yytype_int16 yycheck[] =
{
       7,   219,     3,     4,     5,     6,     7,     8,     3,     3,
       3,     3,     3,   112,   324,     3,    17,    18,    20,   102,
      83,    20,   125,     6,    25,    32,    33,    34,   112,    36,
      37,   102,     6,    34,   119,    18,   100,    38,     3,    92,
     185,    94,    92,    44,    94,   154,   154,   219,   112,   203,
      51,    39,   203,   232,   202,   130,   185,   120,   232,   373,
       8,    84,    85,    64,    65,    66,   238,   153,    75,     0,
     185,   250,   112,    80,    39,   174,   250,    84,   112,    86,
      87,    88,   246,    90,    91,    92,    93,    94,   247,   248,
     174,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   166,   179,   250,   113,   114,   115,   419,
     264,   174,    10,    11,    12,    13,    14,    15,    16,   248,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   248,   174,   449,   143,   223,   145,     3,
     174,   250,   250,   166,   317,   248,   153,   246,     3,     4,
       5,     6,     7,     8,   182,   218,     6,   220,   222,     9,
     167,   168,    17,    18,   248,   250,   320,   250,   151,   323,
      25,     3,     4,     5,     6,     7,     8,   151,   231,   250,
     243,   231,   245,   246,   247,    17,    18,   188,   182,    44,
     202,   364,    47,    25,    26,     9,    51,     9,   221,   227,
      53,   223,    55,   210,   102,   515,   246,     3,    20,    64,
      65,    66,    44,   247,   248,   234,   223,   224,     3,    51,
     243,   248,   229,   416,   417,   187,    13,    14,   250,    16,
     112,   250,    64,    65,    66,   114,   250,   244,   120,   240,
     241,   242,   243,   244,   245,   247,   125,   248,   247,   131,
     248,   213,   248,   248,   248,   248,   248,   248,   248,   247,
       3,     4,     5,     6,     7,     8,   459,   249,   250,   332,
     249,   250,   295,   128,    17,    18,     3,     4,     5,     6,
       7,     8,    25,   501,   260,   261,   293,   312,   313,   296,
      17,    18,   248,   486,   487,   248,   258,   490,    25,    26,
     400,    44,   249,   250,   404,   247,   102,   314,    51,   409,
     285,   286,     3,   288,   321,   277,   112,    44,   103,    80,
       3,    64,    65,    66,    51,     3,   333,   334,     3,   114,
     212,     3,   339,   182,   341,   249,   250,    64,    65,    66,
     125,   474,   248,   476,   351,   141,   107,   480,     3,   482,
      39,   112,   250,   249,   250,   362,   363,     3,   213,     3,
       4,     5,     6,     7,     8,   340,   559,   134,   135,   376,
     166,     3,   347,    17,    18,   249,   250,    26,   163,   248,
     141,    25,   249,   250,   249,   240,   241,   242,   243,   244,
     245,   249,   250,   249,   587,    26,    27,    28,    29,    30,
      44,     3,     4,     5,     6,     7,     8,    51,   240,   241,
     242,   243,   244,   245,    18,    17,    18,    30,   249,   250,
      64,    65,    66,    25,     3,     4,     5,     6,     7,     8,
     249,   223,     4,     5,     6,     7,   249,    41,    17,    18,
     232,   574,    44,   576,   249,   578,    25,   454,   455,    51,
     249,   250,     3,    57,   248,   247,   249,   250,   250,   249,
     250,   249,    64,    65,    66,    44,   249,   250,   249,   250,
     249,   250,    51,   249,   250,    79,   248,    79,    24,    25,
      26,    27,    28,    29,    30,    64,    65,    66,   231,   496,
     497,   248,   499,   500,   248,   502,    63,   240,   241,   242,
     243,   244,   245,   249,   250,     3,     4,     5,     6,     7,
       8,   249,   250,   240,   241,   242,   243,   244,   245,    17,
      18,   125,    80,   249,   250,   452,   453,    25,     3,     4,
       5,     6,     7,     8,     3,   124,   160,     3,   182,   158,
       3,   227,    17,    18,     3,   121,    44,   151,   115,   107,
      25,   249,   249,    51,   112,   249,   105,   124,   565,   163,
     125,    80,   125,   130,   122,   125,    64,    65,    66,    44,
       3,     4,     5,     6,     7,     8,    51,   124,   153,   124,
       3,    79,   149,   141,    17,    18,    48,   131,   107,    64,
      65,    66,    25,   112,   248,    20,   240,   241,   242,   243,
     244,   245,   154,   122,    79,    48,   249,   249,   249,   249,
     249,    44,   179,   217,   249,   249,   467,   468,    51,   470,
     471,   472,   141,   106,   475,    99,   477,     3,   479,     3,
     481,    64,    65,    66,   201,   125,   248,   248,   240,   241,
     242,   243,   244,   245,     3,   125,    79,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     3,
     124,   240,   241,   242,   243,   244,   245,    10,    11,    12,
      13,    14,    15,    16,   248,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,   249,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,   248,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   248,   240,   241,   242,   243,   244,   245,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    20,   248,
     248,   248,    44,   248,   248,   240,   241,   242,   243,   244,
     245,    10,    11,    12,    13,    14,    15,    16,   248,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   248,   248,   248,   220,    20,   250,   240,   241,   242,
     243,   244,   245,    10,    11,    12,    13,    14,    15,    16,
     248,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,     3,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,     3,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,     5,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,     4,   122,     5,
       5,   180,    99,   384,   385,    20,   387,   250,   249,   390,
     391,   249,   393,   394,   395,   151,     4,   125,   399,   250,
     401,     3,   403,   250,     5,   185,     4,   408,   250,    23,
      24,    25,    26,    27,    28,    29,    30,     4,   249,    73,
      74,    75,    76,     4,    81,   234,    25,   362,   113,   250,
      10,    11,    12,    13,    14,    15,    16,   550,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,   197,   380,   273,   108,   109,   110,    10,    11,    12,
      13,    14,    15,    16,   310,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    32,   287,
      59,   214,   381,   500,    10,    11,    12,    13,    14,    15,
      16,   250,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   420,   478,   116,    62,    -1,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,   249,    -1,    -1,    89,    -1,    -1,    71,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   249,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    -1,   118,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   249,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   236,   237,    -1,    -1,   119,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138,   139,    -1,    -1,    -1,
     143,   144,   145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,
      -1,   185,    13,    14,    15,    16,   169,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,   231,   185,   206,   187,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,    -1,
      -1,    -1,   205,    -1,   207,   208,   209,   210,   211,    -1,
     206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   228,   229,    -1,    -1,    -1,
      -1,    -1,    -1,   236,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,   102,    40,    -1,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    94,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    39,    10,    11,    12,    13,    14,    15,    16,    82,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    12,    13,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      13,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    32,    62,    81,    89,   118,   174,   182,   185,   220,
     252,   259,   260,   291,   295,   302,   303,   306,   307,   320,
     203,   308,   292,   202,   297,   297,     3,     4,     5,     6,
       7,     8,    17,    18,    25,    26,    44,    51,    64,    65,
      66,   240,   241,   242,   243,   244,   245,   253,   273,   274,
       8,   321,   322,   297,   304,     0,   246,   202,     3,   102,
     112,   141,   166,   293,     3,    80,   107,   112,   122,   141,
     270,   122,   270,   247,   248,     9,   253,   253,   253,   253,
     231,   253,   258,   248,   248,   248,   248,   248,   248,     3,
      10,    11,    12,    13,    14,    15,    16,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      39,   275,   102,   250,     9,    20,   250,   112,   141,     3,
     248,   276,   277,   278,   280,   290,   265,   247,   294,     3,
     293,   102,   250,     3,     3,     3,     3,   253,   254,   255,
     253,   253,   258,    92,    94,   231,   260,   253,   254,    47,
     128,   213,   254,   256,   253,   253,    26,   253,   253,   253,
     253,   253,   253,     6,    18,   151,   248,    13,    14,    16,
     253,    34,    38,   188,   248,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,     3,   276,   274,   253,
     253,   322,   247,   275,   260,   276,   185,   250,    63,   115,
     130,   149,   179,   201,   281,   283,    39,   279,     3,    26,
     232,   261,   223,   276,     3,   248,   298,   185,   298,   185,
     298,   250,   249,   206,    92,    94,   253,   253,   249,   102,
     249,   249,   253,   250,   250,   249,   249,     6,   151,   254,
     260,   253,   253,   248,    37,   248,   248,   248,   260,   261,
       3,   100,   112,   222,   287,   249,   249,     3,   305,   277,
     130,   179,   284,   278,   124,   160,   282,     3,   112,   174,
     247,   248,   318,   319,   253,   158,   268,   276,   261,   294,
       3,   272,   227,     3,   301,   260,   301,   227,   260,   254,
     253,   253,    94,   206,   253,   102,   121,   257,   257,   249,
     249,   254,   260,   253,   260,   260,   260,   249,   105,   262,
     275,   125,   125,   125,    20,   247,   250,   261,   282,   282,
     124,   153,   278,   124,     3,     3,   103,   114,   125,   163,
     309,   310,   279,    48,   131,   269,   261,   249,   250,   248,
     299,    20,   154,   250,   296,   296,   296,   299,   296,    94,
     253,    99,   249,   254,   253,   249,   249,   249,   249,   249,
     249,   249,    48,   106,   267,   287,    99,   288,   288,   288,
     253,     3,     3,   268,   278,   253,   153,   223,   285,   286,
     278,   248,   318,    43,    44,    45,    46,    53,    71,    72,
      77,    88,    95,    98,   119,   120,   138,   139,   143,   144,
     145,   169,   185,   187,   205,   207,   208,   209,   210,   211,
     228,   229,   236,   316,   114,   125,   248,   248,   125,   249,
     250,   260,   253,   263,   253,     3,    79,   253,   300,   250,
     296,    79,   253,   125,     3,   296,   253,   249,    73,    74,
      75,    76,   108,   109,   110,   236,   237,   263,   253,   268,
     124,   248,   248,   248,    20,    20,   247,   269,   253,   248,
     286,   309,   248,   312,   312,   312,   312,   312,   312,   248,
     312,   312,   312,    44,   313,   312,   313,   312,   248,   312,
     313,   312,   313,   248,   248,   311,   248,   248,   272,   272,
     248,   318,   310,    40,    82,   264,   250,   250,   249,   250,
     248,   220,    20,   249,   234,   266,   269,     3,   289,   289,
     289,   253,   253,     3,   272,   249,     5,   314,   315,   314,
     314,     4,   317,   314,   314,   314,   315,   314,   315,   314,
     317,   314,   315,   314,   315,     5,     5,    18,    41,    57,
      79,   125,   151,   163,   217,   272,   272,   249,   249,   272,
     253,   253,    79,   253,   300,   301,    79,   253,   180,   122,
     271,   249,   250,   249,   249,    20,   249,   318,   249,   250,
     219,   238,    53,    55,   249,   250,   249,   249,   249,   151,
       4,     4,     5,     6,     7,   125,   125,   248,   249,   249,
     249,   264,   249,   272,     3,   253,     5,   185,     4,   315,
       4,   315,   315,   272,   249,     4,   249
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 3:
/* Line 1792 of yacc.c  */
#line 331 "pmysql.y"
    { return 0; }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 332 "pmysql.y"
    {sdb::Interpreter::continueWork = false;
          return 0; }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 338 "pmysql.y"
    { handle(new Name(std::string((yyvsp[(1) - (1)].strval)))); free((yyvsp[(1) - (1)].strval)); }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 339 "pmysql.y"
    {
     handle(new Text(std::string("FIELDNAME ") + std::string((yyvsp[(1) - (3)].strval)) + std::string((yyvsp[(3) - (3)].strval))));
     free((yyvsp[(1) - (3)].strval));
     free((yyvsp[(3) - (3)].strval));
     beta("fieldname");
    }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 345 "pmysql.y"
    { free((yyvsp[(1) - (1)].strval)); beta("USERVAR"); }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 346 "pmysql.y"
    {
        std::string string((yyvsp[(1) - (1)].strval));
        string = string.substr(1, string.end() - string.begin() - 2);
        handle(new Text(string));
        free((yyvsp[(1) - (1)].strval));
    }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 352 "pmysql.y"
    { handle(new Integer((yyvsp[(1) - (1)].intval))); }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 353 "pmysql.y"
    { handle(new Float64((yyvsp[(1) - (1)].floatval))); }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 354 "pmysql.y"
    { beta("BOOL"); }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 357 "pmysql.y"
    { beta("plus"); handle(new SumOperation(stk)); }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 358 "pmysql.y"
    { beta("minus"); handle(new SubOperation(stk)); }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 359 "pmysql.y"
    { beta("mul"); handle(new MulOperation(stk)); }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 360 "pmysql.y"
    { beta("div"); handle(new DivOperation(stk)); }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 361 "pmysql.y"
    { beta("MOD"); }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 362 "pmysql.y"
    { beta("MOD"); }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 363 "pmysql.y"
    { beta("negation"); }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 364 "pmysql.y"
    { beta("and"); }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 365 "pmysql.y"
    { beta("OR"); }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 366 "pmysql.y"
    { beta("XOR"); }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 367 "pmysql.y"
    { beta("BITOR"); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 368 "pmysql.y"
    { beta("BITAND"); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 369 "pmysql.y"
    { beta("BITXOR"); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 370 "pmysql.y"
    { beta("SHIFT"); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 371 "pmysql.y"
    { beta("NOT"); }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 372 "pmysql.y"
    { beta("NOT"); }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 373 "pmysql.y"
    { handle(new ComparisonOperation(stk, (yyvsp[(2) - (3)].subtok))); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 376 "pmysql.y"
    { beta("CMPSELECT"); }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 377 "pmysql.y"
    { beta("CMPANYSELECT"); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 378 "pmysql.y"
    { beta("CMPANYSELECT"); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 379 "pmysql.y"
    { beta("CMPALLSELECT"); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 382 "pmysql.y"
    { beta("ISNULL"); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 383 "pmysql.y"
    { beta("ISNULL"); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 384 "pmysql.y"
    { beta("ISBOOL"); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 385 "pmysql.y"
    { beta("ISBOOL"); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 387 "pmysql.y"
    { free((yyvsp[(1) - (3)].strval)); beta("ASSIGN"); }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 390 "pmysql.y"
    { beta("BETWEEN"); }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 393 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 394 "pmysql.y"
    { (yyval.intval) = 1 + (yyvsp[(3) - (3)].intval); }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 397 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 401 "pmysql.y"
    { beta("ISIN"); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 402 "pmysql.y"
    { beta("ISIN"); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 403 "pmysql.y"
    { beta("CMPANYSELECT 4"); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 404 "pmysql.y"
    { beta("CMPALLSELECT 3"); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 405 "pmysql.y"
    { beta("EXISTSSELECT"); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 409 "pmysql.y"
    { free((yyvsp[(1) - (4)].strval)); beta("CALL"); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 413 "pmysql.y"
    { beta("COUNTALL"); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 414 "pmysql.y"
    { beta(" CALL 1 COUNT"); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 416 "pmysql.y"
    {  beta("CALL SUBSTR"); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 417 "pmysql.y"
    {  beta("CALL 2 SUBSTR"); }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 418 "pmysql.y"
    {  beta("CALL 3 SUBSTR"); }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 420 "pmysql.y"
    { beta("CALLTRIM"); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 421 "pmysql.y"
    { beta("CALL 3 TRIM"); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 424 "pmysql.y"
    { beta("NUMBER 1"); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 425 "pmysql.y"
    { beta("NUMBER 2"); }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 426 "pmysql.y"
    { beta("NUMBER 3"); }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 429 "pmysql.y"
    { beta("CALL 3 DATE_ADD"); }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 430 "pmysql.y"
    { beta("CALL 3 DATE_SUB"); }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 433 "pmysql.y"
    { beta("NUMBER 1"); }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 434 "pmysql.y"
    { beta("NUMBER 2"); }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 435 "pmysql.y"
    { beta("NUMBER 3"); }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 436 "pmysql.y"
    { beta("NUMBER 4"); }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 437 "pmysql.y"
    { beta("NUMBER 5"); }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 438 "pmysql.y"
    { beta("NUMBER 6"); }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 439 "pmysql.y"
    { beta("NUMBER 7"); }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 440 "pmysql.y"
    { beta("NUMBER 8"); }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 441 "pmysql.y"
    { beta("NUMBER 9"); }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 443 "pmysql.y"
    { beta("CASEVAL 0"); }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 444 "pmysql.y"
    { beta("CASEVAL 1"); }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 445 "pmysql.y"
    { beta("CASE 0"); }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 446 "pmysql.y"
    { beta("CASE 1"); }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 449 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 450 "pmysql.y"
    { (yyval.intval) = (yyvsp[(1) - (5)].intval)+1; }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 453 "pmysql.y"
    { beta("LIKE"); }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 454 "pmysql.y"
    { beta("LIKE");}
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 457 "pmysql.y"
    { beta("REGEXP"); }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 458 "pmysql.y"
    { beta("REGEXP");}
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 461 "pmysql.y"
    { beta("NOW"); }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 462 "pmysql.y"
    { beta("NOW"); }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 463 "pmysql.y"
    { beta("NOW"); }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 466 "pmysql.y"
    { beta("STRTOBIN"); }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 471 "pmysql.y"
    {}
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 481 "pmysql.y"
    { handle(new SelectOperation(stk, (yyvsp[(2) - (10)].intval), (yyvsp[(4) - (10)].intval), (yyvsp[(5) - (10)].intval) > 0)); }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 484 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 485 "pmysql.y"
    { handle(new WhereOperation(stk)); (yyval.intval) = 1; }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 489 "pmysql.y"
    { beta("GROUPBYLIST"); }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 493 "pmysql.y"
    { beta("GROUPBY");}
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 495 "pmysql.y"
    { beta("GROUPBY");}
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 498 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 499 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 500 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 503 "pmysql.y"
    {(yyval.intval) = 0;}
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 505 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 506 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 510 "pmysql.y"
    { beta("HAVING"); }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 513 "pmysql.y"
    { beta("ORDERBY"); }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 516 "pmysql.y"
    { beta("LIMIT 1"); }
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 517 "pmysql.y"
    { beta("LIMIT 2"); }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 525 "pmysql.y"
    { beta("INTO"); }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 528 "pmysql.y"
    { handle(new Name(std::string((yyvsp[(1) - (1)].strval)))); free((yyvsp[(1) - (1)].strval)); (yyval.intval) = 1; }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 529 "pmysql.y"
    {  handle(new Name(std::string((yyvsp[(3) - (3)].strval))));
    free((yyvsp[(3) - (3)].strval)); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 533 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 534 "pmysql.y"
    {(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 535 "pmysql.y"
    { (yyval.intval) = -1; }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 540 "pmysql.y"
    { free((yyvsp[(2) - (2)].strval)); beta("ALIAS"); }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 541 "pmysql.y"
    { free((yyvsp[(1) - (1)].strval)); beta("ALIAS"); }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 545 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 546 "pmysql.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 554 "pmysql.y"
    { handle(new Name(std::string((yyvsp[(1) - (3)].strval)))); free((yyvsp[(1) - (3)].strval)); }
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 555 "pmysql.y"
    { free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval));
                beta("fieldname style in Table reference");}
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 557 "pmysql.y"
    { free((yyvsp[(3) - (3)].strval)); beta("SUBQUERYAS"); }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 558 "pmysql.y"
    { beta("TABLEREFERENCES in braces"); }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 567 "pmysql.y"
    { beta("JOIN in this style"); }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 569 "pmysql.y"
    { beta("JOIN in this style"); }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 571 "pmysql.y"
    { beta("JOIN in this style"); }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 573 "pmysql.y"
    { beta("JOIN in this style"); }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 575 "pmysql.y"
    { beta("JOIN in this style"); }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 578 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 579 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 580 "pmysql.y"
    { (yyval.intval) = 2; }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 583 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 584 "pmysql.y"
    {(yyval.intval) = 4; }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 587 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 588 "pmysql.y"
    { (yyval.intval) = 2; }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 591 "pmysql.y"
    { (yyval.intval) = 1 + (yyvsp[(2) - (2)].intval); }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 592 "pmysql.y"
    { (yyval.intval) = 2 + (yyvsp[(2) - (2)].intval); }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 593 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 600 "pmysql.y"
    { beta("ONEXPR"); }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 601 "pmysql.y"
    { beta("USING"); }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 606 "pmysql.y"
    { beta("INDEXHINT"); }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 608 "pmysql.y"
    { beta("INDEXHINT"); }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 610 "pmysql.y"
    { beta("INDEXHINT"); }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 614 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 615 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 618 "pmysql.y"
    { free((yyvsp[(1) - (1)].strval)); beta("INDEX in join"); (yyval.intval) = 1; }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 619 "pmysql.y"
    { free((yyvsp[(3) - (3)].strval)); beta("INDEX in join");(yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 622 "pmysql.y"
    { beta("SUBQUERY in join"); }
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 627 "pmysql.y"
    { }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 633 "pmysql.y"
    {
         handle(new Name(std::string((yyvsp[(4) - (7)].strval))));
         handle(new DeleteOperation(stk, (yyvsp[(5) - (7)].intval) > 0, 1));
         free((yyvsp[(4) - (7)].strval)); }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 639 "pmysql.y"
    { beta("Low Priority"); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 01; }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 640 "pmysql.y"
    { beta("Quick"); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 02; }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 641 "pmysql.y"
    { beta("Ignore"); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 04; }
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 642 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 649 "pmysql.y"
    { beta("multidelete"); }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 651 "pmysql.y"
    { handle(new Name(std::string((yyvsp[(1) - (2)].strval)))); free((yyvsp[(1) - (2)].strval)); (yyval.intval) = 1; }
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 653 "pmysql.y"
    { handle(new Name(std::string((yyvsp[(3) - (4)].strval)))); free((yyvsp[(3) - (4)].strval)); (yyval.intval) = (yyvsp[(1) - (4)].intval) + 1; }
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 662 "pmysql.y"
    { beta("multidelete"); }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 667 "pmysql.y"
    { }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 673 "pmysql.y"
    {
         // push on stack name of table
         handle(new Name(std::string((yyvsp[(4) - (8)].strval))));
         handle(new InsertOperation(stk, (yyvsp[(7) - (8)].intval)));
         free((yyvsp[(4) - (8)].strval));
     }
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 682 "pmysql.y"
    { beta("update"); }
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 685 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 686 "pmysql.y"
    { beta("insert options"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 687 "pmysql.y"
    { beta("insert options"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 02 ; }
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 688 "pmysql.y"
    { beta("insert options"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 04 ; }
    break;

  case 176:
/* Line 1792 of yacc.c  */
#line 689 "pmysql.y"
    { beta("insert options"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; }
    break;

  case 177:
/* Line 1792 of yacc.c  */
#line 693 "pmysql.y"
    { handle(new Integer(0)); }
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 694 "pmysql.y"
    { handle(new Integer((yyvsp[(2) - (3)].intval))); }
    break;

  case 179:
/* Line 1792 of yacc.c  */
#line 697 "pmysql.y"
    { handle(new Integer((yyvsp[(2) - (3)].intval))); (yyval.intval) = 1; }
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 698 "pmysql.y"
    {handle(new Integer((yyvsp[(4) - (5)].intval))); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; }
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 701 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 702 "pmysql.y"
    { beta("DEFAULT"); (yyval.intval) = 1; }
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 703 "pmysql.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 704 "pmysql.y"
    { beta("DEFAULT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 709 "pmysql.y"
    { free((yyvsp[(4) - (7)].strval)); beta("INSERTASGN"); }
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 714 "pmysql.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
        free((yyvsp[(1) - (3)].strval)); beta("ASSIGN"); (yyval.intval) = 1; }
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 717 "pmysql.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
                 free((yyvsp[(1) - (3)].strval)); beta("DEFAULT"); beta("ASSIGN"); (yyval.intval) = 1; }
    break;

  case 188:
/* Line 1792 of yacc.c  */
#line 720 "pmysql.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; }
                 free((yyvsp[(3) - (5)].strval)); beta("ASSIGN"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; }
    break;

  case 189:
/* Line 1792 of yacc.c  */
#line 723 "pmysql.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[(1) - (5)].intval)); YYERROR; }
                 free((yyvsp[(3) - (5)].strval)); beta("DEFAULT"); beta("ASSIGN"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; }
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 729 "pmysql.y"
    { free((yyvsp[(4) - (7)].strval)); beta("INSERTSELECT"); }
    break;

  case 191:
/* Line 1792 of yacc.c  */
#line 733 "pmysql.y"
    { }
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 739 "pmysql.y"
    {free((yyvsp[(4) - (8)].strval)); beta("REPLACE");}
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 745 "pmysql.y"
    { beta("REPLACE"); }
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 750 "pmysql.y"
    { free((yyvsp[(4) - (7)].strval)); beta("REPLACE");}
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 754 "pmysql.y"
    { }
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 761 "pmysql.y"
    { beta("UPDATE"); }
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 764 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 765 "pmysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 01 ; }
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 766 "pmysql.y"
    { (yyval.intval) = (yyvsp[(1) - (2)].intval) | 010 ; }
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 771 "pmysql.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[(1) - (3)].strval)); YYERROR; }
	  free((yyvsp[(1) - (3)].strval)); beta("ASSIGN"); }
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 774 "pmysql.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[(1) - (5)].strval)); YYERROR; }
	 free((yyvsp[(1) - (5)].strval)); free((yyvsp[(3) - (5)].strval)); beta("ASSIGN"); }
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 777 "pmysql.y"
    { if ((yyvsp[(4) - (5)].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[(3) - (5)].strval)); YYERROR; }
	 free((yyvsp[(3) - (5)].strval)); beta("ASSIGN");}
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 780 "pmysql.y"
    { if ((yyvsp[(6) - (7)].subtok) != 4) { yyerror("bad update  assignment to %s.$s", (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].strval)); 
          YYERROR; }
         free((yyvsp[(3) - (7)].strval)); free((yyvsp[(5) - (7)].strval)); beta("ASSIGN"); }
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 786 "pmysql.y"
    { }
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 789 "pmysql.y"
    { handle(new Name((yyvsp[(3) - (3)].strval)));
                         handle(new DropOperation(stk));
                         free((yyvsp[(3) - (3)].strval)); }
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 795 "pmysql.y"
    {}
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 799 "pmysql.y"
    {
         handle(new Integer((yyvsp[(7) - (8)].intval))); // push count of columns
         handle(new Name(std::string((yyvsp[(5) - (8)].strval)))); // push name of table
         handle(new CreateOperation(stk)); free((yyvsp[(5) - (8)].strval));
       }
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 807 "pmysql.y"
    { free((yyvsp[(5) - (10)].strval)); free((yyvsp[(7) - (10)].strval)); beta("CREATE with name.name style"); }
    break;

  case 209:
/* Line 1792 of yacc.c  */
#line 812 "pmysql.y"
    { free((yyvsp[(5) - (9)].strval)); beta("CREATESELECT");}
    break;

  case 210:
/* Line 1792 of yacc.c  */
#line 816 "pmysql.y"
    { free((yyvsp[(5) - (6)].strval)); beta("CREATESELECT");}
    break;

  case 211:
/* Line 1792 of yacc.c  */
#line 821 "pmysql.y"
    { free((yyvsp[(7) - (11)].strval)); free((yyvsp[(5) - (11)].strval)); beta("CREATESELECT"); }
    break;

  case 212:
/* Line 1792 of yacc.c  */
#line 825 "pmysql.y"
    { free((yyvsp[(7) - (8)].strval)); free((yyvsp[(5) - (8)].strval)); beta("CREATESELECT"); }
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 828 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 214:
/* Line 1792 of yacc.c  */
#line 829 "pmysql.y"
    { beta("TEMPORARY"); (yyval.intval) = 1;}
    break;

  case 215:
/* Line 1792 of yacc.c  */
#line 832 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 216:
/* Line 1792 of yacc.c  */
#line 833 "pmysql.y"
    { (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 836 "pmysql.y"
    { beta("PRIKEY"); }
    break;

  case 218:
/* Line 1792 of yacc.c  */
#line 837 "pmysql.y"
    { beta("KEY"); }
    break;

  case 219:
/* Line 1792 of yacc.c  */
#line 838 "pmysql.y"
    { beta("KEY"); }
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 839 "pmysql.y"
    { beta("TEXTINDEX"); }
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 840 "pmysql.y"
    { beta("TEXTINDEX"); }
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 844 "pmysql.y"
    {
                     handle(new Integer((yyvsp[(2) - (3)].intval)));
                     handle(new Name(std::string((yyvsp[(1) - (3)].strval))));
                     free((yyvsp[(1) - (3)].strval));
                   }
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 850 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 851 "pmysql.y"
    { beta("ATTR NOTNULL"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 854 "pmysql.y"
    { free((yyvsp[(3) - (3)].strval)); beta("ATTR DEFAULT STRING"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 856 "pmysql.y"
    { beta("ATTR DEFAULT NUMBER"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 858 "pmysql.y"
    { beta("ATTR DEFAULT FLOAT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 860 "pmysql.y"
    { beta("ATTR DEFAULT BOOL"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 862 "pmysql.y"
    { beta("ATTR AUTOINC"); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; }
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 864 "pmysql.y"
    { beta("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[(1) - (5)].intval) + 1; }
    break;

  case 232:
/* Line 1792 of yacc.c  */
#line 865 "pmysql.y"
    { beta("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 233:
/* Line 1792 of yacc.c  */
#line 866 "pmysql.y"
    { beta("ATTR PRIKEY"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 867 "pmysql.y"
    { beta("ATTR PRIKEY"); (yyval.intval) = (yyvsp[(1) - (2)].intval) + 1; }
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 869 "pmysql.y"
    { free((yyvsp[(3) - (3)].strval)); beta("ATTR COMMENT"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 872 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 873 "pmysql.y"
    { beta("length of field"); (yyval.intval) = (yyvsp[(2) - (3)].intval); }
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 874 "pmysql.y"
    { beta("length of field"); (yyval.intval) = (yyvsp[(2) - (5)].intval) + 1000*(yyvsp[(4) - (5)].intval); }
    break;

  case 239:
/* Line 1792 of yacc.c  */
#line 877 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 240:
/* Line 1792 of yacc.c  */
#line 878 "pmysql.y"
    { beta("BINARY"); (yyval.intval) = 4000; }
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 881 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 882 "pmysql.y"
    { beta("unsigned"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 1000; }
    break;

  case 243:
/* Line 1792 of yacc.c  */
#line 883 "pmysql.y"
    { beta("zerofill"); (yyval.intval) = (yyvsp[(1) - (2)].intval) | 2000; }
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 887 "pmysql.y"
    { free((yyvsp[(4) - (4)].strval)); beta("COLCHARSET"); }
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 888 "pmysql.y"
    { free((yyvsp[(3) - (3)].strval)); beta("COLCOLLATE"); }
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 892 "pmysql.y"
    { beta("BIT"); (yyval.intval) = 10000 + (yyvsp[(2) - (2)].intval); }
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 893 "pmysql.y"
    { beta("TINYINT"); (yyval.intval) = 10000 + (yyvsp[(2) - (3)].intval); }
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 894 "pmysql.y"
    { beta("SMALLINT"); (yyval.intval) = 20000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 895 "pmysql.y"
    { beta("MEDIUMINT"); (yyval.intval) = 30000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 896 "pmysql.y"
    {beta("INT"); (yyval.intval) = 40000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 897 "pmysql.y"
    { (yyval.intval) = sdb::types::INTEGER; }
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 898 "pmysql.y"
    { beta("BIGINT"); (yyval.intval) = 60000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 899 "pmysql.y"
    { beta("REAL"); (yyval.intval) = 70000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 900 "pmysql.y"
    { beta("DOUBLE"); (yyval.intval) = 80000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 256:
/* Line 1792 of yacc.c  */
#line 901 "pmysql.y"
    { (yyval.intval) = sdb::types::FLOAT64; }
    break;

  case 257:
/* Line 1792 of yacc.c  */
#line 902 "pmysql.y"
    { beta("DECIMAL"); (yyval.intval) = 110000 + (yyvsp[(2) - (3)].intval) + (yyvsp[(3) - (3)].intval); }
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 903 "pmysql.y"
    { beta("DATE"); (yyval.intval) = 100001; }
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 904 "pmysql.y"
    { beta("TIME"); (yyval.intval) = 100002; }
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 905 "pmysql.y"
    { beta("TIMESTAMP"); (yyval.intval) = 100003; }
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 906 "pmysql.y"
    { beta("DATETIME"); (yyval.intval) = 100004; }
    break;

  case 262:
/* Line 1792 of yacc.c  */
#line 907 "pmysql.y"
    { beta("YEAR"); (yyval.intval) = 100005; }
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 908 "pmysql.y"
    { beta("CHAR"); (yyval.intval) = 120000 + (yyvsp[(2) - (3)].intval); }
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 909 "pmysql.y"
    { beta("VARCHAR"); (yyval.intval) = 130000 + (yyvsp[(3) - (5)].intval); }
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 910 "pmysql.y"
    { beta("BINARY"); (yyval.intval) = 140000 + (yyvsp[(2) - (2)].intval); }
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 911 "pmysql.y"
    { beta("VARBINARY"); (yyval.intval) = 150000 + (yyvsp[(3) - (4)].intval); }
    break;

  case 267:
/* Line 1792 of yacc.c  */
#line 912 "pmysql.y"
    { beta("TINYBLOB"); (yyval.intval) = 160001; }
    break;

  case 268:
/* Line 1792 of yacc.c  */
#line 913 "pmysql.y"
    { beta("BLOB"); (yyval.intval) = 160002; }
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 914 "pmysql.y"
    { beta("MEDIUMBLOB"); (yyval.intval) = 160003; }
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 915 "pmysql.y"
    { beta("LONGBLOB"); (yyval.intval) = 160004; }
    break;

  case 271:
/* Line 1792 of yacc.c  */
#line 916 "pmysql.y"
    { beta("TINYTEXT"); (yyval.intval) = 170000 + (yyvsp[(2) - (3)].intval); }
    break;

  case 272:
/* Line 1792 of yacc.c  */
#line 917 "pmysql.y"
    { (yyval.intval) = sdb::types::TEXT; }
    break;

  case 273:
/* Line 1792 of yacc.c  */
#line 918 "pmysql.y"
    { beta("MEDIUMTEXT"); (yyval.intval) = 172000 + (yyvsp[(2) - (3)].intval); }
    break;

  case 274:
/* Line 1792 of yacc.c  */
#line 919 "pmysql.y"
    { beta("LONGTEXT"); (yyval.intval) = 173000 + (yyvsp[(2) - (3)].intval); }
    break;

  case 275:
/* Line 1792 of yacc.c  */
#line 920 "pmysql.y"
    { beta("ENUM"); (yyval.intval) = 200000 + (yyvsp[(3) - (5)].intval); }
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 921 "pmysql.y"
    { beta("SET"); (yyval.intval) = 210000 + (yyvsp[(3) - (5)].intval); }
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 924 "pmysql.y"
    { free((yyvsp[(1) - (1)].strval)); beta("ENUM"); (yyval.intval) = 1; }
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 925 "pmysql.y"
    { free((yyvsp[(3) - (3)].strval)); beta("ENUM"); (yyval.intval) = (yyvsp[(1) - (3)].intval) + 1; }
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 928 "pmysql.y"
    { beta("CREATESELECT"); }
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 931 "pmysql.y"
    { (yyval.intval) = 0; }
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 932 "pmysql.y"
    { (yyval.intval) = 1; }
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 933 "pmysql.y"
    { (yyval.intval) = 2; }
    break;

  case 283:
/* Line 1792 of yacc.c  */
#line 938 "pmysql.y"
    {}
    break;

  case 287:
/* Line 1792 of yacc.c  */
#line 946 "pmysql.y"
    { if ((yyvsp[(2) - (3)].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[(1) - (3)].strval)); YYERROR; }
                 free((yyvsp[(1) - (3)].strval)); beta("SET");}
    break;

  case 288:
/* Line 1792 of yacc.c  */
#line 948 "pmysql.y"
    { free((yyvsp[(1) - (3)].strval)); beta("SET"); }
    break;


/* Line 1792 of yacc.c  */
#line 4023 "pmysql.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



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
		      yytoken, &yylval);
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
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


/* Line 2055 of yacc.c  */
#line 951 "pmysql.y"

void
emit(std::shared_ptr<Any> ptr)
{
  // std::cout << ptr->toString() << std::endl;

  sdb::Interpreter::interpreterStack.push_back(ptr);
}

void
welcomeToBeta(std::string name)
{
  std::cout << "sorry, but " << name
            << " does not implemented in this version" << std::endl;
} 


//int main(int ac, char **av)
//{
//  extern FILE *yyin;

//  yyin = stdin;

//  while(yyparse())
//  {
//    yyparse();
//  }

//  return 0;
//} /* main */

/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 9 "pmysql.y" /* yacc.c:339  */

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

extern void yyerror(char *s, ...);
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

#line 115 "pmysql.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NAME = 258,
    STRING = 259,
    INTNUM = 260,
    BOOL = 261,
    APPROXNUM = 262,
    USERVAR = 263,
    ASSIGN = 264,
    OR = 265,
    XOR = 266,
    ANDOP = 267,
    IN = 268,
    IS = 269,
    LIKE = 270,
    REGEXP = 271,
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
    BLOB = 292,
    BOTH = 293,
    BY = 294,
    CALL = 295,
    CASCADE = 296,
    CASE = 297,
    CHANGE = 298,
    CHAR = 299,
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
    DATE = 317,
    DATETIME = 318,
    DAY_HOUR = 319,
    DAY_MICROSECOND = 320,
    DAY_MINUTE = 321,
    DAY_SECOND = 322,
    DECIMAL = 323,
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
    DOUBLE = 334,
    DROP = 335,
    DUAL = 336,
    EACH = 337,
    ELSE = 338,
    ELSEIF = 339,
    END = 340,
    ENUM = 341,
    EXPLAIN = 342,
    FETCH = 343,
    FLOAT = 344,
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
    INT = 365,
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
    LONG = 383,
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 58 "pmysql.y" /* yacc.c:355  */

        int intval;
        double floatval;
        char *strval;
        int subtok;

#line 399 "pmysql.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PMYSQL_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 416 "pmysql.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  55
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1445

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  251
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  72
/* YYNRULES -- Number of rules.  */
#define YYNRULES  288
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  607

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   491

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    18,     2,     2,     2,    28,    22,     2,
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
      15,    16,    17,    19,    20,    23,    29,    31,    32,    33,
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   330,   330,   331,   332,   338,   339,   345,   346,   351,
     352,   353,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   375,
     376,   377,   378,   381,   382,   383,   384,   386,   389,   392,
     393,   396,   397,   400,   401,   402,   403,   404,   408,   412,
     413,   415,   416,   417,   419,   420,   423,   424,   425,   428,
     429,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     442,   443,   444,   445,   448,   449,   452,   453,   456,   457,
     460,   461,   462,   465,   470,   477,   483,   484,   486,   487,
     491,   493,   497,   498,   499,   502,   504,   505,   508,   509,
     511,   512,   515,   515,   516,   519,   520,   523,   524,   527,
     528,   532,   533,   534,   537,   539,   540,   541,   544,   545,
     548,   549,   553,   554,   556,   557,   560,   561,   565,   567,
     569,   571,   573,   577,   578,   579,   582,   583,   586,   587,
     590,   591,   592,   595,   596,   599,   600,   604,   606,   608,
     610,   613,   614,   617,   618,   621,   626,   630,   638,   639,
     640,   641,   645,   650,   651,   655,   655,   658,   666,   669,
     680,   681,   684,   685,   686,   687,   688,   692,   693,   696,
     697,   700,   701,   702,   703,   705,   712,   715,   718,   721,
     726,   732,   735,   741,   747,   753,   756,   763,   764,   765,
     769,   772,   775,   778,   785,   788,   794,   797,   805,   809,
     814,   818,   823,   827,   828,   831,   832,   835,   836,   837,
     838,   839,   842,   849,   850,   851,   852,   854,   856,   858,
     860,   862,   864,   865,   866,   867,   871,   872,   873,   876,
     877,   880,   881,   882,   885,   886,   887,   891,   892,   893,
     894,   895,   896,   897,   898,   899,   900,   901,   902,   903,
     904,   905,   906,   907,   908,   909,   910,   911,   912,   913,
     914,   915,   916,   917,   918,   919,   920,   923,   924,   927,
     930,   931,   932,   937,   940,   942,   942,   945,   947
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "USERVAR", "ASSIGN", "OR", "XOR", "ANDOP", "IN", "IS",
  "LIKE", "REGEXP", "NOT", "'!'", "BETWEEN", "COMPARISON", "'|'", "'&'",
  "SHIFT", "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'", "UMINUS",
  "EXIT", "ADD", "ALL", "ALTER", "ANALYZE", "AND", "ANY", "AS", "ASC",
  "AUTO_INCREMENT", "BEFORE", "BIGINT", "BINARY", "BIT", "BLOB", "BOTH",
  "BY", "CALL", "CASCADE", "CASE", "CHANGE", "CHAR", "CHECK", "COLLATE",
  "COLUMN", "COMMENT", "CONDITION", "CONSTRAINT", "CONTINUE", "CONVERT",
  "CREATE", "CROSS", "CURRENT_DATE", "CURRENT_TIME", "CURRENT_TIMESTAMP",
  "CURRENT_USER", "CURSOR", "DATABASE", "DATABASES", "DATE", "DATETIME",
  "DAY_HOUR", "DAY_MICROSECOND", "DAY_MINUTE", "DAY_SECOND", "DECIMAL",
  "DECLARE", "DEFAULT", "DELAYED", "DELETE", "DESC", "DESCRIBE",
  "DETERMINISTIC", "DISTINCT", "DISTINCTROW", "DIV", "DOUBLE", "DROP",
  "DUAL", "EACH", "ELSE", "ELSEIF", "END", "ENUM", "EXPLAIN", "FETCH",
  "FLOAT", "FOR", "FORCE", "FOREIGN", "FROM", "FULLTEXT", "GRANT", "GROUP",
  "HAVING", "HIGH_PRIORITY", "HOUR_MICROSECOND", "HOUR_MINUTE",
  "HOUR_SECOND", "IF", "IGNORE", "INFILE", "INDEX", "INNER", "INOUT",
  "INSENSITIVE", "INSERT", "INT", "INTEGER", "INTERVAL", "INTO", "ITERATE",
  "JOIN", "KEY", "KEYS", "KILL", "LEADING", "LEAVE", "LEFT", "LIMIT",
  "LINES", "LOAD", "LOCALTIME", "LOCALTIMESTAMP", "LOCK", "LONG",
  "LONGBLOB", "LONGTEXT", "LOOP", "LOW_PRIORITY", "MATCH", "MEDIUMBLOB",
  "MEDIUMINT", "MEDIUMTEXT", "MINUTE_MICROSECOND", "MINUTE_SECOND",
  "MODIFIES", "NATURAL", "NO_WRITE_TO_BINLOG", "NULLX", "NUMBER", "ON",
  "ONDUPLICATE", "OPTIMIZE", "OPTION", "OPTIONALLY", "ORDER", "OUT",
  "OUTER", "OUTFILE", "PRECISION", "PRIMARY", "PROCEDURE", "PURGE",
  "QUICK", "READ", "READS", "REAL", "REFERENCES", "RELEASE", "RENAME",
  "REPEAT", "REPLACE", "REQUIRE", "RESTRICT", "RETURN", "REVOKE", "RIGHT",
  "ROLLUP", "SECOND_MICROSECOND", "SELECT", "SENSITIVE", "SEPARATOR",
  "SET", "SHOW", "SMALLINT", "SOME", "SONAME", "SPATIAL", "SPECIFIC",
  "SQL", "SQLEXCEPTION", "SQLSTATE", "SQLWARNING", "SQL_BIG_RESULT",
  "SQL_CALC_FOUND_ROWS", "SQL_SMALL_RESULT", "SSL", "STARTING",
  "STRAIGHT_JOIN", "TABLE", "TEMPORARY", "TERMINATED", "TEXT", "THEN",
  "TIME", "TIMESTAMP", "TINYBLOB", "TINYINT", "TINYTEXT", "TO", "TRAILING",
  "TRIGGER", "UNDO", "UNION", "UNIQUE", "UNLOCK", "UNSIGNED", "UPDATE",
  "USAGE", "USE", "USING", "UTC_DATE", "UTC_TIME", "UTC_TIMESTAMP",
  "VALUES", "VARBINARY", "VARCHAR", "VARYING", "WHEN", "WHERE", "WHILE",
  "WITH", "WRITE", "YEAR", "YEAR_MONTH", "ZEROFILL", "ESCAPED", "EXISTS",
  "FSUBSTRING", "FTRIM", "FDATE_ADD", "FDATE_SUB", "FCOUNT", "';'", "'.'",
  "'('", "')'", "','", "$accept", "query", "expr", "val_list",
  "opt_val_list", "trim_ltb", "interval_exp", "case_list", "stmt",
  "select_stmt", "opt_where", "opt_groupby", "groupby_list",
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
  "opt_ignore_replace", "set_stmt", "set_list", "set_expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    33,   273,
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

#define YYPACT_NINF -334

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-334)))

#define YYTABLE_NINF -209

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-209)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1026,  -334,  -172,  -334,  -136,  -334,  -334,   160,    62,     5,
      74,  -111,  -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,
    -334,    13,    16,   198,   187,   286,     3,  -334,  -334,  -334,
    -334,   196,   615,   615,   615,  -334,   615,   273,  -334,  -334,
    -334,   -20,     4,    14,    20,    34,    67,  1394,   -67,  -334,
      52,   -31,  -334,   327,     7,  -334,  -334,  -334,   -15,   262,
    -334,  -334,  -334,   -66,  -334,  -334,  -334,  -334,   272,  -334,
     319,  -334,   328,   330,   615,   615,   663,   663,  -334,  -334,
     615,   966,   -50,   154,   615,   107,   615,   615,   355,  -334,
     615,   615,   615,    98,    28,   615,   615,   379,   615,    -1,
     615,   615,   615,   615,   615,   615,   615,   615,   615,   615,
     354,  -334,     7,   615,   615,   615,    62,     8,    10,    12,
       6,  -116,   186,  -334,  -334,   346,   387,   392,  -334,    61,
     -30,     7,   394,   182,  -125,   -98,  -334,   713,  -334,   189,
    1415,   987,   -37,   615,  -334,   615,   191,   692,   194,  -334,
    -334,  -334,   203,   615,   776,   797,   205,   872,  1016,   648,
     731,   371,  -334,    40,  -334,   911,   911,   208,   615,   615,
    1364,   210,   219,   221,   154,   747,  1139,   601,   628,   276,
     276,   454,   454,   454,   454,  -334,  -334,  -146,  -334,  1415,
    1415,  -334,   485,    44,   242,    38,   491,     7,  -334,  -334,
    -334,   -74,  -334,     7,   372,   339,  -334,   500,   -41,  -334,
     615,   347,     7,  -146,   -15,   503,   281,   506,   154,   506,
     -29,   615,  -334,   615,   615,  -334,  1288,  1050,  -334,   615,
    -334,  -334,  1267,   389,   389,  -334,  -334,   263,   270,  -334,
    -334,   371,   911,   911,   615,   154,   154,   154,   274,   419,
     207,   386,   407,   408,  -334,  -334,  -334,    -2,   -42,   186,
     339,   339,   410,   378,     7,  -334,   412,  -334,  -334,  -334,
     534,    17,  -334,   346,  1415,   490,   417,  -146,  -334,  -334,
    -334,    46,   301,   530,  -131,   397,  -131,   301,   397,  -334,
    1415,  1309,  -334,   615,   851,   615,   615,   303,   305,  -334,
    -334,   308,   310,  1125,   311,   316,   320,  -334,   526,   469,
      44,   478,   478,   478,   615,   576,   578,   347,  -334,  -334,
       7,   615,   -78,     7,   -53,  1040,    27,   335,   336,   465,
      63,  -334,   154,   615,   615,  -334,  -334,  -334,   588,   406,
    -113,   456,   467,   590,  -334,  -334,  -334,  -113,  -334,  -334,
    1415,   615,  -334,   345,   945,  -334,  -334,  -334,  -334,  -334,
    -334,  -334,   615,   615,   347,  -334,   481,   358,   359,   360,
    1415,   589,     1,   417,  -334,  1415,   615,   362,  -334,  -334,
     -78,    17,  -334,   388,   388,   388,  -334,   388,  -334,  -334,
     388,   388,   390,   388,   388,   388,  -334,   591,  -334,   388,
     591,   388,   391,   388,   591,  -334,  -334,  -334,   388,   591,
     393,   395,  -334,  -334,   396,   446,   503,   503,   447,   -34,
      17,  -334,  1330,   384,   818,  -334,  -334,  1415,    69,   462,
    -334,  -334,  1415,   422,   617,  -334,   893,  -334,  -334,  -334,
    -334,  -334,  -334,  -334,  -334,  -334,  -334,   -16,  1415,   417,
    -334,   642,   642,   642,   615,   615,   728,  -334,  1415,   503,
    -334,    80,   744,  -334,  -334,  -334,  -334,  -334,  -334,   780,
    -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,   780,  -334,
    -334,  -334,  -334,   810,   831,    -3,   503,   503,    91,    93,
     503,  -334,  -334,  -334,  -334,  -334,   615,   615,  -334,   522,
     406,   506,   538,  -334,   605,  -334,   727,  -334,   104,   118,
     121,  1415,  1415,   830,   134,    18,   167,  -171,   183,  -171,
    -171,  -334,   176,  -171,  -171,  -171,   183,  -171,   183,  -171,
     179,  -171,   183,  -171,   183,   602,   603,   702,  -334,   850,
     266,  -334,  -334,   765,   -93,   216,   226,  -334,  -334,   228,
    1330,  1415,  -334,  1415,   230,   619,  -334,  1415,  -334,   503,
    -334,  -334,   908,  -334,  -334,   615,  -334,  -334,  -334,   924,
    -334,  -334,   758,   940,  -334,   941,  -334,  -334,  -334,  -334,
    -334,  -334,  -334,  -334,  -334,  -334,  -334,   503,  -334,  -334,
    -334,  -334,  -334,   696,  -334,  1415,   698,   944,  -334,   183,
    -334,   183,   183,   233,  -334,  -334,  -334
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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
       0,   106,     0,     0,    41,     0,    26,    27,    18,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,     0,     0,     0,     0,     0,   176,   173,   117,
       0,     0,   118,   120,   121,   127,     0,     0,   163,    86,
       0,     0,     0,   177,   177,   177,     6,    39,    42,     0,
      37,     0,     0,     0,    72,     0,     0,    39,     0,    58,
      56,    57,     0,     0,     0,     0,     0,     0,    20,    21,
      19,     0,    35,     0,    33,    76,    78,     0,     0,     0,
       0,     0,     0,     0,     0,    28,    22,    23,    25,    12,
      13,    14,    15,    16,    17,    24,   115,    86,   112,   288,
     287,   286,     0,   150,     0,     0,     0,     0,   135,   134,
     138,   142,   139,     0,     0,   136,   126,     0,   280,   166,
       0,   100,     0,    86,   165,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,    70,     0,     0,    47,     0,
      51,    54,     0,     0,     0,    49,    50,     0,     0,    36,
      34,     0,    77,    79,     0,     0,     0,     0,     0,    88,
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

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -334,  -334,    -7,   -32,  -334,  -334,   715,   870,  -334,   -71,
      87,  -334,   592,   402,  -334,  -334,  -334,  -255,  -333,   928,
    -334,  -290,  -334,   871,   -91,   -73,   808,  -121,   749,  -334,
    -334,   172,  -334,  -334,  -334,   643,   714,   174,    45,  -334,
    -334,  -334,   975,   811,  -334,   -55,   251,   367,   761,   549,
    -218,  -334,  -334,  -334,  -334,  -334,  -334,  -334,   669,   631,
    -334,   177,   -18,   -26,  -253,  -334,   574,  -302,  -334,  -334,
    -334,   943
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

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,   286,    26,    27,    28,    29,    30,    31,  -197,   119,
     119,  -199,   146,  -198,   537,    89,    32,    33,   314,    58,
     325,   455,   382,   342,    34,    76,    77,    78,   193,    79,
      81,    20,   586,   171,   162,   112,   131,   172,   538,   187,
     457,   342,   143,    36,   144,   163,   239,   195,   570,   194,
      37,   110,   148,   152,   539,   224,   260,   225,   213,   268,
     217,   114,   373,    38,    39,    40,    23,   571,   140,   196,
      50,   268,   115,   141,    55,   376,   540,   147,   268,   154,
     155,   157,   263,   158,   159,   160,   210,   219,   165,   166,
     238,   170,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   248,   197,   261,    47,   189,   190,   449,
      26,    27,    28,    29,    30,    31,   506,   491,    59,   343,
     326,   269,   541,   215,    32,    33,   488,   489,    60,   237,
     268,   327,    34,   269,   197,    56,   226,   429,   227,   277,
     269,   414,   328,   322,   251,   377,   232,   285,   542,   288,
     215,    36,   415,     7,   149,   587,   252,    61,    37,   310,
     543,   242,   243,    26,    27,    28,    29,    30,    31,   514,
     302,    38,    39,    40,   304,   305,   306,    32,    33,   164,
     329,   145,    62,   113,   132,    34,    35,   173,     7,   289,
     210,   240,   269,   212,   145,   381,   545,   546,   287,   374,
     549,    64,   380,   274,    36,    75,   270,   271,   316,   301,
      89,    37,  -207,   567,   544,    57,   290,   291,   504,   116,
     132,   526,   294,   528,    38,    39,    40,   532,    83,   534,
     345,   346,   127,   348,   496,   150,   572,   303,   573,    41,
      42,    43,    44,    45,    46,   315,   110,   174,   456,   198,
      73,    74,    84,  -197,   120,   120,  -199,    25,  -198,   192,
      53,   421,    85,   353,  -208,   129,   253,    65,    86,   593,
     581,   582,   583,   584,   249,   133,    26,    27,    28,    29,
      30,    31,    87,   555,  -165,   430,   350,   256,   197,   354,
      32,    33,   435,   210,    66,   337,   338,   603,    34,    67,
     278,   199,   105,   106,   107,   108,   109,   370,   127,    68,
    -133,  -165,   419,   420,   375,    88,   200,    36,   498,   499,
     151,   599,   134,   601,    37,   602,   422,   424,    69,   515,
     420,   135,   427,   136,   432,   201,     7,    38,    39,    40,
     547,   338,   548,   338,   436,   317,   161,    41,    42,    43,
      44,    45,    46,   561,   562,   422,   448,   186,    26,    27,
      28,    29,    30,    31,   336,   202,    65,   563,   562,   458,
     564,   562,    32,    33,    26,    27,    28,    29,    30,    31,
      34,   156,   476,   566,   338,   206,   480,   203,    32,    33,
     208,   482,   167,    66,   168,   169,    34,   214,    67,    36,
      41,    42,    43,    44,    45,    46,    37,    65,    71,    26,
      27,    28,    29,    30,    31,    36,   568,   569,   209,    38,
      39,    40,    37,    32,    33,   574,   575,    69,   576,   575,
     215,    34,   318,   319,    66,    38,    39,    40,   222,   117,
     228,   519,   520,   230,   523,   524,   525,   511,   512,   527,
      36,   529,   231,   531,   235,   533,   241,    37,   245,    26,
      27,    28,    29,    30,    31,   588,   338,   246,   118,   247,
      38,    39,    40,    32,    33,   589,   338,   590,   338,   592,
     499,    34,   606,   338,   109,   426,   368,   369,   250,   550,
     551,   255,   553,   427,   257,   557,   264,   509,   510,   265,
      36,   218,   220,   267,    80,   275,   280,    37,   282,   283,
     296,   311,   299,    41,    42,    43,    44,    45,    46,   300,
      38,    39,    40,   307,   308,    26,    27,    28,    29,    30,
      31,   321,   312,   313,   320,   431,   323,   324,   333,    32,
      33,    26,    27,    28,    29,    30,    31,    34,   334,   339,
     341,   342,   355,     7,   356,    32,    33,   357,   595,   358,
     359,   464,   465,    34,   466,   360,    36,   467,   468,   361,
     470,   471,   472,    37,   362,   363,   475,   366,   477,   371,
     479,   372,    36,   416,   417,   481,    38,    39,    40,    37,
     418,   425,   433,   434,   437,    41,    42,    43,    44,    45,
      46,   552,    38,    39,    40,   450,   451,   452,   453,   454,
     459,    41,    42,    43,    44,    45,    46,   556,    26,    27,
      28,    29,    30,    31,   102,   103,   104,   105,   106,   107,
     108,   109,    32,    33,   496,   473,   462,   502,   469,   478,
      34,   483,   501,   484,   486,   507,    41,    42,    43,    44,
      45,    46,   103,   104,   105,   106,   107,   108,   109,    36,
      92,    93,    94,    95,    96,    97,    37,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    38,
      39,    40,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   487,   490,    41,    42,    43,    44,
      45,    46,    90,    91,    92,    93,    94,    95,    96,    97,
     500,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    90,    91,    92,    93,    94,    95,    96,
      97,   513,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    93,    94,    95,    96,    97,   516,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    41,    42,    43,    44,    45,    46,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    41,    42,
      43,    44,    45,    46,   521,   558,    90,    91,    92,    93,
      94,    95,    96,    97,   229,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    90,    91,    92,
      93,    94,    95,    96,    97,   535,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    90,    91,
      92,    93,    94,    95,    96,    97,   536,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   559,
     565,   577,   578,   579,   580,    41,    42,    43,    44,    45,
      46,    90,    91,    92,    93,    94,    95,    96,    97,   343,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    90,    91,    92,    93,    94,    95,    96,    97,
     585,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    90,    91,    92,    93,    94,    95,    96,
      97,   594,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,  -209,  -209,  -209,  -209,    97,   596,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   221,   597,   598,   600,   338,   604,   605,   298,
     351,   142,   591,    72,   447,    90,    91,    92,    93,    94,
      95,    96,    97,   221,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    90,    91,    92,    93,
      94,    95,    96,    97,   188,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    90,    91,    92,
      93,    94,    95,    96,    97,   259,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   438,   439,
     440,   441,   332,   460,   365,   279,   233,    91,    92,    93,
      94,    95,    96,    97,   130,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   234,   347,   554,
     461,   492,   530,   442,   443,   444,     0,     0,     1,   191,
      90,    91,    92,    93,    94,    95,    96,    97,   497,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,     0,     0,   383,   384,   385,   386,     0,     2,     0,
       0,     0,     0,   387,     0,     0,     0,     0,     0,     0,
     352,     0,     0,     0,     0,     0,     0,     3,     0,     0,
       0,   388,   389,     0,     0,     4,     0,   390,     0,     0,
       0,   236,     0,     0,     0,     0,     0,     0,   391,     0,
       0,     0,     0,     0,     0,   392,     0,     0,   393,     0,
       0,     0,   503,     0,     5,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,     0,     0,     0,   394,
     395,   101,   102,   103,   104,   105,   106,   107,   108,   109,
       0,     0,     0,     0,     0,     0,     0,     0,   396,   397,
       0,   445,   446,   398,   399,   400,     0,     0,     0,     0,
       0,     0,     0,   223,     0,     0,     0,    80,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     0,     7,   401,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   402,     0,   403,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   404,     9,   405,   406,   407,
     408,   409,     0,     0,     0,     0,   293,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   410,   411,
       0,     0,     0,     0,     0,     0,   412,    90,    91,    92,
      93,    94,    95,    96,    97,     0,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    90,    91,
      92,    93,    94,    95,    96,    97,     0,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    90,
      91,    92,    93,    94,    95,    96,    97,     0,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
      90,    91,    92,    93,    94,    95,    96,    97,     0,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,     0,     0,     0,     0,     0,     0,     0,     0,   295,
     493,     0,     0,     0,    90,    91,    92,    93,    94,    95,
      96,    97,   292,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,     0,     0,    89,     0,     0,
       0,   244,     0,   349,    90,    91,    92,    93,    94,    95,
      96,    97,   494,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,    90,    91,    92,    93,    94,
      95,    96,    97,   110,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109
};

static const yytype_int16 yycheck[] =
{
       7,   219,     3,     4,     5,     6,     7,     8,     3,     3,
       3,     3,    83,     3,    17,     3,    17,    18,    20,     3,
       3,    20,   324,   154,    25,    32,    33,    34,   119,    36,
      37,   203,   125,    34,     6,   102,   102,    38,    41,   112,
     373,   154,    92,    44,    94,    17,     6,   120,   219,   120,
      51,    39,    84,    85,    57,    92,   130,    94,   131,   112,
     185,     9,   317,    64,    65,    66,   202,   238,    75,   185,
       8,   112,    20,    80,     0,   153,    79,    84,   112,    86,
      87,    88,   203,    90,    91,    92,   232,   185,    95,    96,
     161,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   174,   250,   179,   113,   114,   115,   364,
       3,     4,     5,     6,     7,     8,   449,   419,   102,   250,
     103,   174,   125,   248,    17,    18,   416,   417,   112,   161,
     112,   114,    25,   174,   250,   246,   143,   250,   145,   212,
     174,   114,   125,   264,   100,   223,   153,   218,   151,   220,
     248,    44,   125,   182,    47,   248,   112,   141,    51,   250,
     163,   168,   169,     3,     4,     5,     6,     7,     8,   459,
     241,    64,    65,    66,   245,   246,   247,    17,    18,   151,
     163,   231,   166,   250,   250,    25,    26,   188,   182,   221,
     232,   151,   174,   223,   231,   248,   486,   487,   227,   320,
     490,     3,   323,   210,    44,     9,   247,   248,   250,   241,
       3,    51,   246,   515,   217,   202,   223,   224,   234,   250,
     250,   474,   229,   476,    64,    65,    66,   480,   248,   482,
     285,   286,   247,   288,   250,   128,    53,   244,    55,   240,
     241,   242,   243,   244,   245,   247,    39,   248,   247,    63,
     247,   248,   248,   248,   248,   248,   248,     6,   248,   247,
       9,   332,   248,   295,   246,     3,   222,    80,   248,   559,
       4,     5,     6,     7,   187,     3,     3,     4,     5,     6,
       7,     8,   248,   501,   223,   340,   293,   249,   250,   296,
      17,    18,   347,   232,   107,   249,   250,   587,    25,   112,
     213,   115,    26,    27,    28,    29,    30,   314,   247,   122,
     124,   250,   249,   250,   321,   248,   130,    44,   249,   250,
     213,   574,     3,   576,    51,   578,   333,   334,   141,   249,
     250,     3,   339,     3,   341,   149,   182,    64,    65,    66,
     249,   250,   249,   250,   351,   258,   248,   240,   241,   242,
     243,   244,   245,   249,   250,   362,   363,     3,     3,     4,
       5,     6,     7,     8,   277,   179,    80,   249,   250,   376,
     249,   250,    17,    18,     3,     4,     5,     6,     7,     8,
      25,    26,   400,   249,   250,    39,   404,   201,    17,    18,
       3,   409,    13,   107,    15,    16,    25,     3,   112,    44,
     240,   241,   242,   243,   244,   245,    51,    80,   122,     3,
       4,     5,     6,     7,     8,    44,   249,   250,    26,    64,
      65,    66,    51,    17,    18,   249,   250,   141,   249,   250,
     248,    25,   260,   261,   107,    64,    65,    66,   249,   112,
     249,   467,   468,   249,   470,   471,   472,   454,   455,   475,
      44,   477,   249,   479,   249,   481,   248,    51,   248,     3,
       4,     5,     6,     7,     8,   249,   250,   248,   141,   248,
      64,    65,    66,    17,    18,   249,   250,   249,   250,   249,
     250,    25,   249,   250,    30,    79,   312,   313,     3,   496,
     497,   249,   499,   500,     3,   502,   124,   452,   453,   160,
      44,   134,   135,     3,   231,   158,     3,    51,   227,     3,
     121,   125,   249,   240,   241,   242,   243,   244,   245,   249,
      64,    65,    66,   249,   105,     3,     4,     5,     6,     7,
       8,   153,   125,   125,   124,    79,   124,     3,    48,    17,
      18,     3,     4,     5,     6,     7,     8,    25,   131,   248,
      20,   154,   249,   182,   249,    17,    18,   249,   565,   249,
     249,   384,   385,    25,   387,   249,    44,   390,   391,   249,
     393,   394,   395,    51,    48,   106,   399,    99,   401,     3,
     403,     3,    44,   248,   248,   408,    64,    65,    66,    51,
     125,     3,   125,     3,   249,   240,   241,   242,   243,   244,
     245,    79,    64,    65,    66,   124,   248,   248,   248,    20,
     248,   240,   241,   242,   243,   244,   245,    79,     3,     4,
       5,     6,     7,     8,    23,    24,    25,    26,    27,    28,
      29,    30,    17,    18,   250,    44,   248,    20,   248,   248,
      25,   248,   220,   248,   248,     3,   240,   241,   242,   243,
     244,   245,    24,    25,    26,    27,    28,    29,    30,    44,
      12,    13,    14,    15,    16,    17,    51,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    64,
      65,    66,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,   248,   248,   240,   241,   242,   243,
     244,   245,    10,    11,    12,    13,    14,    15,    16,    17,
     248,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      17,     3,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    13,    14,    15,    16,    17,     5,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   240,   241,   242,   243,   244,   245,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,   240,   241,
     242,   243,   244,   245,     4,   180,    10,    11,    12,    13,
      14,    15,    16,    17,   102,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    17,     5,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    17,     5,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   122,
      20,   249,   249,   151,     4,   240,   241,   242,   243,   244,
     245,    10,    11,    12,    13,    14,    15,    16,    17,   250,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    10,    11,    12,    13,    14,    15,    16,    17,
     125,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      17,     3,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    13,    14,    15,    16,    17,     5,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   250,   185,     4,     4,   250,   249,     4,   234,
      99,    81,   550,    25,   362,    10,    11,    12,    13,    14,
      15,    16,    17,   250,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    17,   113,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    10,    11,    12,
      13,    14,    15,    16,    17,   197,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    73,    74,
      75,    76,   273,   380,   310,   214,   250,    11,    12,    13,
      14,    15,    16,    17,    59,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   250,   287,   500,
     381,   420,   478,   108,   109,   110,    -1,    -1,    32,   116,
      10,    11,    12,    13,    14,    15,    16,    17,   250,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    43,    44,    45,    46,    -1,    62,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
     249,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    71,    72,    -1,    -1,    89,    -1,    77,    -1,    -1,
      -1,   249,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    98,    -1,
      -1,    -1,   249,    -1,   118,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,   119,
     120,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,
      -1,   236,   237,   143,   144,   145,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   206,    -1,    -1,    -1,   231,    -1,    -1,
     174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,   169,
      -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   185,    -1,   187,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   205,   220,   207,   208,   209,
     210,   211,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   228,   229,
      -1,    -1,    -1,    -1,    -1,    -1,   236,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
      40,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,    94,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,     3,    -1,    -1,
      -1,    37,    -1,    94,    10,    11,    12,    13,    14,    15,
      16,    17,    82,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    17,    39,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30
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
      10,    11,    12,    13,    14,    15,    16,    17,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      39,   275,   102,   250,     9,    20,   250,   112,   141,     3,
     248,   276,   277,   278,   280,   290,   265,   247,   294,     3,
     293,   102,   250,     3,     3,     3,     3,   253,   254,   255,
     253,   253,   258,    92,    94,   231,   260,   253,   254,    47,
     128,   213,   254,   256,   253,   253,    26,   253,   253,   253,
     253,   248,     6,    17,   151,   253,   253,    13,    15,    16,
     253,    34,    38,   188,   248,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,     3,   276,   274,   253,
     253,   322,   247,   275,   260,   276,   185,   250,    63,   115,
     130,   149,   179,   201,   281,   283,    39,   279,     3,    26,
     232,   261,   223,   276,     3,   248,   298,   185,   298,   185,
     298,   250,   249,   206,    92,    94,   253,   253,   249,   102,
     249,   249,   253,   250,   250,   249,   249,   254,   260,     6,
     151,   248,   253,   253,    37,   248,   248,   248,   260,   261,
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
     317,   314,   315,   314,   315,     5,     5,    17,    41,    57,
      79,   125,   151,   163,   217,   272,   272,   249,   249,   272,
     253,   253,    79,   253,   300,   301,    79,   253,   180,   122,
     271,   249,   250,   249,   249,    20,   249,   318,   249,   250,
     219,   238,    53,    55,   249,   250,   249,   249,   249,   151,
       4,     4,     5,     6,     7,   125,   125,   248,   249,   249,
     249,   264,   249,   272,     3,   253,     5,   185,     4,   315,
       4,   315,   315,   272,   249,     4,   249
};

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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
     '$$ = $1'.

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
#line 331 "pmysql.y" /* yacc.c:1646  */
    { return 0; }
#line 2150 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 332 "pmysql.y" /* yacc.c:1646  */
    {sdb::Interpreter::continueWork = false;
          return 0; }
#line 2157 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 338 "pmysql.y" /* yacc.c:1646  */
    { handle(new Name(std::string((yyvsp[0].strval)))); free((yyvsp[0].strval)); }
#line 2163 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 339 "pmysql.y" /* yacc.c:1646  */
    {
     handle(new Text(std::string("FIELDNAME ") + std::string((yyvsp[-2].strval)) + std::string((yyvsp[0].strval))));
     free((yyvsp[-2].strval));
     free((yyvsp[0].strval));
     beta("fieldname");
    }
#line 2174 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 345 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[0].strval)); beta("USERVAR"); }
#line 2180 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 346 "pmysql.y" /* yacc.c:1646  */
    {
        std::string string((yyvsp[0].strval));
        string = string.substr(1, string.end() - string.begin() - 2);
        handle(new Text(string)); free((yyvsp[0].strval));
    }
#line 2190 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 351 "pmysql.y" /* yacc.c:1646  */
    { handle(new Integer((yyvsp[0].intval))); }
#line 2196 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 352 "pmysql.y" /* yacc.c:1646  */
    { handle(new Float64((yyvsp[0].floatval))); }
#line 2202 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 353 "pmysql.y" /* yacc.c:1646  */
    { beta("BOOL"); }
#line 2208 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 356 "pmysql.y" /* yacc.c:1646  */
    { beta("plus"); handle(new SumOperation(stk)); }
#line 2214 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 357 "pmysql.y" /* yacc.c:1646  */
    { beta("minus"); handle(new SubOperation(stk)); }
#line 2220 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 358 "pmysql.y" /* yacc.c:1646  */
    { beta("mul"); handle(new MulOperation(stk)); }
#line 2226 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 359 "pmysql.y" /* yacc.c:1646  */
    { beta("div"); handle(new DivOperation(stk)); }
#line 2232 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 360 "pmysql.y" /* yacc.c:1646  */
    { beta("MOD"); }
#line 2238 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 361 "pmysql.y" /* yacc.c:1646  */
    { beta("MOD"); }
#line 2244 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 362 "pmysql.y" /* yacc.c:1646  */
    { beta("negation"); }
#line 2250 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 363 "pmysql.y" /* yacc.c:1646  */
    { beta("and"); }
#line 2256 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 364 "pmysql.y" /* yacc.c:1646  */
    { beta("OR"); }
#line 2262 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 365 "pmysql.y" /* yacc.c:1646  */
    { beta("XOR"); }
#line 2268 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 366 "pmysql.y" /* yacc.c:1646  */
    { beta("BITOR"); }
#line 2274 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 367 "pmysql.y" /* yacc.c:1646  */
    { beta("BITAND"); }
#line 2280 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 368 "pmysql.y" /* yacc.c:1646  */
    { beta("BITXOR"); }
#line 2286 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 369 "pmysql.y" /* yacc.c:1646  */
    { beta("SHIFT"); }
#line 2292 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 370 "pmysql.y" /* yacc.c:1646  */
    { beta("NOT"); }
#line 2298 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 371 "pmysql.y" /* yacc.c:1646  */
    { beta("NOT"); }
#line 2304 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 372 "pmysql.y" /* yacc.c:1646  */
    { handle(new ComparisonOperation(stk, (yyvsp[-1].subtok))); }
#line 2310 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 375 "pmysql.y" /* yacc.c:1646  */
    { beta("CMPSELECT"); }
#line 2316 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 376 "pmysql.y" /* yacc.c:1646  */
    { beta("CMPANYSELECT"); }
#line 2322 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 377 "pmysql.y" /* yacc.c:1646  */
    { beta("CMPANYSELECT"); }
#line 2328 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 378 "pmysql.y" /* yacc.c:1646  */
    { beta("CMPALLSELECT"); }
#line 2334 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 381 "pmysql.y" /* yacc.c:1646  */
    { beta("ISNULL"); }
#line 2340 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 382 "pmysql.y" /* yacc.c:1646  */
    { beta("ISNULL"); }
#line 2346 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 383 "pmysql.y" /* yacc.c:1646  */
    { beta("ISBOOL"); }
#line 2352 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 384 "pmysql.y" /* yacc.c:1646  */
    { beta("ISBOOL"); }
#line 2358 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 386 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[-2].strval)); beta("ASSIGN"); }
#line 2364 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 389 "pmysql.y" /* yacc.c:1646  */
    { beta("BETWEEN"); }
#line 2370 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 392 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2376 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 393 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2382 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 396 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2388 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 400 "pmysql.y" /* yacc.c:1646  */
    { beta("ISIN"); }
#line 2394 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 401 "pmysql.y" /* yacc.c:1646  */
    { beta("ISIN"); }
#line 2400 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 402 "pmysql.y" /* yacc.c:1646  */
    { beta("CMPANYSELECT 4"); }
#line 2406 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 403 "pmysql.y" /* yacc.c:1646  */
    { beta("CMPALLSELECT 3"); }
#line 2412 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 404 "pmysql.y" /* yacc.c:1646  */
    { beta("EXISTSSELECT"); }
#line 2418 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 408 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[-3].strval)); beta("CALL"); }
#line 2424 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 412 "pmysql.y" /* yacc.c:1646  */
    { beta("COUNTALL"); }
#line 2430 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 413 "pmysql.y" /* yacc.c:1646  */
    { beta(" CALL 1 COUNT"); }
#line 2436 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 415 "pmysql.y" /* yacc.c:1646  */
    {  beta("CALL SUBSTR"); }
#line 2442 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 416 "pmysql.y" /* yacc.c:1646  */
    {  beta("CALL 2 SUBSTR"); }
#line 2448 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 417 "pmysql.y" /* yacc.c:1646  */
    {  beta("CALL 3 SUBSTR"); }
#line 2454 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 419 "pmysql.y" /* yacc.c:1646  */
    { beta("CALLTRIM"); }
#line 2460 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 420 "pmysql.y" /* yacc.c:1646  */
    { beta("CALL 3 TRIM"); }
#line 2466 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 423 "pmysql.y" /* yacc.c:1646  */
    { beta("NUMBER 1"); }
#line 2472 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 424 "pmysql.y" /* yacc.c:1646  */
    { beta("NUMBER 2"); }
#line 2478 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 425 "pmysql.y" /* yacc.c:1646  */
    { beta("NUMBER 3"); }
#line 2484 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 428 "pmysql.y" /* yacc.c:1646  */
    { beta("CALL 3 DATE_ADD"); }
#line 2490 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 429 "pmysql.y" /* yacc.c:1646  */
    { beta("CALL 3 DATE_SUB"); }
#line 2496 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 432 "pmysql.y" /* yacc.c:1646  */
    { beta("NUMBER 1"); }
#line 2502 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 433 "pmysql.y" /* yacc.c:1646  */
    { beta("NUMBER 2"); }
#line 2508 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 434 "pmysql.y" /* yacc.c:1646  */
    { beta("NUMBER 3"); }
#line 2514 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 435 "pmysql.y" /* yacc.c:1646  */
    { beta("NUMBER 4"); }
#line 2520 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 436 "pmysql.y" /* yacc.c:1646  */
    { beta("NUMBER 5"); }
#line 2526 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 437 "pmysql.y" /* yacc.c:1646  */
    { beta("NUMBER 6"); }
#line 2532 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 438 "pmysql.y" /* yacc.c:1646  */
    { beta("NUMBER 7"); }
#line 2538 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 439 "pmysql.y" /* yacc.c:1646  */
    { beta("NUMBER 8"); }
#line 2544 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 440 "pmysql.y" /* yacc.c:1646  */
    { beta("NUMBER 9"); }
#line 2550 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 442 "pmysql.y" /* yacc.c:1646  */
    { beta("CASEVAL 0"); }
#line 2556 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 443 "pmysql.y" /* yacc.c:1646  */
    { beta("CASEVAL 1"); }
#line 2562 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 444 "pmysql.y" /* yacc.c:1646  */
    { beta("CASE 0"); }
#line 2568 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 445 "pmysql.y" /* yacc.c:1646  */
    { beta("CASE 1"); }
#line 2574 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 448 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2580 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 449 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-4].intval)+1; }
#line 2586 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 452 "pmysql.y" /* yacc.c:1646  */
    { beta("LIKE"); }
#line 2592 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 453 "pmysql.y" /* yacc.c:1646  */
    { beta("LIKE");}
#line 2598 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 456 "pmysql.y" /* yacc.c:1646  */
    { beta("REGEXP"); }
#line 2604 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 457 "pmysql.y" /* yacc.c:1646  */
    { beta("REGEXP");}
#line 2610 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 460 "pmysql.y" /* yacc.c:1646  */
    { beta("NOW"); }
#line 2616 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 461 "pmysql.y" /* yacc.c:1646  */
    { beta("NOW"); }
#line 2622 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 462 "pmysql.y" /* yacc.c:1646  */
    { beta("NOW"); }
#line 2628 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 465 "pmysql.y" /* yacc.c:1646  */
    { beta("STRTOBIN"); }
#line 2634 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 470 "pmysql.y" /* yacc.c:1646  */
    {}
#line 2640 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 480 "pmysql.y" /* yacc.c:1646  */
    { handle(new SelectOperation(stk, (yyvsp[-8].intval), (yyvsp[-6].intval), (yyvsp[-5].intval) > 0)); }
#line 2646 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 483 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2652 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 484 "pmysql.y" /* yacc.c:1646  */
    { handle(new WhereOperation(stk)); (yyval.intval) = 1; }
#line 2658 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 488 "pmysql.y" /* yacc.c:1646  */
    { beta("GROUPBYLIST"); }
#line 2664 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 492 "pmysql.y" /* yacc.c:1646  */
    { beta("GROUPBY");}
#line 2670 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 494 "pmysql.y" /* yacc.c:1646  */
    { beta("GROUPBY");}
#line 2676 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 497 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2682 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 498 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2688 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 499 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2694 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 502 "pmysql.y" /* yacc.c:1646  */
    {(yyval.intval) = 0;}
#line 2700 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 504 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2706 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 505 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2712 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 509 "pmysql.y" /* yacc.c:1646  */
    { beta("HAVING"); }
#line 2718 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 512 "pmysql.y" /* yacc.c:1646  */
    { beta("ORDERBY"); }
#line 2724 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 515 "pmysql.y" /* yacc.c:1646  */
    { beta("LIMIT 1"); }
#line 2730 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 516 "pmysql.y" /* yacc.c:1646  */
    { beta("LIMIT 2"); }
#line 2736 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 524 "pmysql.y" /* yacc.c:1646  */
    { beta("INTO"); }
#line 2742 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 527 "pmysql.y" /* yacc.c:1646  */
    { handle(new Name(std::string((yyvsp[0].strval)))); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2748 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 528 "pmysql.y" /* yacc.c:1646  */
    {  handle(new Name(std::string((yyvsp[0].strval))));
    free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2755 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 532 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2761 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 533 "pmysql.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2767 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 534 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = -1; }
#line 2773 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 539 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[0].strval)); beta("ALIAS"); }
#line 2779 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 540 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[0].strval)); beta("ALIAS"); }
#line 2785 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 544 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2791 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 545 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2797 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 553 "pmysql.y" /* yacc.c:1646  */
    { handle(new Name(std::string((yyvsp[-2].strval)))); free((yyvsp[-2].strval)); }
#line 2803 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 554 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[-4].strval)); free((yyvsp[-2].strval));
                beta("fieldname style in Table reference");}
#line 2810 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 556 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[0].strval)); beta("SUBQUERYAS"); }
#line 2816 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 557 "pmysql.y" /* yacc.c:1646  */
    { beta("TABLEREFERENCES in braces"); }
#line 2822 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 566 "pmysql.y" /* yacc.c:1646  */
    { beta("JOIN in this style"); }
#line 2828 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 568 "pmysql.y" /* yacc.c:1646  */
    { beta("JOIN in this style"); }
#line 2834 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 570 "pmysql.y" /* yacc.c:1646  */
    { beta("JOIN in this style"); }
#line 2840 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 572 "pmysql.y" /* yacc.c:1646  */
    { beta("JOIN in this style"); }
#line 2846 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 574 "pmysql.y" /* yacc.c:1646  */
    { beta("JOIN in this style"); }
#line 2852 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 577 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2858 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 578 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2864 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 579 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 2; }
#line 2870 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 582 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2876 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 583 "pmysql.y" /* yacc.c:1646  */
    {(yyval.intval) = 4; }
#line 2882 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 586 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2888 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 587 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 2; }
#line 2894 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 590 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2900 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 591 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 2 + (yyvsp[0].intval); }
#line 2906 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 592 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2912 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 599 "pmysql.y" /* yacc.c:1646  */
    { beta("ONEXPR"); }
#line 2918 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 600 "pmysql.y" /* yacc.c:1646  */
    { beta("USING"); }
#line 2924 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 605 "pmysql.y" /* yacc.c:1646  */
    { beta("INDEXHINT"); }
#line 2930 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 607 "pmysql.y" /* yacc.c:1646  */
    { beta("INDEXHINT"); }
#line 2936 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 609 "pmysql.y" /* yacc.c:1646  */
    { beta("INDEXHINT"); }
#line 2942 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 613 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2948 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 614 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2954 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 617 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[0].strval)); beta("INDEX in join"); (yyval.intval) = 1; }
#line 2960 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 618 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[0].strval)); beta("INDEX in join");(yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2966 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 621 "pmysql.y" /* yacc.c:1646  */
    { beta("SUBQUERY in join"); }
#line 2972 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 626 "pmysql.y" /* yacc.c:1646  */
    { }
#line 2978 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 632 "pmysql.y" /* yacc.c:1646  */
    {
         handle(new Name(std::string((yyvsp[-3].strval))));
         handle(new DeleteOperation(stk, (yyvsp[-2].intval) > 0, 1));
         free((yyvsp[-3].strval)); }
#line 2987 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 638 "pmysql.y" /* yacc.c:1646  */
    { beta("Low Priority"); (yyval.intval) = (yyvsp[-1].intval) + 01; }
#line 2993 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 639 "pmysql.y" /* yacc.c:1646  */
    { beta("Quick"); (yyval.intval) = (yyvsp[-1].intval) + 02; }
#line 2999 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 640 "pmysql.y" /* yacc.c:1646  */
    { beta("Ignore"); (yyval.intval) = (yyvsp[-1].intval) + 04; }
#line 3005 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 641 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3011 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 648 "pmysql.y" /* yacc.c:1646  */
    { beta("multidelete"); }
#line 3017 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 650 "pmysql.y" /* yacc.c:1646  */
    { handle(new Name(std::string((yyvsp[-1].strval)))); free((yyvsp[-1].strval)); (yyval.intval) = 1; }
#line 3023 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 652 "pmysql.y" /* yacc.c:1646  */
    { handle(new Name(std::string((yyvsp[-1].strval)))); free((yyvsp[-1].strval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 3029 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 661 "pmysql.y" /* yacc.c:1646  */
    { beta("multidelete"); }
#line 3035 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 666 "pmysql.y" /* yacc.c:1646  */
    { }
#line 3041 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 672 "pmysql.y" /* yacc.c:1646  */
    {
         // push on stack name of table
         handle(new Name(std::string((yyvsp[-4].strval))));
         handle(new InsertOperation(stk, (yyvsp[-1].intval)));
         free((yyvsp[-4].strval));
     }
#line 3052 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 681 "pmysql.y" /* yacc.c:1646  */
    { beta("update"); }
#line 3058 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 684 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3064 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 685 "pmysql.y" /* yacc.c:1646  */
    { beta("insert options"); (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 3070 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 686 "pmysql.y" /* yacc.c:1646  */
    { beta("insert options"); (yyval.intval) = (yyvsp[-1].intval) | 02 ; }
#line 3076 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 687 "pmysql.y" /* yacc.c:1646  */
    { beta("insert options"); (yyval.intval) = (yyvsp[-1].intval) | 04 ; }
#line 3082 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 688 "pmysql.y" /* yacc.c:1646  */
    { beta("insert options"); (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 3088 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 692 "pmysql.y" /* yacc.c:1646  */
    { handle(new Integer(0)); }
#line 3094 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 693 "pmysql.y" /* yacc.c:1646  */
    { handle(new Integer((yyvsp[-1].intval))); }
#line 3100 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 696 "pmysql.y" /* yacc.c:1646  */
    { handle(new Integer((yyvsp[-1].intval))); (yyval.intval) = 1; }
#line 3106 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 697 "pmysql.y" /* yacc.c:1646  */
    {handle(new Integer((yyvsp[-1].intval))); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3112 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 700 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 3118 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 701 "pmysql.y" /* yacc.c:1646  */
    { beta("DEFAULT"); (yyval.intval) = 1; }
#line 3124 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 702 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3130 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 703 "pmysql.y" /* yacc.c:1646  */
    { beta("DEFAULT"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3136 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 708 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[-3].strval)); beta("INSERTASGN"); }
#line 3142 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 713 "pmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
        free((yyvsp[-2].strval)); beta("ASSIGN"); (yyval.intval) = 1; }
#line 3149 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 716 "pmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
                 free((yyvsp[-2].strval)); beta("DEFAULT"); beta("ASSIGN"); (yyval.intval) = 1; }
#line 3156 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 719 "pmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; }
                 free((yyvsp[-2].strval)); beta("ASSIGN"); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3163 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 722 "pmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; }
                 free((yyvsp[-2].strval)); beta("DEFAULT"); beta("ASSIGN"); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3170 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 728 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[-3].strval)); beta("INSERTSELECT"); }
#line 3176 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 732 "pmysql.y" /* yacc.c:1646  */
    { }
#line 3182 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 738 "pmysql.y" /* yacc.c:1646  */
    {free((yyvsp[-4].strval)); beta("REPLACE");}
#line 3188 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 744 "pmysql.y" /* yacc.c:1646  */
    { beta("REPLACE"); }
#line 3194 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 749 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[-3].strval)); beta("REPLACE");}
#line 3200 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 753 "pmysql.y" /* yacc.c:1646  */
    { }
#line 3206 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 760 "pmysql.y" /* yacc.c:1646  */
    { beta("UPDATE"); }
#line 3212 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 763 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3218 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 764 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 3224 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 765 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 3230 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 770 "pmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
	  free((yyvsp[-2].strval)); beta("ASSIGN"); }
#line 3237 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 773 "pmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-4].strval)); YYERROR; }
	 free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); beta("ASSIGN"); }
#line 3244 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 776 "pmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
	 free((yyvsp[-2].strval)); beta("ASSIGN");}
#line 3251 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 779 "pmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad update  assignment to %s.$s", (yyvsp[-4].strval), (yyvsp[-2].strval)); 
          YYERROR; }
         free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); beta("ASSIGN"); }
#line 3259 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 785 "pmysql.y" /* yacc.c:1646  */
    { }
#line 3265 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 788 "pmysql.y" /* yacc.c:1646  */
    { handle(new Name((yyvsp[0].strval)));
                         handle(new DropOperation(stk));
                         free((yyvsp[0].strval)); }
#line 3273 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 794 "pmysql.y" /* yacc.c:1646  */
    {}
#line 3279 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 798 "pmysql.y" /* yacc.c:1646  */
    {
         handle(new Integer((yyvsp[-1].intval))); // push count of columns
         handle(new Name(std::string((yyvsp[-3].strval)))); // push name of table
         handle(new CreateOperation(stk)); free((yyvsp[-3].strval));
       }
#line 3289 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 806 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[-5].strval)); free((yyvsp[-3].strval)); beta("CREATE with name.name style"); }
#line 3295 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 811 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[-4].strval)); beta("CREATESELECT");}
#line 3301 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 815 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[-1].strval)); beta("CREATESELECT");}
#line 3307 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 820 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[-4].strval)); free((yyvsp[-6].strval)); beta("CREATESELECT"); }
#line 3313 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 824 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[-1].strval)); free((yyvsp[-3].strval)); beta("CREATESELECT"); }
#line 3319 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 827 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3325 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 828 "pmysql.y" /* yacc.c:1646  */
    { beta("TEMPORARY"); (yyval.intval) = 1;}
#line 3331 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 831 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 3337 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 832 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3343 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 835 "pmysql.y" /* yacc.c:1646  */
    { beta("PRIKEY"); }
#line 3349 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 836 "pmysql.y" /* yacc.c:1646  */
    { beta("KEY"); }
#line 3355 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 837 "pmysql.y" /* yacc.c:1646  */
    { beta("KEY"); }
#line 3361 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 838 "pmysql.y" /* yacc.c:1646  */
    { beta("TEXTINDEX"); }
#line 3367 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 839 "pmysql.y" /* yacc.c:1646  */
    { beta("TEXTINDEX"); }
#line 3373 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 843 "pmysql.y" /* yacc.c:1646  */
    {
                     handle(new Integer((yyvsp[-1].intval)));
                     handle(new Name(std::string((yyvsp[-2].strval))));
                     free((yyvsp[-2].strval));
                   }
#line 3383 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 849 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3389 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 850 "pmysql.y" /* yacc.c:1646  */
    { beta("ATTR NOTNULL"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3395 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 853 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[0].strval)); beta("ATTR DEFAULT STRING"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3401 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 855 "pmysql.y" /* yacc.c:1646  */
    { beta("ATTR DEFAULT NUMBER"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3407 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 857 "pmysql.y" /* yacc.c:1646  */
    { beta("ATTR DEFAULT FLOAT"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3413 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 859 "pmysql.y" /* yacc.c:1646  */
    { beta("ATTR DEFAULT BOOL"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3419 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 861 "pmysql.y" /* yacc.c:1646  */
    { beta("ATTR AUTOINC"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3425 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 863 "pmysql.y" /* yacc.c:1646  */
    { beta("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3431 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 864 "pmysql.y" /* yacc.c:1646  */
    { beta("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3437 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 865 "pmysql.y" /* yacc.c:1646  */
    { beta("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3443 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 866 "pmysql.y" /* yacc.c:1646  */
    { beta("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3449 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 868 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[0].strval)); beta("ATTR COMMENT"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3455 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 871 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3461 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 872 "pmysql.y" /* yacc.c:1646  */
    { beta("length of field"); (yyval.intval) = (yyvsp[-1].intval); }
#line 3467 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 873 "pmysql.y" /* yacc.c:1646  */
    { beta("length of field"); (yyval.intval) = (yyvsp[-3].intval) + 1000*(yyvsp[-1].intval); }
#line 3473 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 876 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3479 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 877 "pmysql.y" /* yacc.c:1646  */
    { beta("BINARY"); (yyval.intval) = 4000; }
#line 3485 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 880 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3491 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 881 "pmysql.y" /* yacc.c:1646  */
    { beta("unsigned"); (yyval.intval) = (yyvsp[-1].intval) | 1000; }
#line 3497 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 882 "pmysql.y" /* yacc.c:1646  */
    { beta("zerofill"); (yyval.intval) = (yyvsp[-1].intval) | 2000; }
#line 3503 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 886 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[0].strval)); beta("COLCHARSET"); }
#line 3509 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 887 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[0].strval)); beta("COLCOLLATE"); }
#line 3515 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 891 "pmysql.y" /* yacc.c:1646  */
    { beta("BIT"); (yyval.intval) = 10000 + (yyvsp[0].intval); }
#line 3521 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 892 "pmysql.y" /* yacc.c:1646  */
    { beta("TINYINT"); (yyval.intval) = 10000 + (yyvsp[-1].intval); }
#line 3527 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 893 "pmysql.y" /* yacc.c:1646  */
    { beta("SMALLINT"); (yyval.intval) = 20000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3533 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 894 "pmysql.y" /* yacc.c:1646  */
    { beta("MEDIUMINT"); (yyval.intval) = 30000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3539 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 895 "pmysql.y" /* yacc.c:1646  */
    {beta("INT"); (yyval.intval) = 40000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3545 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 896 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = sdb::types::INTEGER; }
#line 3551 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 897 "pmysql.y" /* yacc.c:1646  */
    { beta("BIGINT"); (yyval.intval) = 60000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3557 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 898 "pmysql.y" /* yacc.c:1646  */
    { beta("REAL"); (yyval.intval) = 70000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3563 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 899 "pmysql.y" /* yacc.c:1646  */
    { beta("DOUBLE"); (yyval.intval) = 80000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3569 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 900 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = sdb::types::FLOAT64; }
#line 3575 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 901 "pmysql.y" /* yacc.c:1646  */
    { beta("DECIMAL"); (yyval.intval) = 110000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3581 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 902 "pmysql.y" /* yacc.c:1646  */
    { beta("DATE"); (yyval.intval) = 100001; }
#line 3587 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 903 "pmysql.y" /* yacc.c:1646  */
    { beta("TIME"); (yyval.intval) = 100002; }
#line 3593 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 904 "pmysql.y" /* yacc.c:1646  */
    { beta("TIMESTAMP"); (yyval.intval) = 100003; }
#line 3599 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 905 "pmysql.y" /* yacc.c:1646  */
    { beta("DATETIME"); (yyval.intval) = 100004; }
#line 3605 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 906 "pmysql.y" /* yacc.c:1646  */
    { beta("YEAR"); (yyval.intval) = 100005; }
#line 3611 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 907 "pmysql.y" /* yacc.c:1646  */
    { beta("CHAR"); (yyval.intval) = 120000 + (yyvsp[-1].intval); }
#line 3617 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 908 "pmysql.y" /* yacc.c:1646  */
    { beta("VARCHAR"); (yyval.intval) = 130000 + (yyvsp[-2].intval); }
#line 3623 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 909 "pmysql.y" /* yacc.c:1646  */
    { beta("BINARY"); (yyval.intval) = 140000 + (yyvsp[0].intval); }
#line 3629 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 910 "pmysql.y" /* yacc.c:1646  */
    { beta("VARBINARY"); (yyval.intval) = 150000 + (yyvsp[-1].intval); }
#line 3635 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 911 "pmysql.y" /* yacc.c:1646  */
    { beta("TINYBLOB"); (yyval.intval) = 160001; }
#line 3641 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 912 "pmysql.y" /* yacc.c:1646  */
    { beta("BLOB"); (yyval.intval) = 160002; }
#line 3647 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 913 "pmysql.y" /* yacc.c:1646  */
    { beta("MEDIUMBLOB"); (yyval.intval) = 160003; }
#line 3653 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 914 "pmysql.y" /* yacc.c:1646  */
    { beta("LONGBLOB"); (yyval.intval) = 160004; }
#line 3659 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 915 "pmysql.y" /* yacc.c:1646  */
    { beta("TINYTEXT"); (yyval.intval) = 170000 + (yyvsp[-1].intval); }
#line 3665 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 916 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = sdb::types::TEXT; }
#line 3671 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 917 "pmysql.y" /* yacc.c:1646  */
    { beta("MEDIUMTEXT"); (yyval.intval) = 172000 + (yyvsp[-1].intval); }
#line 3677 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 918 "pmysql.y" /* yacc.c:1646  */
    { beta("LONGTEXT"); (yyval.intval) = 173000 + (yyvsp[-1].intval); }
#line 3683 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 919 "pmysql.y" /* yacc.c:1646  */
    { beta("ENUM"); (yyval.intval) = 200000 + (yyvsp[-2].intval); }
#line 3689 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 920 "pmysql.y" /* yacc.c:1646  */
    { beta("SET"); (yyval.intval) = 210000 + (yyvsp[-2].intval); }
#line 3695 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 923 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[0].strval)); beta("ENUM"); (yyval.intval) = 1; }
#line 3701 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 924 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[0].strval)); beta("ENUM"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3707 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 927 "pmysql.y" /* yacc.c:1646  */
    { beta("CREATESELECT"); }
#line 3713 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 930 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3719 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 931 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 3725 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 932 "pmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 2; }
#line 3731 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 937 "pmysql.y" /* yacc.c:1646  */
    {}
#line 3737 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 945 "pmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { yyerror("bad set to @%s", (yyvsp[-2].strval)); YYERROR; }
                 free((yyvsp[-2].strval)); beta("SET");}
#line 3744 "pmysql.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 947 "pmysql.y" /* yacc.c:1646  */
    { free((yyvsp[-2].strval)); beta("SET"); }
#line 3750 "pmysql.tab.c" /* yacc.c:1646  */
    break;


#line 3754 "pmysql.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 950 "pmysql.y" /* yacc.c:1906  */

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

/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 58 "pmysql.y" /* yacc.c:1909  */

        int intval;
        double floatval;
        char *strval;
        int subtok;

#line 298 "pmysql.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PMYSQL_TAB_H_INCLUDED  */

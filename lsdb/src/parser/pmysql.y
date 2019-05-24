/*
 * I stole (use) a template from flex & bison book (https://github.com/hurdad/pmysql).
 * Thanks to this chew, he (she) is cool.
 *
 * This file describes a bison grammar and how bison push args to rpn stack
 *
 * Yare yare daze
 */
%{
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
%}

%union {
        int intval;
        double floatval;
        char *strval;
        int subtok;
}

/* names and literal values */

%token <strval> NAME
%token <strval> STRING
%token <intval> INTNUM
%token <intval> BOOL
%token <floatval> APPROXNUM

/* user @abc names */

%token <strval> USERVAR

/* operators and precedence levels */

%right ASSIGN
%left OR
%left XOR
%left ANDOP
%nonassoc IN IS LIKE REGEXP
%left NOT '!'
%left BETWEEN
%left <subtok> COMPARISON /* = <> < > <= >= <=> */
%left '|'
%left '&'
%left <subtok> SHIFT /* << >> */
%left '+' '-'
%left '*' '/' '%' MOD
%left '^'
%nonassoc UMINUS

%token EXIT
%token ADD
%token ALL
%token ALTER
%token ANALYZE
%token AND
%token ANY
%token AS
%token ASC
%token AUTO_INCREMENT
%token BEFORE
%token BIGINT
%token BINARY
%token BIT
%token BLOB
%token BOTH
%token BY
%token CALL
%token CASCADE
%token CASE
%token CHANGE
%token CHAR
%token CHECK
%token COLLATE
%token COLUMN
%token COMMENT
%token CONDITION
%token CONSTRAINT
%token CONTINUE
%token CONVERT
%token CREATE
%token CROSS
%token CURRENT_DATE
%token CURRENT_TIME
%token CURRENT_TIMESTAMP
%token CURRENT_USER
%token CURSOR
%token DATABASE
%token DATABASES
%token DATE
%token DATETIME
%token DAY_HOUR
%token DAY_MICROSECOND
%token DAY_MINUTE
%token DAY_SECOND
%token DECIMAL
%token DECLARE
%token DEFAULT
%token DELAYED
%token DELETE
%token DESC
%token DESCRIBE
%token DETERMINISTIC
%token DISTINCT
%token DISTINCTROW
%token DIV
%token DOUBLE
%token DROP   
%token DUAL 
%token EACH 
%token ELSE
%token ELSEIF
%token END
%token ENUM
%token EXPLAIN
%token FETCH
%token FLOAT
%token FOR
%token FORCE
%token FOREIGN
%token FROM
%token FULLTEXT
%token GRANT
%token GROUP
%token HAVING
%token HIGH_PRIORITY
%token HOUR_MICROSECOND 
%token HOUR_MINUTE
%token HOUR_SECOND
%token IF
%token IGNORE
%token INFILE
%token INDEX
%token INNER
%token INOUT
%token INSENSITIVE
%token INSERT
%token INT
%token INTEGER
%token INTERVAL
%token INTO
%token ITERATE
%token JOIN
%token KEY
%token KEYS
%token KILL
%token LEADING
%token LEAVE
%token LEFT
%token LIMIT
%token LINES 
%token LOAD 
%token LOCALTIME 
%token LOCALTIMESTAMP
%token LOCK
%token LONG 
%token LONGBLOB
%token LONGTEXT
%token LOOP
%token LOW_PRIORITY
%token MATCH
%token MEDIUMBLOB
%token MEDIUMINT
%token MEDIUMTEXT
%token MINUTE_MICROSECOND
%token MINUTE_SECOND
%token MODIFIES
%token NATURAL
%token NO_WRITE_TO_BINLOG
%token NULLX
%token NUMBER
%token ON
%token ONDUPLICATE
%token OPTIMIZE
%token OPTION
%token OPTIONALLY
%token ORDER
%token OUT
%token OUTER
%token OUTFILE
%token PRECISION
%token PRIMARY
%token PROCEDURE
%token PURGE
%token QUICK
%token READ
%token READS
%token REAL
%token REFERENCES
%token RELEASE
%token RENAME
%token REPEAT
%token REPLACE
%token REQUIRE 
%token RESTRICT
%token RETURN
%token REVOKE 
%token RIGHT
%token ROLLUP
%token SECOND_MICROSECOND  
%token SELECT
%token SENSITIVE
%token SEPARATOR
%token SET
%token SHOW
%token SMALLINT
%token SOME
%token SONAME
%token SPATIAL
%token SPECIFIC
%token SQL
%token SQLEXCEPTION
%token SQLSTATE
%token SQLWARNING
%token SQL_BIG_RESULT
%token SQL_CALC_FOUND_ROWS
%token SQL_SMALL_RESULT
%token SSL
%token STARTING
%token STRAIGHT_JOIN
%token TABLE
%token TEMPORARY
%token TERMINATED
%token TEXT
%token THEN
%token TIME
%token TIMESTAMP
%token TINYBLOB
%token TINYINT
%token TINYTEXT
%token TO
%token TRAILING
%token TRIGGER 
%token UNDO
%token UNION
%token UNIQUE
%token UNLOCK
%token UNSIGNED
%token UPDATE
%token USAGE
%token USE
%token USING
%token UTC_DATE
%token UTC_TIME
%token UTC_TIMESTAMP
%token VALUES
%token VARBINARY
%token VARCHAR
%token VARYING
%token WHEN
%token WHERE
%token WHILE
%token WITH
%token WRITE
%token YEAR
%token YEAR_MONTH
%token ZEROFILL

%token ESCAPED
%token <subtok> EXISTS /* NOT EXISTS or EXISTS */

/* functions with special syntax */
%token FSUBSTRING
%token FTRIM
%token FDATE_ADD FDATE_SUB
%token FCOUNT

%type <intval> select_expr_list
%type <intval> opt_where
%type <intval> val_list opt_val_list case_list
%type <intval> groupby_list opt_with_rollup opt_asc_desc
%type <intval> table_references opt_inner_cross opt_outer
%type <intval> left_or_right opt_left_or_right_outer column_list
%type <intval> index_list opt_for_join

%type <intval> delete_opts delete_list
%type <intval> insert_opts insert_vals insert_vals_list
%type <intval> insert_asgn_list opt_if_not_exists update_opts update_asgn_list
%type <intval> opt_temporary opt_length opt_binary opt_uz enum_list
%type <intval> column_atts data_type opt_ignore_replace create_col_list

%start query

%%

query:
  | stmt ';' { return 0; }
  | EXIT {sdb::Interpreter::continueWork = false;
          return 0; }
  ;

/**** expressions ****/
   
expr: NAME         { handle(new Name(std::string($1))); free($1); }
   | NAME '.' NAME {
     handle(new Text(std::string("FIELDNAME ") + std::string($1) + std::string($3)));
     free($1);
     free($3);
     beta("fieldname");
    }
   | USERVAR       { free($1); beta("USERVAR"); }
   | STRING        {
        std::string string($1);
        string = string.substr(1, string.end() - string.begin() - 2);
        handle(new Text(string)); free($1);
    }
   | INTNUM        { handle(new Integer($1)); }
   | APPROXNUM     { handle(new Float64($1)); }
   | BOOL          { beta("BOOL"); }
   ;
   
expr: expr '+' expr { beta("plus"); handle(new SumOperation(stk)); }
   | expr '-' expr { beta("minus"); handle(new SubOperation(stk)); }
   | expr '*' expr { beta("mul"); handle(new MulOperation(stk)); }
   | expr '/' expr { beta("div"); handle(new DivOperation(stk)); }
   | expr '%' expr { beta("MOD"); }
   | expr MOD expr { beta("MOD"); }
   | '-' expr %prec UMINUS { beta("negation"); }
   | expr ANDOP expr { beta("and"); }
   | expr OR expr { beta("OR"); }
   | expr XOR expr { beta("XOR"); }
   | expr '|' expr { beta("BITOR"); }
   | expr '&' expr { beta("BITAND"); }
   | expr '^' expr { beta("BITXOR"); }
   | expr SHIFT expr { beta("SHIFT"); }
   | NOT expr { beta("NOT"); }
   | '!' expr { beta("NOT"); }
   | expr COMPARISON expr { handle(new ComparisonOperation(stk, $2)); }

/* recursive selects and comparisons thereto */
   | expr COMPARISON '(' select_stmt ')' { beta("CMPSELECT"); }
   | expr COMPARISON ANY '(' select_stmt ')' { beta("CMPANYSELECT"); }
   | expr COMPARISON SOME '(' select_stmt ')' { beta("CMPANYSELECT"); }
   | expr COMPARISON ALL '(' select_stmt ')' { beta("CMPALLSELECT"); }
   ;

expr:  expr IS NULLX     { beta("ISNULL"); }
   |   expr IS NOT NULLX { beta("ISNULL"); }
   |   expr IS BOOL      { beta("ISBOOL"); }
   |   expr IS NOT BOOL  { beta("ISBOOL"); }

   | USERVAR ASSIGN expr { free($1); beta("ASSIGN"); }
   ;

expr: expr BETWEEN expr AND expr %prec BETWEEN { beta("BETWEEN"); }
   ;
   
val_list: expr { $$ = 1; }
   | expr ',' val_list { $$ = 1 + $3; }
   ;

opt_val_list: /* nil */ { $$ = 0; }
   | val_list
   ;

expr: expr IN '(' val_list ')'       { beta("ISIN"); }
   | expr NOT IN '(' val_list ')'    { beta("ISIN"); }
   | expr IN '(' select_stmt ')'     { beta("CMPANYSELECT 4"); }
   | expr NOT IN '(' select_stmt ')' { beta("CMPALLSELECT 3"); }
   | EXISTS '(' select_stmt ')'      { beta("EXISTSSELECT"); }
   ;
   
/* regular functions */
expr: NAME '(' opt_val_list ')' { free($1); beta("CALL"); }
   ;

/* functions with special syntax */
expr: FCOUNT '(' '*' ')' { beta("COUNTALL"); }
   | FCOUNT '(' expr ')' { beta(" CALL 1 COUNT"); } 

expr: FSUBSTRING '(' val_list ')'               {  beta("CALL SUBSTR"); }
   | FSUBSTRING '(' expr FROM expr ')'          {  beta("CALL 2 SUBSTR"); }
   | FSUBSTRING '(' expr FROM expr FOR expr ')' {  beta("CALL 3 SUBSTR"); }

   | FTRIM '(' val_list ')'                     { beta("CALLTRIM"); }
   | FTRIM '(' trim_ltb expr FROM val_list ')'  { beta("CALL 3 TRIM"); }
   ;

trim_ltb: LEADING { beta("NUMBER 1"); }
   | TRAILING     { beta("NUMBER 2"); }
   | BOTH         { beta("NUMBER 3"); }
   ;

expr: FDATE_ADD '(' expr ',' interval_exp ')' { beta("CALL 3 DATE_ADD"); }
   |  FDATE_SUB '(' expr ',' interval_exp ')' { beta("CALL 3 DATE_SUB"); }
   ;

interval_exp: INTERVAL expr DAY_HOUR { beta("NUMBER 1"); }
   | INTERVAL expr DAY_MICROSECOND   { beta("NUMBER 2"); }
   | INTERVAL expr DAY_MINUTE        { beta("NUMBER 3"); }
   | INTERVAL expr DAY_SECOND        { beta("NUMBER 4"); }
   | INTERVAL expr YEAR_MONTH        { beta("NUMBER 5"); }
   | INTERVAL expr YEAR              { beta("NUMBER 6"); }
   | INTERVAL expr HOUR_MICROSECOND  { beta("NUMBER 7"); }
   | INTERVAL expr HOUR_MINUTE       { beta("NUMBER 8"); }
   | INTERVAL expr HOUR_SECOND       { beta("NUMBER 9"); }
   ;
expr: CASE expr case_list END           { beta("CASEVAL 0"); }
   |  CASE expr case_list ELSE expr END { beta("CASEVAL 1"); }
   |  CASE case_list END                { beta("CASE 0"); }
   |  CASE case_list ELSE expr END      { beta("CASE 1"); }
   ;

case_list: WHEN expr THEN expr     { $$ = 1; }
         | case_list WHEN expr THEN expr { $$ = $1+1; } 
   ;

expr: expr LIKE expr { beta("LIKE"); }
   | expr NOT LIKE expr { beta("LIKE");}
   ;

expr: expr REGEXP expr { beta("REGEXP"); }
   | expr NOT REGEXP expr { beta("REGEXP");}
   ;

expr: CURRENT_TIMESTAMP { beta("NOW"); };
   | CURRENT_DATE       { beta("NOW"); };
   | CURRENT_TIME       { beta("NOW"); };
   ;

expr: BINARY expr %prec UMINUS { beta("STRTOBIN"); }
   ;

/* statements: select statement */

stmt: select_stmt {}
   ;

// can't do select from the all tables cause architecture
select_stmt: /* SELECT select_expr_list
                        { handle(new SelectOperation(stk, $2, -1, false));} ;

    | */ SELECT select_expr_list
     FROM table_references
     opt_where opt_groupby opt_having opt_orderby opt_limit
     opt_into_list { handle(new SelectOperation(stk, $2, $4, $5 > 0)); } ;
;

opt_where: /* nil */  { $$ = 0; }
   | WHERE expr { handle(new WhereOperation(stk)); $$ = 1; };

opt_groupby: /* nil */ 
   | GROUP BY groupby_list opt_with_rollup
                             { beta("GROUPBYLIST"); }
;

groupby_list: expr opt_asc_desc
                             { beta("GROUPBY");}
   | groupby_list ',' expr opt_asc_desc
                             { beta("GROUPBY");}
   ;

opt_asc_desc: /* nil */ { $$ = 0; }
   | ASC                { $$ = 0; }
   | DESC               { $$ = 1; }
    ;

opt_if_not_exists: /* nil in this version */ {$$ = 0;};

opt_with_rollup: /* nil */  { $$ = 0; }
   | WITH ROLLUP  { $$ = 1; }
   ;

opt_having: /* nil */ 
   | HAVING expr { beta("HAVING"); };

opt_orderby: /* nil */ 
   | ORDER BY groupby_list { beta("ORDERBY"); }
   ;

opt_limit: /* nil */ | LIMIT expr { beta("LIMIT 1"); }
  | LIMIT expr ',' expr             { beta("LIMIT 2"); }
  ; 

opt_into:
    | INTO
;

opt_into_list: /* nil */ 
   | INTO column_list { beta("INTO"); }
   ;

column_list: NAME { handle(new Name(std::string($1))); free($1); $$ = 1; }
  | column_list ',' NAME  {  handle(new Name(std::string($3)));
    free($3); $$ = $1 + 1; }
  ;
  
select_expr_list: select_expr { $$ = 1; }
    | select_expr_list ',' select_expr {$$ = $1 + 1; }
    | '*' { $$ = -1; }
    ;

select_expr: expr opt_as_alias ;

opt_as_alias: AS NAME { free($2); beta("ALIAS"); }
  | NAME              { free($1); beta("ALIAS"); }
  | /* nil */
  ;
  
  table_references:    table_reference { $$ = 1; }
    | table_references ',' table_reference { $$ = $1 + 1; }
    ;

table_reference:  table_factor
  | join_table
;

table_factor:
    NAME opt_as_alias index_hint { handle(new Name(std::string($1))); free($1); }
  | NAME '.' NAME opt_as_alias index_hint { free($1); free($3);
                beta("fieldname style in Table reference");}
  | table_subquery opt_as NAME { free($3); beta("SUBQUERYAS"); }
  | '(' table_references ')' { beta("TABLEREFERENCES in braces"); }
  ;

opt_as: AS 
  | /* nil */
  ;

join_table:
    table_reference opt_inner_cross JOIN table_factor opt_join_condition
                  { beta("JOIN in this style"); }
  | table_reference STRAIGHT_JOIN table_factor
                  { beta("JOIN in this style"); }
  | table_reference STRAIGHT_JOIN table_factor ON expr
                  { beta("JOIN in this style"); }
  | table_reference left_or_right opt_outer JOIN table_factor join_condition
                  { beta("JOIN in this style"); }
  | table_reference NATURAL opt_left_or_right_outer JOIN table_factor
                  { beta("JOIN in this style"); }
  ;

opt_inner_cross: /* nil */ { $$ = 0; }
   | INNER { $$ = 1; }
   | CROSS  { $$ = 2; }
;

opt_outer: /* nil */  { $$ = 0; }
   | OUTER {$$ = 4; }
   ;

left_or_right: LEFT { $$ = 1; }
    | RIGHT { $$ = 2; }
    ;

opt_left_or_right_outer: LEFT opt_outer { $$ = 1 + $2; }
   | RIGHT opt_outer  { $$ = 2 + $2; }
   | /* nil */ { $$ = 0; }
   ;

opt_join_condition: /* nil */
   | join_condition ;

join_condition:
    ON expr { beta("ONEXPR"); }
    | USING '(' column_list ')' { beta("USING"); }
    ;

index_hint:
     USE KEY opt_for_join '(' index_list ')'
                  { beta("INDEXHINT"); }
   | IGNORE KEY opt_for_join '(' index_list ')'
                  { beta("INDEXHINT"); }
   | FORCE KEY opt_for_join '(' index_list ')'
                  { beta("INDEXHINT"); }
   | /* nil */
   ;

opt_for_join: FOR JOIN { $$ = 1; }
   | /* nil */ { $$ = 0; }
   ;

index_list: NAME  { free($1); beta("INDEX in join"); $$ = 1; }
   | index_list ',' NAME { free($3); beta("INDEX in join");$$ = $1 + 1; }
   ;

table_subquery: '(' select_stmt ')' { beta("SUBQUERY in join"); }
   ;
    
/* statements: delete statement */

stmt: delete_stmt { }
   ;

/* single table delete */
delete_stmt: DELETE delete_opts FROM NAME
    opt_where opt_orderby opt_limit
                  {
         handle(new Name(std::string($4)));
         handle(new DeleteOperation(stk, $5 > 0, 1));
         free($4); }
;

delete_opts: delete_opts LOW_PRIORITY { beta("Low Priority"); $$ = $1 + 01; }
   | delete_opts QUICK { beta("Quick"); $$ = $1 + 02; }
   | delete_opts IGNORE { beta("Ignore"); $$ = $1 + 04; }
   | /* nil */ { $$ = 0; }
   ;

/* multitable delete, first version */
delete_stmt: DELETE delete_opts
    delete_list
    FROM table_references opt_where
            { beta("multidelete"); }

delete_list: NAME opt_dot_star { handle(new Name(std::string($1))); free($1); $$ = 1; }
   | delete_list ',' NAME opt_dot_star
            { handle(new Name(std::string($3))); free($3); $$ = $1 + 1; }
   ;

opt_dot_star: /* nil */ | '.' '*' ;

/* multitable delete, second version */
delete_stmt: DELETE delete_opts
    FROM delete_list
    USING table_references opt_where
            { beta("multidelete"); }
;

/* statements: insert statement */

stmt: insert_stmt { }
   ;

insert_stmt: INSERT insert_opts INTO NAME
     opt_col_names
     VALUES insert_vals_list
     opt_ondupupdate {
         // push on stack name of table
         handle(new Name(std::string($4)));
         handle(new InsertOperation(stk, $7));
         free($4);
     }
   ;

opt_ondupupdate: /* nil */
   | ONDUPLICATE KEY UPDATE insert_asgn_list { beta("update"); }
   ;

insert_opts: /* nil */ { $$ = 0; }
   | insert_opts LOW_PRIORITY { beta("insert options"); $$ = $1 | 01 ; }
   | insert_opts DELAYED { beta("insert options"); $$ = $1 | 02 ; }
   | insert_opts HIGH_PRIORITY { beta("insert options"); $$ = $1 | 04 ; }
   | insert_opts IGNORE { beta("insert options"); $$ = $1 | 010 ; }
   ;

     // push on stack a count of columns
opt_col_names: /* nil */ { handle(new Integer(0)); }
   | '(' column_list ')' { handle(new Integer($2)); }
   ;

insert_vals_list: '(' insert_vals ')' { handle(new Integer($2)); $$ = 1; }
   | insert_vals_list ',' '(' insert_vals ')' {handle(new Integer($4)); $$ = $1 + 1; }

insert_vals:
     expr { $$ = 1; }
   | DEFAULT { beta("DEFAULT"); $$ = 1; }
   | insert_vals ',' expr { $$ = $1 + 1; }
   | insert_vals ',' DEFAULT { beta("DEFAULT"); $$ = $1 + 1; }
   ;
   insert_stmt: INSERT insert_opts opt_into NAME
    SET insert_asgn_list
    opt_ondupupdate
     { free($4); beta("INSERTASGN"); }
   ;

insert_asgn_list:
     NAME COMPARISON expr 
     { if ($2 != 4) { yyerror("bad insert assignment to %s", $1); YYERROR; }
        free($1); beta("ASSIGN"); $$ = 1; }
   | NAME COMPARISON DEFAULT
       { if ($2 != 4) { yyerror("bad insert assignment to %s", $1); YYERROR; }
                 free($1); beta("DEFAULT"); beta("ASSIGN"); $$ = 1; }
   | insert_asgn_list ',' NAME COMPARISON expr
       { if ($4 != 4) { yyerror("bad insert assignment to %s", $1); YYERROR; }
                 free($3); beta("ASSIGN"); $$ = $1 + 1; }
   | insert_asgn_list ',' NAME COMPARISON DEFAULT
       { if ($4 != 4) { yyerror("bad insert assignment to %s", $1); YYERROR; }
                 free($3); beta("DEFAULT"); beta("ASSIGN"); $$ = $1 + 1; }
   ;
   
insert_stmt: INSERT insert_opts opt_into NAME opt_col_names
    select_stmt
    opt_ondupupdate { free($4); beta("INSERTSELECT"); }
  ;

/** replace just like insert **/
stmt: replace_stmt { }
   ;

replace_stmt: REPLACE insert_opts opt_into NAME
     opt_col_names
     VALUES insert_vals_list
     opt_ondupupdate {free($4); beta("REPLACE");}
   ;

replace_stmt: REPLACE insert_opts opt_into NAME
    SET insert_asgn_list
    opt_ondupupdate
     { beta("REPLACE"); }
   ;

replace_stmt: REPLACE insert_opts opt_into NAME opt_col_names
    select_stmt
    opt_ondupupdate { free($4); beta("REPLACE");}
  ;
  
/** update **/
stmt: update_stmt { }
   ;

update_stmt: UPDATE update_opts table_references
    SET update_asgn_list
    opt_where
    opt_orderby
	opt_limit { beta("UPDATE"); }
;

update_opts: /* nil */ { $$ = 0; }
   | insert_opts LOW_PRIORITY { $$ = $1 | 01 ; }
   | insert_opts IGNORE { $$ = $1 | 010 ; }
   ;

update_asgn_list:
     NAME COMPARISON expr 
     { if ($2 != 4) { yyerror("bad update assignment to %s", $1); YYERROR; }
	  free($1); beta("ASSIGN"); }
   | NAME '.' NAME COMPARISON expr 
       { if ($4 != 4) { yyerror("bad update assignment to %s", $1); YYERROR; }
	 free($1); free($3); beta("ASSIGN"); }
   | update_asgn_list ',' NAME COMPARISON expr
       { if ($4 != 4) { yyerror("bad update assignment to %s", $3); YYERROR; }
	 free($3); beta("ASSIGN");}
   | update_asgn_list ',' NAME '.' NAME COMPARISON expr
       { if ($6 != 4) { yyerror("bad update  assignment to %s.$s", $3, $5); 
          YYERROR; }
         free($3); free($5); beta("ASSIGN"); }
   ;

/** drop table **/
stmt: drop_table_stmt { }
   ;

drop_table_stmt: DROP TABLE NAME { handle(new Name($3));
                         handle(new DropOperation(stk));
                         free($3); }
   ;
   
/** create table **/
stmt: create_table_stmt {}
   ;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME
   '(' create_col_list ')' {
         handle(new Integer($7)); // push count of columns
         handle(new Name(std::string($5))); // push name of table
         handle(new CreateOperation(stk)); free($5);
       }
   ;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME
   '(' create_col_list ')' { free($5); free($7); beta("CREATE with name.name style"); }
   ;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME
   '(' create_col_list ')'
    create_select_statement { free($5); beta("CREATESELECT");}
    ;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME
   create_select_statement { free($5); beta("CREATESELECT");}
    ;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME
   '(' create_col_list ')'
   create_select_statement  { free($7); free($5); beta("CREATESELECT"); }
    ;

create_table_stmt: CREATE opt_temporary TABLE opt_if_not_exists NAME '.' NAME
   create_select_statement { free($7); free($5); beta("CREATESELECT"); }
    ;

opt_temporary:   /* nil */ { $$ = 0; }
   | TEMPORARY { beta("TEMPORARY"); $$ = 1;}
   ;
   
create_col_list: create_definition { $$ = 1; }
    | create_col_list ',' create_definition { $$ = $1 + 1; }
    ;

create_definition: PRIMARY KEY '(' column_list ')'    { beta("PRIKEY"); }
    | KEY '(' column_list ')'            { beta("KEY"); }
    | INDEX '(' column_list ')'          { beta("KEY"); }
    | FULLTEXT INDEX '(' column_list ')' { beta("TEXTINDEX"); }
    | FULLTEXT KEY '(' column_list ')'   { beta("TEXTINDEX"); }
    ;
    
create_definition: NAME data_type column_atts
                   {
                     handle(new Integer($2));
                     handle(new Name(std::string($1)));
                     free($1);
                   }

column_atts: /* nil */ { $$ = 0; }
    | column_atts NOT NULLX             { beta("ATTR NOTNULL"); $$ = $1 + 1; }
    | column_atts NULLX
    | column_atts DEFAULT STRING        
        { free($3); beta("ATTR DEFAULT STRING"); $$ = $1 + 1; }
    | column_atts DEFAULT INTNUM        
        { beta("ATTR DEFAULT NUMBER"); $$ = $1 + 1; }
    | column_atts DEFAULT APPROXNUM     
        { beta("ATTR DEFAULT FLOAT"); $$ = $1 + 1; }
    | column_atts DEFAULT BOOL          
        { beta("ATTR DEFAULT BOOL"); $$ = $1 + 1; }
    | column_atts AUTO_INCREMENT        
        { beta("ATTR AUTOINC"); $$ = $1 + 1; }
    | column_atts UNIQUE '(' column_list ')' 
        { beta("ATTR UNIQUEKEY"); $$ = $1 + 1; }
    | column_atts UNIQUE KEY { beta("ATTR UNIQUEKEY"); $$ = $1 + 1; }
    | column_atts PRIMARY KEY { beta("ATTR PRIKEY"); $$ = $1 + 1; }
    | column_atts KEY { beta("ATTR PRIKEY"); $$ = $1 + 1; }
    | column_atts COMMENT STRING 
        { free($3); beta("ATTR COMMENT"); $$ = $1 + 1; }
    ;
    
opt_length: /* nil */ { $$ = 0; }
   | '(' INTNUM ')' { beta("length of field"); $$ = $2; }
   | '(' INTNUM ',' INTNUM ')' { beta("length of field"); $$ = $2 + 1000*$4; }
   ;

opt_binary: /* nil */ { $$ = 0; }
   | BINARY { beta("BINARY"); $$ = 4000; }
   ;

opt_uz: /* nil */ { $$ = 0; }
   | opt_uz UNSIGNED { beta("unsigned"); $$ = $1 | 1000; }
   | opt_uz ZEROFILL { beta("zerofill"); $$ = $1 | 2000; }
   ;

opt_csc: /* nil */
   | opt_csc CHAR SET STRING { free($4); beta("COLCHARSET"); }
   | opt_csc COLLATE STRING { free($3); beta("COLCOLLATE"); }
   ;

data_type:
     BIT opt_length { beta("BIT"); $$ = 10000 + $2; }
   | TINYINT opt_length opt_uz { beta("TINYINT"); $$ = 10000 + $2; }
   | SMALLINT opt_length opt_uz { beta("SMALLINT"); $$ = 20000 + $2 + $3; }
   | MEDIUMINT opt_length opt_uz { beta("MEDIUMINT"); $$ = 30000 + $2 + $3; }
   | INT opt_length opt_uz {beta("INT"); $$ = 40000 + $2 + $3; }
   | INTEGER opt_length opt_uz { $$ = sdb::types::INTEGER; }
   | BIGINT opt_length opt_uz { beta("BIGINT"); $$ = 60000 + $2 + $3; }
   | REAL opt_length opt_uz { beta("REAL"); $$ = 70000 + $2 + $3; }
   | DOUBLE opt_length opt_uz { beta("DOUBLE"); $$ = 80000 + $2 + $3; }
   | FLOAT opt_length opt_uz { $$ = sdb::types::FLOAT64; }
   | DECIMAL opt_length opt_uz { beta("DECIMAL"); $$ = 110000 + $2 + $3; }
   | DATE { beta("DATE"); $$ = 100001; }
   | TIME { beta("TIME"); $$ = 100002; }
   | TIMESTAMP { beta("TIMESTAMP"); $$ = 100003; }
   | DATETIME { beta("DATETIME"); $$ = 100004; }
   | YEAR { beta("YEAR"); $$ = 100005; }
   | CHAR opt_length opt_csc { beta("CHAR"); $$ = 120000 + $2; }
   | VARCHAR '(' INTNUM ')' opt_csc { beta("VARCHAR"); $$ = 130000 + $3; }
   | BINARY opt_length { beta("BINARY"); $$ = 140000 + $2; }
   | VARBINARY '(' INTNUM ')' { beta("VARBINARY"); $$ = 150000 + $3; }
   | TINYBLOB { beta("TINYBLOB"); $$ = 160001; }
   | BLOB { beta("BLOB"); $$ = 160002; }
   | MEDIUMBLOB { beta("MEDIUMBLOB"); $$ = 160003; }
   | LONGBLOB { beta("LONGBLOB"); $$ = 160004; }
   | TINYTEXT opt_binary opt_csc { beta("TINYTEXT"); $$ = 170000 + $2; }
   | TEXT opt_binary opt_csc { $$ = sdb::types::TEXT; }
   | MEDIUMTEXT opt_binary opt_csc { beta("MEDIUMTEXT"); $$ = 172000 + $2; }
   | LONGTEXT opt_binary opt_csc { beta("LONGTEXT"); $$ = 173000 + $2; }
   | ENUM '(' enum_list ')' opt_csc { beta("ENUM"); $$ = 200000 + $3; }
   | SET '(' enum_list ')' opt_csc { beta("SET"); $$ = 210000 + $3; }
   ;

enum_list: STRING { free($1); beta("ENUM"); $$ = 1; }
   | enum_list ',' STRING { free($3); beta("ENUM"); $$ = $1 + 1; }
   ;
   
   create_select_statement: opt_ignore_replace opt_as select_stmt { beta("CREATESELECT"); }
   ;

opt_ignore_replace: /* nil */ { $$ = 0; }
   | IGNORE { $$ = 1; }
   | REPLACE { $$ = 2; }
   ;

/**** set user variables ****/

stmt: set_stmt {}
   ;

set_stmt: SET set_list ;

set_list: set_expr | set_list ',' set_expr ;

set_expr:
      USERVAR COMPARISON expr { if ($2 != 4) { yyerror("bad set to @%s", $1); YYERROR; }
                 free($1); beta("SET");}
    | USERVAR ASSIGN expr { free($1); beta("SET"); }
    ;
    
%%
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

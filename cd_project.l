%option noyywrap
%{
  #include <stdio.h>
  #include <string.h>
  #include "y.tab.h"
%}

LETTER [a-zA-Z]
DIGIT  [0-9]

%%

"\+" return PLUS;
"\-" return MINUS;
"\/" return DIV;
"\*" return MULT;
"\%" return MOD;
"=" return EQUAL;
":" return COLON;
"->" { return ARR; }

"if " return IF;
"elif " return ELIF;
"else:" return ELSE;
"for " return FOR;
"in" return IN;
"range" return RANGE;
"," return COMMA;
"while " return WHILE;
"match" return MATCH;
"case" return CASE;
"and" return AND;
"or" return OR;
"not" return NOT;
"print" return PRINT;
"break" return BREAK;
"continue" return CONTINUE;
"default" return DEFAULT;
"def" return DEF;
"return" return RETURN;

"int" { yylval.str = strdup("int"); return DATYPE; }
"float" { yylval.str = strdup("float"); return DATYPE; }
"str" { yylval.str = strdup("str"); return DATYPE; }

{LETTER}({LETTER}|{DIGIT}|"_")* {
  yylval.str=strdup(yytext);
  return VAR;
  }
("0"|[1-9]{DIGIT}*)     {
  yylval.str=strdup(yytext);
  return INT;
  }
(("0"|[1-9]{DIGIT}*)"."{DIGIT}+|("0"|[1-9]{DIGIT}*)"."|"."{DIGIT}+) {
  yylval.str=strdup(yytext);
  return FLOAT;
  }
\"([#-~]|"\\\""|"!"|" ")*\"     {
  yylval.str=strdup(yytext);
  return STRING;
  }
\'[a-z]+\' { yylval.str = strdup(yytext); return CHAR; }
"=="|"!="|"<="|"<"|">="|">" {
  yylval.str=strdup(yytext);
  return COMPARISON;
  }

\t|"    " return TAB;
\n return NWLN;


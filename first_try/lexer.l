%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
// 定义一个全局变量来跟踪行号
int line_number = 1;
void error(const char *str, const char *yytext) {
    fprintf(stderr, "Error type A at Line %d: %s '%s'\n", line_number, str, yytext);
    exit(1);  // 立即退出
}
%}

/* 标识符Ident的声明  */
identifier-nondigit    [_a-zA-Z]    
digit                   [0-9]        
Ident                   {identifier-nondigit}({identifier-nondigit}|{digit})* 


/* 有关Number的声明  */
/* IntConst的声明  */
decimal-const   [1-9][0-9]*  
octal-const   0[0-7]*
hexadecimal-prefix  (0x|0X)
hexadecimal-digit [0-9A-Fa-f]+
hexadecimal-const  {hexadecimal-prefix}{hexadecimal-digit} 
IntConst  ({decimal-const}|{octal-const}|{hexadecimal-const})

/* floatConst的声明  */
digit-sequence       [0-9]+
fractional-constant  {digit-sequence}?\.{digit-sequence}|{digit-sequence}\.
mul           ([*/%])
exponent-part      e{sign}?{digit-sequence}|E{sign}?{digit-sequence}
decimal-floating-constant   {fractional-constant}{exponent-part}?|{digit-sequence}{exponent-part}
hexadecimal-digit-sequence    {hexadecimal-digit}
hexadecimal-fractional-constant     {hexadecimal-digit-sequence}?\.{hexadecimal-digit-sequence}|{hexadecimal-digit-sequence}\.
binary-exponent-part        p{sign}?{digit-sequence}|P{sign}?{digit-sequence}
hexadecimal-floating-constant    {hexadecimal-prefix}{hexadecimal-fractional-constant}{binary-exponent-part}|{hexadecimal-prefix}{hexadecimal-digit-sequence}{binary-exponent-part} 
floatConst  ({decimal-floating-constant}|{hexadecimal-floating-constant})

Number   ({IntConst}|{floatConst})
sign          ([+-])

Equal    "!="|"=="
Weight   "<"|">"|"<="|">="


UnaryOP  ["!""+""-"]



%%

"void"               {yylval.strval = strdup(yytext);}return VOID;{printf("VOIDTK \n");}
"int"                {yylval.strval = strdup(yytext);}return INT;{printf("INTTK int\n");}
"const"              return CONST;{printf("CONST \n");}
"float"              {yylval.strval = strdup(yytext);}return FLOAT;{printf("FLOATTK \n");}

"if"                 return IF;{printf("IF \n");}
"else"               return ELSE;{printf("ELSE \n");}
"while"              return WHILE;{printf("WHILE \n");}
"break"              return BREAK;{printf("BREAK \n");}
"continue"           return CONTINUE;{printf("CONTINUE \n");}
"return"             return RETURN;{printf("RETURN \n");}

{Ident}              {yylval.strval = strdup(yytext);}return IDENT; {printf("ID %s\n", yytext);}
{IntConst}           return INTCONST;{printf("INTCON %d\n", (int)strtol(yytext, NULL, 0));}
{floatConst}         return FLOATCONST;{printf("FLOATCON %s\n", yytext);}

"+"                  return PLUS;{printf("PLUS +\n");}
"-"                  return MINUS;{printf("MINUS -\n");}
{mul}               return MUL; 
{Equal}             return EQUAL;
{Weight}            return WEIGHT;
{UnaryOP}           return UNARYOP;

","                  return COMMA;{printf("COMMA ,\n");}
"="                  return ASSIGN;{printf("ASSIGN =\n");}
"||"                 return OR;{printf("OR ||\n");}
"&&"                 return AND;{printf("AND &&\n");}

"("                  {yylval.strval = strdup(yytext);}return LPARENT;{printf("LPARENT \( \n");}
")"                  {yylval.strval = strdup(yytext);}return RPARENT;{printf("RPARENT \) \n");}
"["                  {yylval.strval = strdup(yytext);}return LBRACKET;{printf("LBRACKET [ \n");}
"]"                  {yylval.strval = strdup(yytext);}return RBRACKET;{printf("RBRACKET ] \n");}
"{"                  {yylval.strval = strdup(yytext);}return LBRACE;{printf("LBRACE \{ \n");}
"}"                  {yylval.strval = strdup(yytext);}return RBRACE;{printf("RBRACE \} \n");}

[ \t]+              ; // 忽略空格、制表符和换行符
;                    return END;{printf("SEMICN\n");}
\n                  line_number++;


0[89]              {fprintf(stderr, "Error type A at Line %d: Illegal octal number %s\n",line_number, yytext); exit(1);}    /* 错误：非法八进制数字 */


0[xX][0-9A-Fa-f]*[^0-9A-Fa-f]  {fprintf(stderr, "Error type A at Line %d: Illegal hexadecimal number %s\n",line_number, yytext); exit(1);}   /* 错误：非法十六进制数字 */


.                     {error("Invalid character", yytext);}


%%

%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
// 定义一个全局变量来跟踪行号
int line_number = 1;

%}

/* 标识符Ident的声明  */
identifier-nondigit    [_a-zA-Z]
digit                   [0-9]
Ident      ({identifier-nondigit}({identifier-nondigit}|{digit})*)


/* 有关Number的声明  */
/* IntConst的声明  */
decimal-const   [1-9][0-9]*  
octal-const   0[0-7]+
hexadecimal-prefix  (0x|0X)
hexadecimal-digit [0-9A-Fa-f]+
hexadecimal-const  {hexadecimal-prefix}{hexadecimal-digit} 
IntConst  ({decimal-const}|{octal-const}|{hexadecimal-const})

/* floatConst的声明  */
digit-sequence       [0-9]+
fractional-constant  {digit-sequence}?\.{digit-sequence}|{digit-sequence}\.
sign          [+-]
exponent-part      e{sign}?{digit-sequence}|E{sign}?{digit-sequence}
decimal-floating-constant   {fractional-constant}{exponent-part}?|{digit-sequence}{exponent-part}
hexadecimal-digit-sequence    {hexadecimal-digit}
hexadecimal-fractional-constant     {hexadecimal-digit-sequence}?\.{hexadecimal-digit-sequence}|{hexadecimal-digit-sequence}\.
binary-exponent-part        p{sign}?{digit-sequence}|P{sign}?{digit-sequence}
hexadecimal-floating-constant    {hexadecimal-prefix}{hexadecimal-fractional-constant}{binary-exponent-part}|{hexadecimal-prefix}{hexadecimal-digit-sequence}{binary-exponent-part} 
floatConst  ({decimal-floating-constant}|{hexadecimal-floating-constant})

Number   ({IntConst}|{floatConst})







%%

{Ident}             {printf("ID %s\n", yytext);}  return IDENT;  
{IntConst}          return INTCON;  //printf("INTCON %d\n", (int)strtol(yytext, NULL, 0));
{floatConst}        return FLOATCON;   //printf("FLOATCON %s\n", yytext);
[ \t]+            ; // 忽略空格、制表符和换行符
;                  return END;
\n                line_number++;return CR;
.                  ;

%%

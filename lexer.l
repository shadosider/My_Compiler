%{
#include <stdio.h>
#include <stdlib.h>

void parse_error(char *msg);
%}

/* 有关Number的声明  */
/* IntConst的声明  */
decimal-const   [1-9][0-9]*  
octal-const   0[0-7]+
hexadecimal-prefix  0x|0X
hexadecimal-digit [0-9A-Fa-f]+
hexadecimal-const  {hexadecimal-prefix}{hexadecimal-digit} 
IntConst  {decimal-const}|{octal-const}|{hexadecimal-const}

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
floatConst  {decimal-floating-constant}|{hexadecimal-floating-constant}

Number   {IntConst}|{floatConst}



%%

"int"               printf("INTTK int\n"); 
[[:alpha:]_][[:alnum:]_]*   printf("ID %s\n", yytext); 
"("                 printf("LPARENT (\n"); 
")"                 printf("RPARENT )\n"); 
"{"                 printf("LBRACE {\n"); 
"}"                 printf("RBRACE }\n"); 
";"                 printf("SEMICN ;\n"); 
"="                 printf("ASSIGN =\n"); 
"+"                 printf("PLUS +\n"); 
{IntConst}          printf("INTCON %s\n", yytext);
{floatConst}        printf("FLOATCON %s\n", yytext);
[ \t\n]+            ; // 忽略空格、制表符和换行符
.                   { parse_error("Unexpected character"); }

%%

void parse_error(char *msg) {
    fprintf(stderr, "%s\n", msg);
    exit(1);
}

void process_file(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening file %s\n", filename);
        exit(EXIT_FAILURE);
    }
    yyin = file;
    while(yylex());
    fclose(yyin);
}

int main(int argc, char **argv) {
    if (argc != 2) {
        yylex();
    }else{
        process_file(argv[1]);
    }
    yywrap();
}

int yywrap()
{
	return 1;
}

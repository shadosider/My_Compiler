%{
#include <stdio.h>
#include <string.h>
int yylex(void);
void yyerror(char *);
%}

%token IDENT INTCON FLOATCON NUM ADD SUB MUL DIV VAR END CR

%%

       line_list: line
                | line_list line
                ;

	       line : expression END CR 

      expression: IDENT     {printf("ID \n");}
                | INTCON     {printf("INTCON\n");}
                | FLOATCON   {printf("FLOATCON \n");}
                ;

%%

void yyerror(char *str){
    fprintf(stderr,"error:%s\n",str);
}

int yywrap(){
    return 1;
}
int main()
{
    yyparse();
}


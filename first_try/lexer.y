%{
#include <stdio.h>
#include <string.h>
int yylex(void);
void yyerror(char *);
%}

%token IDENT SIGN MUL Number LPARENT RPARENT LBRACKET RBRACKET LBRACE RBRACE END CR

%%

       line_list: line
                | line_list line
                ;

	       line : PrimaryExp END CR 
                ;

      PrimaryExp: LPARENT Exp RPARENT    /* 基本表达式的声明  */  
                | LVal       
                | Number  
                ;

             Exp: AddExp        /* 表达式的声明  */
                ;

          AddExp: MulExp AddExpTail  /* 加减表达式的声明  */
                ;

      AddExpTail: SIGN MulExp AddExpTail
                | /* empty */
                ;

          MulExp: UnaryExp MulExpTail   /* 乘除模表达式的声明  */
                ;

      MulExpTail: MUL UnaryExp MulExpTail
                | /* empty */
                ;

        UnaryExp: PrimaryExp    /* 单目运算符的声明注：!仅出现在条件表达式中   */
                | IDENT LPARENT FuncRParamsOpt RPARENT
                | '!' UnaryExp
                | '+' UnaryExp
                | '-' UnaryExp
                ;

  FuncRParamsOpt: /* empty */
                | FuncRParams
                ;

     FuncRParams: Exp           /* 函数实参表的声明  */
                | Exp ',' FuncRParams    
                ;

            LVal: IDENT LValTail    /* 左值表达式的声明  */
                ;

        LValTail: LBRACKET Exp RBRACKET LValTail
                | /* empty */   
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


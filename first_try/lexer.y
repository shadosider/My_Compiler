%{
#include <stdio.h>
#include <string.h>
int yylex(void);
void yyerror(char *);
%}

%token IDENT SIGN ASSIGN MUL VOID INT FLOAT UNARYOP CONST COMMA Number EQUAL OR AND WEIGHT IF ELSE WHILE BERAK CONTINUE RETURN LPARENT RPARENT LBRACKET RBRACKET LBRACE RBRACE END CR

%%

       line_list: line
                | line_list line
                ;

	       line : CompUnit CR 
                ;

        CompUnit: CompUnitOpt Decl       /* 编译单元 */
                | CompUnitOpt FuncDef
                ;

     CompUnitOpt: CompUnit
                |  /* empty */
                ;

            Decl: ConstDecl         /* 声明  */  
                | VarDecl
                ;

       ConstDecl: CONST BType ConstDef ConstDefTail END      /* 常量声明  */  

           BType: INT            /* 基本类型  */  
                | FLOAT
                ;

        ConstDef: IDENT ConstExpTail ASSIGN ConstInitVal
                ;

        ConstExp: AddExp           /* 常量表达式  */  
                ;

    ConstExpTail: LBRACKET ConstExp RBRACKET ConstExpTail 
                | /* empty */
                ;

    ConstInitVal: ConstExp              /* 常量初值  */  
                | LBRACE ConstInitValOpt RBRACE
                ;

 ConstInitValOpt: ConstInitVal ConstInitValTail
                | /* empty */
                ;

ConstInitValTail: COMMA ConstInitVal ConstInitValTail
                | /* empty */
                ;


    ConstDefTail: COMMA ConstDef ConstDefTail
                | /* empty */
                ;


         VarDecl: BType VarDef VarDeclTail END   /* 变量声明  */  
                ;

     VarDeclTail: COMMA VarDef VarDeclTail
                | /* empty */
                ;

          VarDef: IDENT ConstExpTail          /* 变量定义  */  
                | IDENT ConstExpTail ASSIGN InitVal
                ;

         InitVal: Exp                   /* 变量初值  */ 
                | LBRACE InitValOpt RBRACE  
                ;

      InitValOpt: InitVal InitValTail
                | /* empty */
                ;

     InitValTail: COMMA InitVal InitValTail
                | /* empty */
                ;

         FuncDef: FuncType IDENT LPARENT FuncFParamsOpt RPARENT Block  /* 函数定义  */ 
                ;

        FuncType: VOID      /* 函数类型 */
                | INT
                | FLOAT
                ;

     FuncFParams: FuncFParam FuncFParamTail     /* 函数形参表 */
                ;

      FuncFParam: BType IDENT ExpOPT        /* 函数形参 */
                ;

          ExpOPT: LBRACKET RBRACKET ExpTail
                | /* empty */
                ;

         ExpTail: LBRACKET Exp RBRACKET ExpTail
                | /* empty */
                ;


  FuncFParamTail: COMMA FuncFParam FuncFParamTail
                | /* empty */
                ;
    


  FuncFParamsOpt: FuncFParams
                | /* empty */
                ;

            Stmt: LVal ASSIGN Exp END       /* 语句  */  
                | ExpOpt END
                | Block
                | IF LPARENT Cond RPARENT Stmt StmtOpt
                | WHILE LPARENT Cond RPARENT Stmt
                | BERAK END
                | CONTINUE END
                | RETURN ExpOpt END
                ;
        
         StmtOpt: ELSE Stmt
                | /* empty */
                ;

           Block: LBRACE BlockItemTail RBRACE   /* 语句块  */  
                ;

       BlockItem: Decl          /* 语句块项  */  
                | Stmt
                ;

   BlockItemTail: BlockItem BlockItemTail
                | /* empty */
                ;

      PrimaryExp: LPARENT Exp RPARENT    /* 基本表达式  */  
                | LVal       
                | Number  
                ;

             Exp: AddExp        /* 表达式  */
                ;

          ExpOpt: Exp
                | /* empty */
                ;

            Cond: LOrExp        /* 条件表达式  */  
                ;

          AddExp: MulExp AddExpTail  /* 加减表达式  */
                ;

      AddExpTail: SIGN MulExp AddExpTail
                | /* empty */
                ;

          MulExp: UnaryExp MulExpTail   /* 乘除模表达式  */
                ;

      MulExpTail: MUL UnaryExp MulExpTail
                | /* empty */
                ;

        UnaryExp: PrimaryExp    /* 单目运算符 注：!仅出现在条件表达式中   */
                | IDENT LPARENT FuncRParamsOpt RPARENT
                | UNARYOP UnaryExp
                ;

  FuncRParamsOpt: /* empty */
                | FuncRParams
                ;

     FuncRParams: Exp           /* 函数实参表  */
                | Exp COMMA FuncRParams    
                ;

            LVal: IDENT LValTail    /* 左值表达式  */
                ;

        LValTail: LBRACKET Exp RBRACKET LValTail
                | /* empty */   
                ;

          LOrExp: LAndExp              /* 逻辑或表达式  */  
                | LOrExp OR LAndExp
                ;

         LAndExp: EqExp                 /* 逻辑与表达式  */  
                | LAndExp AND EqExp
                ;
            
           EqExp: RelExp                /* 相等性表达式  */  
                | EqExp EQUAL RelExp
                ;

          RelExp: AddExp                /* 关系表达式  */  
                | RelExp WEIGHT AddExp
                ;

          AddExp: MulExp                /* 加减表达式  */  
                | AddExp SIGN MulExp
                ;

          MulExp: UnaryExp              /* 乘除模表达式  */  
                | MulExp MUL UnaryExp
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


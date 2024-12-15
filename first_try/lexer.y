%{
#include <stdio.h>
#include <string.h>

extern FILE *yyin;  // 声明 yyin，指向输入文件
extern char* yytext;     // 引入 Flex 的当前词法单元文本

int yylex(void);
void yyerror(char *);

int indent_level = 0; // 用于控制缩进
void print_indent() {
    for (int i = 0; i < indent_level; i++) {
        printf("  ");
    }
}


%}

%union {
    int ival;      // 用于存储整数
    float fval;    // 用于存储浮点数
    char *strval;  // 用于存储字符串
}


%token <ival> INTCONST
%token <fval> FLOATCONST
%token <strval> INT VOID FLOAT IDENT PLUS MINUS ASSIGN MUL UNARYOP CONST COMMA EQUAL OR AND WEIGHT IF ELSE WHILE BREAK CONTINUE RETURN LPARENT RPARENT LBRACKET RBRACKET LBRACE RBRACE END
%type  <strval> FuncType

%%

        line_list: line
                | line_list line
                ;

	    line : CompUnit      {
                    indent_level++;
                }
                ;

        CompUnit: CompUnitOpt{
                    print_indent();
                    indent_level++;
                    printf("CompUnit (%d)\n", indent_level);
                } 
                FuncDef  {        /* 编译单元 */
                    
                }    
                | CompUnitOpt Decl     {
                    print_indent(); 
                    printf("Decl\n"); 
                    indent_level++; 
                }
                ;

     CompUnitOpt: CompUnit
                |  /* empty */
                ;

            Decl: ConstDecl         /* 声明  */  
                | VarDecl
                ;

       ConstDecl: CONST BType ConstDef ConstDefTail END;     /* 常量声明  */  

           

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
 
         FuncDef: FuncType IDENT LPARENT{
                    print_indent(); 
                    printf("FuncDef (%d)\n", indent_level); 
                    print_indent();
                    printf("FuncType (%d)\n", indent_level);
                    print_indent();
                    printf("Type: %s\n", $1);
                    print_indent();
                    printf("Ident: %s\n", $2);
                    print_indent();
                    printf("LPARENT\n");
                } 
                FuncFParamsOpt RPARENT{
                    print_indent();
                    printf("RPARENT\n");
                } 
                Block {  /* 函数定义  */
                    
                }
                ;
        /* 函数类型 */
        FuncType: VOID      { $$ = $1; }
                | INT       { $$ = $1; }     
                | FLOAT     { $$ = $1; }   
                ;
        /* 基本类型  */
           BType: INT       { $$ = $1; }  
                | FLOAT     { $$ = $1; }
                ;

     FuncFParams: FuncFParam FuncFParamTail     /* 函数形参表 */
                ;
    /* 函数形参 */
      FuncFParam: BType IDENT{
                    print_indent(); 
                    printf("FuncFParam (%d)\n", indent_level);
                    print_indent(); 
                    printf("BType (%d)\n", indent_level);
                    print_indent(); 
                    printf("Type: %s\n", $1);
                    print_indent();
                    printf("Ident: %s\n", $2);
                } 
                ExpOPT   
                ;

          ExpOPT: LBRACKET RBRACKET{
                    print_indent(); 
                    printf("LBRACKET\n");
                    print_indent(); 
                    printf("RBRACKET\n");
                }
                ExpTail
                | /* empty */
                ;

         ExpTail: LBRACKET{
                    print_indent(); 
                    printf("LBRACKET\n");
                } 
                Exp 
                RBRACKET{
                    print_indent(); 
                    printf("RBRACKET\n");
                } 
                ExpTail
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
                | BREAK END
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
                | INTCONST  
                | FLOATCONST  
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

      AddExpTail: PLUS MulExp AddExpTail
                | MINUS MulExp AddExpTail
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
                | AddExp PLUS MulExp
                | AddExp MINUS MulExp
                ;

          MulExp: UnaryExp              /* 乘除模表达式  */  
                | MulExp MUL UnaryExp
                ;







                 

%%

void yyerror(char *str){
    fprintf(stderr,"Error :%s\n",str);
}

int yywrap(){
    return 1;
}
int main(int argc, char *argv[])
{
    if (argc != 2) {  // 确保命令行参数正确
        //fprintf(stderr, "Usage: ./lexer <filename>\n");
        yyparse();
        return 0;
    }

    // 打开输入文件
    yyin = fopen(argv[1], "r");
    if (yyin == NULL) {  // 如果文件打开失败
        perror("Error opening file");
        return 1;
    }

    // 调用解析器
    yyparse();

    // 关闭文件
    fclose(yyin);
    return 0;
}


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
%type  <strval> FuncType BType

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
                | CompUnitOpt{
                    indent_level++; 
                }
                Decl
                ;

     CompUnitOpt: CompUnit
                |  /* empty */
                ;
            /* 声明  */
            Decl: {
                    print_indent();
                    printf("Decl\n"); 
                }
                ConstDecl           
                | {
                    print_indent();
                    printf("Decl\n"); 
                }
                VarDecl
                ;

       ConstDecl: CONST{
                    print_indent(); 
                    printf("ConstDecl (%d)\n", indent_level);
                }
                BType ConstDef ConstDefTail
                END{
                    print_indent();
                    printf("END\n");
                }
                ;     /* 常量声明  */  

           

        ConstDef: IDENT{
                    print_indent(); 
                    printf("ConstDef (%d)\n", indent_level);
                    print_indent(); 
                    printf("Ident: %s\n", $1);
                }
                ConstExpTail
                ASSIGN{
                    print_indent(); 
                    printf("ASSIGN\n");
                }
                ConstInitVal
                ;

        ConstExp: AddExp           /* 常量表达式  */  
                ;

    ConstExpTail: LBRACKET{
                    print_indent(); 
                    printf("LBRACKET\n");
                }
                ConstExp
                RBRACKET{
                    print_indent(); 
                    printf("RBRACKET\n");
                }
                ConstExpTail 
                | /* empty */
                ;

    ConstInitVal: ConstExp              /* 常量初值  */  
                | LBRACE{
                    print_indent(); 
                    printf("LBRACE\n");
                }
                ConstInitValOpt
                RBRACE{
                    print_indent(); 
                    printf("RBRACE\n");
                }
                ;

 ConstInitValOpt: ConstInitVal ConstInitValTail
                | /* empty */
                ;

ConstInitValTail: COMMA{
                    print_indent(); 
                    printf("COMMA\n");
                }
                ConstInitVal ConstInitValTail
                | /* empty */
                ;


    ConstDefTail: COMMA{
                    print_indent(); 
                    printf("COMMA\n");
                }
                ConstDef ConstDefTail
                | /* empty */
                ;

         /* 变量声明  */ 
         VarDecl: BType{
                    print_indent(); 
                    printf("VarDecl (%d)\n", indent_level);
                    print_indent(); 
                    printf("BType (%d)\n", indent_level);
                    print_indent(); 
                    printf("Type: %s\n", $1);
                }
                VarDef
                VarDeclTail
                END{
                    print_indent();
                    printf("END\n");
                }
                ;

     VarDeclTail: COMMA{
                    print_indent(); 
                    printf("COMMA\n");
                }
                VarDef VarDeclTail
                | /* empty */
                ;

          /* 变量定义  */
          VarDef: IDENT{
                    print_indent(); 
                    printf("VarDef (%d)\n", indent_level);
                    print_indent();
                    printf("Ident: %s\n", $1);
                }
                ConstExpTail
                | IDENT{
                    print_indent(); 
                    printf("VarDef (%d)\n", indent_level);
                    print_indent();
                    printf("Ident: %s\n", $1);
                }
                ConstExpTail
                ASSIGN{
                    print_indent(); 
                    printf("ASSIGN\n");
                }
                InitVal
                ;

         InitVal: Exp                   /* 变量初值  */ 
                | LBRACE{
                    print_indent(); 
                    printf("LBRACE\n");
                }
                InitValOpt
                RBRACE{
                    print_indent(); 
                    printf("RBRACE\n");
                }  
                ;

      InitValOpt: InitVal InitValTail
                | /* empty */
                ;

     InitValTail: COMMA{
                    print_indent(); 
                    printf("COMMA\n");
                }
                InitVal InitValTail
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
                    printf("FuncFParams (%d)\n", indent_level);
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


  FuncFParamTail: COMMA{
                    print_indent();
                    printf("COMMA (%d)\n", indent_level);
                } 
                FuncFParam FuncFParamTail
                | /* empty */
                ;
    


  FuncFParamsOpt: FuncFParams
                | /* empty */
                ;


            /* 语句  */
            Stmt: {
                    print_indent();
                    printf("Stmt (%d)\n", indent_level);
                }
                LVal
                ASSIGN{
                    print_indent(); 
                    printf("ASSIGN\n");
                }
                Exp
                END{
                    print_indent(); 
                    printf("END\n");
                }         
                | {
                    print_indent();
                    printf("Stmt (%d)\n", indent_level);
                }
                ExpOpt
                END{
                    print_indent(); 
                    printf("END\n");
                }
                | {
                    print_indent();
                    printf("Stmt (%d)\n", indent_level);
                }
                Block
                | {
                    print_indent();
                    printf("Stmt (%d)\n", indent_level);
                }
                IF LPARENT{
                    print_indent();
                    printf("IF\n");
                    print_indent();
                    printf("LPARENT\n");
                }
                Cond
                RPARENT{
                    print_indent();
                    printf("RPARENT\n");
                }
                Stmt StmtOpt
                | {
                    print_indent();
                    printf("Stmt (%d)\n", indent_level);
                }
                WHILE LPARENT{
                    print_indent();
                    printf("WHILE\n");
                    print_indent();
                    printf("LPARENT\n");
                }
                Cond
                RPARENT{
                    print_indent();
                    printf("RPARENT\n");
                }Stmt
                | {
                    print_indent();
                    printf("Stmt (%d)\n", indent_level);
                }
                BREAK END{
                    print_indent();
                    printf("BREAK\n");
                    print_indent();
                    printf("END\n");
                }
                | {
                    print_indent();
                    printf("Stmt (%d)\n", indent_level);
                }
                CONTINUE END{
                    print_indent();
                    printf("CONTINUE\n");
                    print_indent();
                    printf("END\n");
                }
                | {
                    print_indent();
                    printf("Stmt (%d)\n", indent_level);
                }
                RETURN{
                    print_indent();
                    printf("RETURN\n");
                }
                ExpOpt
                END{
                    print_indent();
                    printf("END\n");
                }
                ;
        
         StmtOpt: ELSE{
                    print_indent();
                    printf("ELSE\n");
                }Stmt
                | /* empty */
                ;

           Block: LBRACE{
                    print_indent();
                    printf("Block (%d)\n", indent_level);
                    print_indent();
                    printf("LBRACE\n");
                } 
                BlockItemTail 
                RBRACE{
                    print_indent();
                    printf("RBRACE\n");
                }   /* 语句块  */  
                ;
       /* 语句块项  */ 
       BlockItem: {
                    print_indent();
                    printf("BlockItem (%d)\n", indent_level);
                }
                Decl           
                | {
                    print_indent();
                    printf("BlockItem (%d)\n", indent_level);
                }
                Stmt
                ;

   BlockItemTail: BlockItem BlockItemTail
                | /* empty */
                ;

      /* 基本表达式  */
      PrimaryExp: LPARENT{
                    print_indent();
                    printf("PrimaryExp (%d)\n", indent_level);
                    print_indent();
                    printf("LPARENT\n");
                } 
                Exp 
                RPARENT{
                    print_indent();
                    printf("RPARENT\n");
                }      
                | LVal     
                | INTCONST{
                    print_indent();
                    printf("PrimaryExp (%d)\n", indent_level);
                    print_indent();
                    printf("Number (%d)\n", indent_level);
                    print_indent();
                    printf("INTCON: %d\n", $1);
                }  
                | FLOATCONST{
                    print_indent();
                    printf("PrimaryExp (%d)\n", indent_level);
                    print_indent();
                    printf("Number (%d)\n", indent_level);
                    print_indent();
                    printf("FLOATCON: %f\n", $1);
                }  
                ;

             /* 表达式  */
             Exp: {
                    print_indent();
                    printf("Exp (%d)\n", indent_level);
                }
                AddExp        
                ;

          ExpOpt: Exp
                | /* empty */
                ;

            Cond: {
                    print_indent();
                    printf("Cond (%d)\n", indent_level);
                }
                LOrExp        /* 条件表达式  */  
                ;

          AddExp: {
                    print_indent();
                    printf("AddExp (%d)\n", indent_level);
                }
                MulExp AddExpTail  /* 加减表达式  */
                ;

      AddExpTail: PLUS{
                    print_indent();
                    printf("PLUS: %s\n", $1);
                }
                MulExp AddExpTail
                | MINUS{
                    print_indent();
                    printf("MINUS: %s\n", $1);
                }
                MulExp AddExpTail
                | /* empty */
                ;

          MulExp: {
                    print_indent();
                    printf(" MulExp (%d)\n", indent_level);
                }
                UnaryExp MulExpTail   /* 乘除模表达式  */
                ;

      MulExpTail: MUL{
                    print_indent();
                    printf("MUL: %s\n", $1);
                }
                UnaryExp MulExpTail
                | /* empty */
                ;

        UnaryExp: {
                    print_indent();
                    printf("UnaryExp (%d)\n", indent_level);
                }
                PrimaryExp    /* 单目运算符 注：!仅出现在条件表达式中   */
                | {
                    print_indent();
                    printf("UnaryExp (%d)\n", indent_level);
                }
                IDENT LPARENT{
                    print_indent();
                    printf("Ident: %s\n", $2);
                    print_indent();
                    printf("LPARENT\n");
                }
                FuncRParamsOpt
                RPARENT{
                    print_indent();
                    printf("RPARENT\n");
                }
                | UNARYOP{
                    print_indent();
                    printf("UNARYOP: %s\n", $1);
                }
                UnaryExp
                ;

  FuncRParamsOpt: /* empty */
                | FuncRParams
                ;

    /* 函数实参表  */
     FuncRParams: Exp           
                | Exp COMMA{
                    print_indent();
                    printf("COMMA\n");
                }
                FuncRParams    
                ;

            /* 左值表达式  */
            LVal: IDENT{
                    print_indent();
                    printf("Lavl (%d)\n", indent_level);
                    print_indent();
                    printf("Ident: %s\n", $1);
                } 
                LValTail
                ;

        LValTail: LBRACKET{
                    print_indent();
                    printf("LBRACKET\n");
                }
                Exp
                RBRACKET{
                    print_indent();
                    printf("RBRACKET\n");
                }
                LValTail
                | /* empty */   
                ;

          LOrExp: {
                    print_indent();
                    printf("LOrExp (%d)\n", indent_level);
                }
                LAndExp              /* 逻辑或表达式  */  
                | {
                    print_indent();
                    printf("LOrExp (%d)\n", indent_level);
                }
                LOrExp
                OR{
                    print_indent();
                    printf("OR\n");
                }
                LAndExp
                ;

         LAndExp: {
                    print_indent();
                    printf("LAndExp (%d)\n", indent_level);
                }
                EqExp                 /* 逻辑与表达式  */  
                | {
                    print_indent();
                    printf("LAndExp (%d)\n", indent_level);
                }
                LAndExp
                AND{
                    print_indent();
                    printf("AND\n");
                }
                EqExp
                ;
            
           EqExp: {
                    print_indent();
                    printf("EqExp (%d)\n", indent_level);
                }
                RelExp                /* 相等性表达式  */  
                | {
                    print_indent();
                    printf("EqExp (%d)\n", indent_level);
                }
                EqExp
                EQUAL{
                    print_indent();
                    printf("EQUAL\n");
                }
                RelExp
                ;

          RelExp: {
                    print_indent();
                    printf("RelExp (%d)\n", indent_level);
                }
                AddExp                /* 关系表达式  */  
                | {
                    print_indent();
                    printf("RelExp (%d)\n", indent_level);
                }
                RelExp
                WEIGHT{
                    print_indent();
                    printf("WEIGHT\n");
                }
                AddExp
                ;

          AddExp: {
                    print_indent();
                    printf("AddExp (%d)\n", indent_level);
                }
                MulExp                /* 加减表达式  */  
                | {
                    print_indent();
                    printf("AddExp (%d)\n", indent_level);
                }
                AddExp
                PLUS{
                    print_indent();
                    printf("PLUS: %s\n", $3);
                }
                MulExp
                | {
                    print_indent();
                    printf("AddExp (%d)\n", indent_level);
                }
                AddExp
                MINUS{
                    print_indent();
                    printf("MINUS: %s\n", $3);
                }
                MulExp
                ;

          MulExp: {
                    print_indent();
                    printf("MulExp (%d)\n", indent_level);
                }
                UnaryExp              /* 乘除模表达式  */  
                | {
                    print_indent();
                    printf("MulExp (%d)\n", indent_level);
                }
                MulExp
                MUL{
                    print_indent();
                    printf("MUL");
                }
                UnaryExp
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


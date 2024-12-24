%{

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdarg.h>
#include "cst.h"
#include "lex.yy.h"

int yylex(void);



typedef const enum Error_type{
    Undefined,
    VarUndecleared,
    VarRedecleared,
    FuncUndecleared,
    FuncRedecleared,
    UseVarAsFunc,
    UseFuncAsVar,
    Stmt_Error
} Error_type;

void yyerror(const char *, ...);

extern bool error_flag;

node *root;

int error_cur_line = -1;

extern Symbol *symbol_table;

%}

%union {
    int ival;      // 用于存储整数
    float fval;    // 用于存储浮点数
    char *strval;  // 用于存储字符串
    struct Node *node_val;  //用于构建AST树
}

%token <strval> IDENT
%token <ival> INTCONST
%token <fval> FLOATCONST

%token <int_val> INT FLOAT VOID CONST RETURN IF ELSE WHILE BREAK CONTINUE LPARENT RPARENT LBRACKET RBRACKET LBRACE RBRACE COMMA END
%token <int_val> MINUS ASSIGN PLUS NOT AND OR LT LE GT GE NEQUAL EQUAL MUL MOD DIV

%type <node_val> CompUnit ConstDecl VarDecl FuncDef ConstDef ConstInitVal VarDef InitVal FuncFParam ConstExpArray Block
%type <node_val> Root BlockItem Stmt LVal PrimaryExp UnaryExp FuncRParams MulExp Exp RelExp EqExp LAndExp Cond ConstExp
%type <node_val> ExpArray AddExp LOrExp InitVals

%nonassoc ELSE 

%start Root

%locations

%%

Root: CompUnit {root = append(Root, NULL, NULL, $1, 0, 0, NULL, NonType, @1.first_line); };

CompUnit: ConstDecl             { $$ = append(CompUnit, NULL, NULL, $1, 0, 0, NULL, NonType, @1.first_line); }
        | VarDecl               { $$ = append(CompUnit, NULL, NULL, $1, 0, 0, NULL, NonType, @1.first_line); }
        | FuncDef               { $$ = append(CompUnit, NULL, NULL, $1, 0, 0, NULL, NonType, @1.first_line); }
        | ConstDecl CompUnit    { $$ = append(CompUnit, $2, NULL, $1, 0, 0, NULL, NonType, @1.first_line); }
        | VarDecl CompUnit      { $$ = append(CompUnit, $2, NULL, $1, 0, 0, NULL, NonType, @1.first_line); }
        | FuncDef CompUnit      { $$ = append(CompUnit, $2, NULL, $1, 0, 0, NULL, NonType, @1.first_line); }
        ;

ConstDecl: CONST INT ConstDef END    { $$ = append(ConstDecl, NULL, NULL, $3, END, 0, NULL, Int, @1.first_line); }
         | CONST FLOAT ConstDef END  {  $$ = append(ConstDecl, NULL, NULL, $3, END, 0, NULL, Float, @1.first_line); }
         ;

ConstDef: IDENT ConstExpArray ASSIGN ConstInitVal                  { 
                                                                    if(!check_symbol($1, Var)) 
                                                                        add_symbol($1, Var);
                                                                    else
                                                                        yyerror($1, VarRedecleared);
                                                                    $$ = append(ConstDef, NULL, $2, $4, 0, 0, $1, NonType, @1.first_line); 
                                                                }
        | IDENT ConstExpArray ASSIGN ConstInitVal COMMA ConstDef   { 
                                                                    if(!check_symbol($1, Var)) 
                                                                        add_symbol($1, Var);
                                                                    else
                                                                        yyerror($1, VarRedecleared);
                                                                    $$ = append(ConstDef, $6, $2, $4, 0, 0, $1, NonType, @1.first_line); 
                                                                }
        ;

ConstExpArray: /* empty */                      { $$ = NULL; }
             | LBRACKET ConstExp RBRACKET ConstExpArray     { $$ = append(ConstExpArray, $4, NULL, $2, 0, 0, NULL, NonType, @1.first_line); }
             ;

ConstInitVal: ConstExp                                  { $$ = append(ConstInitVal, NULL, NULL, $1, 0, 0, NULL, NonType, @1.first_line); }
            | LBRACE RBRACE                                     { $$ = append(ConstInitVal, NULL, NULL, NULL, 0, 0, NULL, NonType, @1.first_line); }
            | LBRACE ConstInitVal RBRACE                        { $$ = append(ConstInitVal, NULL, NULL, $2, 0, 0, NULL, NonType, @1.first_line); }
            | LBRACE ConstInitVal COMMA ConstInitVal RBRACE     { $$ = append(ConstInitVal, $4, NULL, $2, 0, 0, NULL, NonType, @1.first_line); }
            ;

ConstExp: MulExp                { $$ = append(ConstExp, NULL, NULL, $1, 0, 0, NULL, NonType, @1.first_line); }
        | MulExp PLUS Exp       { $$ = append(ConstExp, $3, NULL, $1, PLUS, 0, NULL, NonType, @1.first_line); }
        | MulExp MINUS Exp      { $$ = append(ConstExp, $3, NULL, $1, MINUS, 0, NULL, NonType, @1.first_line); }
        ;

VarDecl: INT VarDef END      { $$ = append(VarDecl, NULL, NULL, $2, 0, 0, NULL, Int, @1.first_line); }
       | FLOAT VarDef END    { $$ = append(VarDecl, NULL, NULL, $2, 0, 0, NULL, Float, @1.first_line); }
       ;
       
VarDef: IDENT ConstExpArray                                { 
                                                            if(!check_symbol($1, Var)) 
                                                                add_symbol($1, Var);
                                                            else
                                                                yyerror($1, VarRedecleared);
                                                            $$ = append(VarDef, NULL, $2, NULL, 0, 0, $1, NonType, @1.first_line); 
                                                        }
      | IDENT ConstExpArray ASSIGN InitVal                 { 
                                                            if(!check_symbol($1, Var)) 
                                                                add_symbol($1, Var);
                                                            else
                                                                yyerror($1, VarRedecleared);
                                                            $$ = append(VarDef, NULL, $2, $4, 0, 0, $1, NonType, @1.first_line); 
                                                        }
      | IDENT ConstExpArray COMMA VarDef                   { 
                                                            if(!check_symbol($1, Var)) 
                                                                add_symbol($1, Var);
                                                            else
                                                                yyerror($1, VarRedecleared);
                                                            $$ = append(VarDef, $4, $2, NULL, 0, 0, $1, NonType, @1.first_line); 
                                                        }
      | IDENT ConstExpArray ASSIGN InitVal COMMA VarDef    { 
                                                            if(!check_symbol($1, Var)) 
                                                                add_symbol($1, Var);
                                                            else
                                                                yyerror($1, VarRedecleared);
                                                            $$ = append(VarDef, $6, $2, $4, 0, 0, $1, NonType, @1.first_line); 
                                                        }
      ;

InitVal: Exp            { $$ = append(InitVal, NULL, NULL, $1, Exp, 0, NULL, NonType, @1.first_line); }
       | LBRACE RBRACE          { $$ = append(InitVal, NULL, NULL, NULL, InitVals, 0, NULL, NonType, @1.first_line); }
       | LBRACE InitVals RBRACE { $$ = append(InitVal, NULL, NULL, $2, InitVals, 0, NULL, NonType, @1.first_line); }
       ;

InitVals: InitVal                       { $$ = append(InitVals, NULL, NULL, $1, 0, 0, NULL, NonType, @1.first_line); }
        | InitVal COMMA InitVals        { $$ = append(InitVals, $3, NULL, $1, 0, 0, NULL, NonType, @1.first_line); }
        ;

FuncDef: INT IDENT LPARENT RPARENT Block                     { 
                                                    if(!check_symbol($2, Func)) 
                                                        add_symbol($2, Func);
                                                    else
                                                        yyerror($2, FuncRedecleared);
                                                    $$ = append(FuncDef, NULL, NULL, $5, 0, 0, $2, Int, @1.first_line); 
                                                }
       | FLOAT IDENT LPARENT RPARENT Block                   { 
                                                    if(!check_symbol($2, Func)) 
                                                        add_symbol($2, Func);
                                                    else
                                                        yyerror($2, FuncRedecleared);
                                                    $$ = append(FuncDef, NULL, NULL, $5, 0, 0, $2, Float, @1.first_line); 
                                                }
       | VOID IDENT LPARENT RPARENT Block                    { 
                                                    if(!check_symbol($2, Func)) 
                                                        add_symbol($2, Func);
                                                    else
                                                        yyerror($2, FuncRedecleared);
                                                    $$ = append(FuncDef, NULL, NULL, $5, 0, 0, $2, Void, @1.first_line); 
                                                }
       | INT IDENT LPARENT FuncFParam RPARENT Block          { 
                                                    if(!check_symbol($2, Func)) 
                                                        add_symbol($2, Func);
                                                    else
                                                        yyerror($2, FuncRedecleared);
                                                    $$ = append(FuncDef, NULL, $4, $6, 0, 0, $2, Int, @1.first_line); 
                                                }
       | FLOAT IDENT LPARENT FuncFParam RPARENT Block        { 
                                                    if(!check_symbol($2, Func)) 
                                                        add_symbol($2, Func);
                                                    else
                                                        yyerror($2, FuncRedecleared);
                                                    $$ = append(FuncDef, NULL, $4, $6, 0, 0, $2, Float, @1.first_line); 
                                                }
       | VOID IDENT LPARENT FuncFParam RPARENT Block         { 
                                                    if(!check_symbol($2, Func)) 
                                                        add_symbol($2, Func);
                                                    else
                                                        yyerror($2, FuncRedecleared);
                                                    $$ = append(FuncDef, NULL, $4, $6, 0, 0, $2, Void, @1.first_line); 
                                                }
       ;

FuncFParam: INT IDENT                                      { 
                                                            if(!check_symbol($2,Param))
                                                                add_symbol($2,Param);
                                                            $$ = append(FuncFParam, NULL, NULL, NULL, 0, 0, $2, Int, @1.first_line); 
                                                        }
          | FLOAT IDENT                                    { 
                                                            if(!check_symbol($2,Param))
                                                                add_symbol($2,Param);
                                                            $$ = append(FuncFParam, NULL, NULL, NULL, 0, 0, $2, Float, @1.first_line); 
                                                        }
          | INT IDENT LBRACKET RBRACKET ExpArray                       { 
                                                            if(!check_symbol($2,Param))
                                                                add_symbol($2,Param);
                                                            $$ = append(FuncFParam, NULL, NULL, $5, 0, 0, $2, Int, @1.first_line); 
                                                        }
          | FLOAT IDENT LBRACKET RBRACKET ExpArray                     { 
                                                            if(!check_symbol($2,Param))
                                                                add_symbol($2,Param);
                                                            $$ = append(FuncFParam, NULL, NULL, $5, 0, 0, $2, Float, @1.first_line); 
                                                        }
          | INT IDENT COMMA FuncFParam                     {   
                                                            if(!check_symbol($2,Param))
                                                                add_symbol($2,Param);
                                                            $$ = append(FuncFParam, $4, NULL, NULL, 0, 0, $2, Int, @1.first_line); 
                                                        }
          | FLOAT IDENT COMMA FuncFParam                   { 
                                                            if(!check_symbol($2,Param))
                                                                add_symbol($2,Param);
                                                            $$ = append(FuncFParam, $4, NULL, NULL, 0, 0, $2, Float, @1.first_line); 
                                                        }
          | INT IDENT LBRACKET RBRACKET ExpArray COMMA FuncFParam      {
                                                            if(!check_symbol($2,Param))
                                                                add_symbol($2,Param);
                                                            $$ = append(FuncFParam, $7, NULL, $5, 0, 0, $2, Int, @1.first_line); 
                                                        }
          | FLOAT IDENT LBRACKET RBRACKET ExpArray COMMA FuncFParam    { 
                                                            if(!check_symbol($2,Param))
                                                                add_symbol($2,Param);
                                                            $$ = append(FuncFParam, $7, NULL, $5, 0, 0, $2, Float, @1.first_line); 
                                                        }
          ;

Block: LBRACE BlockItem RBRACE {  $$ = append(Block, NULL, NULL, $2, 0, 0, NULL, NonType, @1.first_line); };

BlockItem: /* empty */          { $$ = NULL; }
         | ConstDecl BlockItem  { $$ = append(BlockItem, $2, NULL, $1, 0, 0, NULL, NonType, @1.first_line); }
         | VarDecl BlockItem    { $$ = append(BlockItem, $2, NULL, $1, 0, 0, NULL, NonType, @1.first_line); }
         | Stmt BlockItem       { $$ = append(BlockItem, $2, NULL, $1, 0, 0, NULL, NonType, @1.first_line); }
         ;

Stmt: LVal ASSIGN Exp END         { $$ = append(AssignStmt, $3, NULL, $1, 0, 0, NULL, NonType, @1.first_line); }
    | Exp END                     { $$ = append(ExpStmt, NULL, NULL, $1, 0, 0, NULL, NonType, @1.first_line); }
    | Block                          { $$ = append(BlockStmt, NULL, NULL, $1, 0, 0, NULL, NonType, @1.first_line); }
    | IF LPARENT Cond RPARENT Stmt             { $$ = append(IfStmt, $5, NULL, $3, 0, 0, NULL, NonType, @1.first_line); }
    | IF LPARENT Cond RPARENT Stmt ELSE Stmt   { $$ = append(IfElseStmt, $7, $5, $3, 0, 0, NULL, NonType, @1.first_line); }
    | WHILE LPARENT Cond RPARENT Stmt          { $$ = append(WhileStmt, $5, NULL, $3, 0, 0, NULL, NonType, @1.first_line); }
    | BREAK END                   { $$ = append(BreakStmt, NULL, NULL, NULL, 0, 0, NULL, NonType, @1.first_line); }
    | CONTINUE END                { $$ = append(ContinueStmt, NULL, NULL, NULL, 0, 0, NULL, NonType, @1.first_line); }
    | RETURN Exp END              { $$ = append(ReturnStmt, NULL, NULL, $2, 0, 0, NULL, NonType, @1.first_line); }
    | RETURN END                  { $$ = append(BlankReturnStmt, NULL, NULL, NULL, 0, 0, NULL, NonType, @1.first_line); }
    | error                          { 
                                        if(error_cur_line != yylineno) 
                                        {
                                            yyerror("", Stmt_Error);
                                            error_cur_line = yylineno;
                                        } 
                                        yyclearin; 
                                        yyerrok; 
                                     }
    ;

Exp: AddExp     { $$ = append(Exp, NULL, NULL, $1, 0, 0, NULL, NonType, @1.first_line); };

AddExp: MulExp                  { $$ = append(AddExp, NULL, NULL, $1, Mul, 0, NULL, NonType, @1.first_line); }
      | MulExp PLUS AddExp      { $$ = append(AddExp, $3, NULL, $1, Plus, 0, NULL, NonType, @1.first_line); }
      | MulExp MINUS AddExp     { $$ = append(AddExp, $3, NULL, $1, Minus, 0, NULL, NonType, @1.first_line); }
      ;

MulExp: UnaryExp                { $$ = append(MulExp, NULL, NULL, $1, UnaryExp, 0, NULL, NonType, @1.first_line); }
      | UnaryExp MUL MulExp     { $$ = append(MulExp, $3, NULL, $1, Mul, 0, NULL, NonType, @1.first_line); }
      | UnaryExp DIV MulExp     { $$ = append(MulExp, $3, NULL, $1, Div, 0, NULL, NonType, @1.first_line); }
      | UnaryExp MOD MulExp     { $$ = append(MulExp, $3, NULL, $1, Mod, 0, NULL, NonType, @1.first_line); }
      ;

UnaryExp: PrimaryExp            { $$ = append(UnaryExp, NULL, NULL, $1, PrimaryExp, 0, NULL, NonType, @1.first_line); }
        | IDENT LPARENT RPARENT              { 
                                    if(check_symbol($1, Var))
                                        yyerror($1, UseVarAsFunc);
                                    else if(!check_symbol($1, Func))
                                        yyerror($1, FuncUndecleared);
                                    $$ = append(UnaryExp, NULL, NULL, NULL, FuncRParams, 0, $1, NonType, @1.first_line); 
                                }
        | IDENT LPARENT FuncRParams RPARENT  { 
                                    if(check_symbol($1, Var))
                                        yyerror($1, UseVarAsFunc);
                                    else if(!check_symbol($1, Func))
                                        yyerror($1, FuncUndecleared);
                                    $$ = append(UnaryExp, NULL, NULL, $3, FuncRParams, 0, $1, NonType, @1.first_line); 
                                }
        | PLUS UnaryExp         { $$ = append(UnaryExp, NULL, NULL, $2, PLUS, 0, NULL, NonType, @1.first_line); }
        | MINUS UnaryExp        { $$ = append(UnaryExp, NULL, NULL, $2, MINUS, 0, NULL, NonType, @1.first_line); }
        | NOT UnaryExp          { $$ = append(UnaryExp, NULL, NULL, $2, Not, 0, NULL, NonType, @1.first_line); }
        ;
        
FuncRParams: Exp                        { $$ = append(FuncRParams, NULL, NULL, $1, 0, 0, NULL, NonType, @1.first_line); }
           | Exp COMMA FuncRParams      { $$ = append(FuncRParams, $3, NULL, $1, 0, 0, NULL, NonType, @1.first_line); }
           ;

PrimaryExp: LPARENT Exp RPARENT   { $$ = append(PrimaryExp, NULL, NULL, $2, Exp, 0, NULL, NonType, @1.first_line); }
          | LVal        { $$ = append(PrimaryExp, NULL, NULL, $1, LVal, 0, NULL, NonType, @1.first_line); }
          | INTCONST     { $$ = append(PrimaryExp, NULL, NULL, NULL, $1, 0, NULL, Int, @1.first_line); }
          | FLOATCONST   { $$ = append(PrimaryExp, NULL, NULL, NULL, 0, $1, NULL, Float, @1.first_line); }
          ;

LVal: IDENT ExpArray       {
                            if(check_symbol($1, Func))
                                yyerror($1, UseFuncAsVar);
                            else if(!check_symbol($1,Var) && !check_symbol($1,Param))
                                yyerror($1, VarUndecleared); 
                            $$ = append(LVal, NULL, NULL, $2, 0, 0, $1, NonType, @1.first_line); 
                        };

Cond: LOrExp            { $$ = append(Cond, NULL, NULL, $1, 0, 0, NULL, NonType, @1.first_line); };

LOrExp: LAndExp                 { $$ = append(Cond, NULL, NULL, $1, 0, 0, NULL, NonType, @1.first_line); }
      | LAndExp OR LOrExp       { $$ = append(Cond, $3, NULL, $1, OR, 0, 0, NonType, @1.first_line); }
      ;

LAndExp: EqExp                  { $$ = append(LAndExp, NULL, NULL, $1, 0, 0, NULL, NonType, @1.first_line); }
       | EqExp AND LAndExp      { $$ = append(LAndExp, $3, NULL, $1, AND, 0, NULL, NonType, @1.first_line); }
       ;

EqExp: RelExp           { $$ = append(EqExp, NULL, NULL, $1, 0, 0, NULL, NonType, @1.first_line); }
     | RelExp EQUAL EqExp  { $$ = append(EqExp, $3, NULL, $1, EQUAL, 0, NULL, NonType, @1.first_line); }
     | RelExp NEQUAL EqExp  { $$ = append(EqExp, $3, NULL, $1, NEQUAL, 0, NULL, NonType, @1.first_line); }
     ;

RelExp: AddExp           { $$ = append(RelExp, NULL, NULL, $1, 0, 0, NULL, NonType, @1.first_line); }
      | AddExp LT RelExp { $$ = append(RelExp, $3, NULL, $1, LT, 0, NULL, NonType, @1.first_line); }
      | AddExp GT RelExp { $$ = append(RelExp, $3, NULL, $1, GT, 0, NULL, NonType, @1.first_line); }
      | AddExp LE RelExp { $$ = append(RelExp, $3, NULL, $1, LE, 0, NULL, NonType, @1.first_line); }
      | AddExp GE RelExp { $$ = append(RelExp, $3, NULL, $1, GE, 0, NULL, NonType, @1.first_line); }
      ;

ExpArray: /* empty */           { $$ = NULL; }
        | LBRACKET Exp RBRACKET ExpArray    { $$ = append(ExpArray, $4, NULL, $2, 0, 0, NULL, NonType, @1.first_line); }
        ;

%%

void yyerror(const char *fmt, ...)
{
    extern int yylineno;
    extern char *yytext;
    extern int yychar;

    va_list args;
    va_start(args, fmt);

    if(fmt!="syntax error")
        switch(va_arg(args, int))
        {
            case VarUndecleared:
                fprintf(stderr, "Error type %d at line %d : var '%s' undeclared\n", VarUndecleared, yylineno, fmt);
                break;
            case VarRedecleared:
                fprintf(stderr, "Error type %d at line %d : var '%s' redeclared\n", VarRedecleared, yylineno, fmt);
                break;
            case FuncUndecleared:
                fprintf(stderr, "Error type %d at line %d : func '%s' undeclared\n", FuncUndecleared, yylineno, fmt);
                break;
            case FuncRedecleared:
                fprintf(stderr, "Error type %d at line %d : func '%s' redeclared\n", FuncRedecleared, yylineno, fmt);
                break;
            case UseVarAsFunc:
                fprintf(stderr, "Error type %d at line %d : var '%s' be used as func\n", UseVarAsFunc, yylineno, fmt);
                break;
            case UseFuncAsVar:
                fprintf(stderr, "Error type %d at line %d : func '%s' be used as var\n", UseFuncAsVar, yylineno, fmt);
                break;
            case Stmt_Error:
                fprintf(stderr, "Error type %d at line %d : semantic error\n", Stmt_Error, yylineno);
                break;
            default:
                fprintf(stderr, "Undefined error at line %d : %s\n", yylineno, fmt);
        }
        /* fprintf(stderr, "Error type %d at line %d : '%s'\n", va_arg(args, int), yylineno, fmt); */

    va_end(args);

    error_flag = true;
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *f = fopen(argv[1], "r");
    if (!f)
    {
        perror("fopen");
        return 1;
    }

    YY_BUFFER_STATE bp = yy_create_buffer(f, YY_BUF_SIZE);
    yy_switch_to_buffer(bp);

    yyparse();

    yy_delete_buffer(bp);

    fclose(f);

    if(!error_flag) 
        print_tree(root,0);
    return 0;
}
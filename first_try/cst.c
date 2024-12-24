#include "cst.h"

Symbol *symbol_table = NULL;

void printline(int depth){
    for (int i = 0; i < depth; i++)
        printf(" ");
}

bool add_symbol(const char *name, symbol_type type)
{
    Symbol *symbol = symbol_table;
    while (symbol)
    {
        if (strcmp(symbol->name, name) == 0 && symbol->type == type)
            return false;
        symbol = symbol->next;
    }
    symbol = (Symbol *)malloc(sizeof(Symbol));
    symbol->name = strdup(name);
    symbol->type = type;
    symbol->next = symbol_table;
    symbol_table = symbol;
    return true;
}

bool check_symbol(const char *name, symbol_type type)
{
    Symbol *symbol = symbol_table;
    while (symbol)
    {
        if (strcmp(symbol->name, name) == 0 && symbol->type == type)
            return true;
        symbol = symbol->next;
    }
    return false;
}

node *append(node_type type, node *left, node *mid, node *right, int int_val, float float_val, char *id, node_type ntype,int line)
{
    node *n = (node *)malloc(sizeof(node));
    n->type = type;
    n->left = left;
    n->mid = mid;
    n->right = right;
    n->int_val = int_val;
    n->float_val = float_val;
    n->id = id;
    n->ntype = ntype;
    n->line = line;
    return n;
}

void print_tree(node *root, int depth)
{
    if (root == NULL)
        return;
    for (int i = 0; i < depth; i++)
        printf(" ");
    switch (root->type)
    {
    case Root:
        //printf("Root\n");
        print_tree(root->right, depth);
        break;

    case CompUnit:
        printf("CompUnit (%d)\n", root->line);
        print_tree(root->right, depth + 1);
        print_tree(root->left, depth);
        break;

    case ConstDecl:
        printf("ConstDecl\n");
        print_tree(root->right, depth + 1);
        printline(depth+2);
        printf("SEMICN\n");
        break;

    case ConstDef:
        printf("ConstDef: %s\n", root->id);
        print_tree(root->mid, depth + 1);
        print_tree(root->right, depth + 1);
        print_tree(root->left, depth + 1);
        break;

    case ConstExpArray:
        printf("ConstExpArray\n");
        print_tree(root->right, depth + 1);
        print_tree(root->left, depth + 1);
        break;

    case ConstInitVal:
        printf("ConstInitVal\n");
        print_tree(root->right, depth + 1);
        print_tree(root->left, depth + 1);
        break;

    case ConstExp:
        printf("ConstExp\n");
        print_tree(root->right, depth + 1);
        if (root->int_val == Plus)
        {
            for (int i = 0; i < depth + 1; i++)
                printf(" ");
            printf("ExpType: +\n");
        }
        else if (root->int_val == Minus)
        {
            for (int i = 0; i < depth + 1; i++)
                printf(" ");
            printf("ExpType: -\n");
        }
        print_tree(root->left, depth + 1);
        break;

    case VarDecl:
        printf("Decl (%d)\n",root->line);
        printline(depth+1);
        printf("VarDecl(%d)\n",root->line);
        if (root->ntype == Int)
        {
            printline(depth+2);
            printf("BType(%d)\n",root->line);
            printline(depth+3);
            printf("Type: int\n");
        }
        if (root->ntype == Float)
        {
            printline(depth+2);
            printf("BType(%d)\n",root->line);
            printline(depth+3   );
            printf("Type: int\n");
        }
        print_tree(root->right, depth + 2);
        printline(depth+2);
        printf("SEMICN\n");
        break;

    case VarDef:
        printf("VarDef: (%d)\n", root->line);
        printline(depth+1);
        printf("Ident: %s\n", root->id);
        print_tree(root->mid, depth + 1);
        print_tree(root->right, depth + 1);
        print_tree(root->left, depth + 1);
        break;

    case InitVal:
        printf("InitVal\n");
        print_tree(root->right, depth + 1);
        break;

    case InitVals:
        printf("InitVals\n");
        print_tree(root->right, depth + 1);
        print_tree(root->left, depth + 1);
        break;

    case FuncDef:
        printf("FuncDef (%d) \n", root->line);
        for (int i = 0; i < depth + 1; i++)
            printf(" ");
        printf("FuncType (%d) \n", root->line);
        if (root->ntype == Int)
        {
            for (int i = 0; i < depth + 2; i++)
                printf(" ");
            printf("Type: int\n");
        }
        if (root->ntype == Float)
        {
            for (int i = 0; i < depth + 2; i++)
                printf(" ");
            printf("Type: float\n");
        }
        if (root->ntype == Void)
        {
            for (int i = 0; i < depth + 2; i++)
                printf(" ");
            printf("Type: void\n");
        }
        for (int i = 0; i < depth+1; i++)
            printf(" ");
        printf("Ident: %s\n", root->id);
        if(!root->mid){
            printline(depth+1);
            printf("LPARENT\n");
            printline(depth+1);
            printf("RPARENT\n");
        }else 
            print_tree(root->mid, depth + 1);
        print_tree(root->right, depth + 1);
        
        break;

    case FuncFParam:
        printf("FuncFParam: %s\n", root->id);
        print_tree(root->right, depth + 1);
        print_tree(root->left, depth + 1);
        break;

    case Block:
        printf("Block (%d) \n", root->line);
        int D=depth+1;
        printline(D);
        printf("LBRACE\n");
        print_tree(root->right, depth + 1);
        printline(D);
        printf("RBRACE\n");
        break;

    case BlockItem:
        printf("BlockItem(%d) \n", root->line);
        print_tree(root->right, depth + 1);
        print_tree(root->left, depth);
        break;

    case AssignStmt:
        printf("AssignStmt(%d)\n",root->line);
        print_tree(root->right, depth + 1);
        printline(depth+1);
        printf("ASSIGN\n");
        print_tree(root->left, depth + 1);
        printline(depth+2);
        printf("SEMICN\n");
        break;

    case ExpStmt:
        printf("ExpStmt\n");
        print_tree(root->right, depth + 1);
        printline(depth+2);
        printf("SEMICN\n");
        break;

    case BlockStmt:
        printf("BlankStmt\n");
        print_tree(root->right, depth + 1);
        break;

    case IfStmt:
        printf("IfStmt\n");
        print_tree(root->right, depth + 1);
        print_tree(root->left, depth + 1);
        break;

    case IfElseStmt:
        printf("IfElseStmt\n");
        print_tree(root->right, depth + 1);
        print_tree(root->mid, depth + 1);
        print_tree(root->left, depth + 1);
        break;

    case WhileStmt:
        printf("WhileStmt\n");
        print_tree(root->right, depth + 1);
        print_tree(root->left, depth + 1);
        break;

    case BreakStmt:
        printf("BreakStmt\n");
        printline(depth+2);
        printf("SEMICN\n");
        break;

    case ContinueStmt:
        printf("ContinueStmt\n");
        printline(depth+2);
        printf("SEMICN\n");
        break;

    case ReturnStmt:
        printf("ReturnStmt\n");
        print_tree(root->right, depth + 1);
        printline(depth+2);
        printf("SEMICN\n");
        break;

    case BlankReturnStmt:
        printf("BlankReturnStmt\n");
        printline(depth+2);
        printf("SEMICN\n");
        break;

    case Exp:
        printf("Exp(%d)\n", root->line);
        print_tree(root->right, depth + 1);
        break;

    case AddExp:
        printf("AddExp(%d)\n", root->line);
        print_tree(root->right, depth + 1);
        if (root->int_val == Plus)
        {
            for (int i = 0; i < depth + 1; i++)
                printf(" ");
            printf("ExpType:PLUS +\n");
        }
        else if (root->int_val == Minus)
        {
            for (int i = 0; i < depth + 1; i++)
                printf(" ");
            printf("ExpType:MINUS -\n");
        }
        print_tree(root->left, depth + 1);
        break;

    case MulExp:
        printf("MulExp(%d)\n", root->line);
        print_tree(root->right, depth + 1);
        if (root->int_val == Mul)
        {
            for (int i = 0; i < depth + 1; i++)
                printf(" ");
            printf("ExpType:MUL *\n");
        }
        else if (root->int_val == Div)
        {
            for (int i = 0; i < depth + 1; i++)
                printf(" ");
            printf("ExpType:DIV /\n");
        }
        else if (root->int_val == Mod)
        {
            for (int i = 0; i < depth + 1; i++)
                printf(" ");
            printf("ExpType:MOD %%\n");
        }
        print_tree(root->left, depth + 1);
        break;

    case UnaryExp:
        printf("UnaryExp(%d)\n", root->line);
        if (root->int_val == Not)
        {
            for (int i = 0; i < depth + 1; i++)
                printf(" ");
            printf("ExpType:NOT !\n");
        }
        else if (root->int_val == PLUS)
        {
            for (int i = 0; i < depth + 1; i++)
                printf(" ");
            printf("ExpType: ++\n");
        }
        else if (root->int_val == MINUS)
        {
            for (int i = 0; i < depth + 1; i++)
                printf(" ");
            printf("ExpType: --\n");
        }
        print_tree(root->right, depth + 1);
        break;

    case FuncRParams:
        printf("FuncRParams\n");
        print_tree(root->right, depth + 1);
        print_tree(root->left, depth + 1);
        break;

    case PrimaryExp:
        printf("PrimaryExp(%d)\n", root->line);
        if (root->ntype == Int)
        {
            for (int i = 0; i < depth + 1; i++)
                printf(" ");
            printf("INTCON: %d\n", root->int_val);
        }
        else if (root->ntype == Float)
        {
            for (int i = 0; i < depth + 1; i++)
                printf(" ");
            printf("FLOATCON: %f\n", root->float_val);
        }
        print_tree(root->right, depth + 1);
        break;

    case LVal:
        printf("LVal (%d)\n", root->line);
        printline(depth+1);
        printf("Ident: %s\n",root->id);
        print_tree(root->right, depth + 1);
        break;

    case ExpArray:
        printf("ExpArray\n");
        print_tree(root->right, depth + 1);
        print_tree(root->left, depth + 1);
        break;

    case Cond:
        printf("Cond\n");
        print_tree(root->right, depth + 1);
        break;

    case LOrExp:
        printf("LOrExp\n");
        print_tree(root->right, depth + 1);
        if (root->int_val == OR)
        {
            for (int i = 0; i < depth + 1; i++)
                printf(" ");
            printf("ExpType: ||\n");
        }
        print_tree(root->left, depth + 1);
        break;

    case LAndExp:
        printf("LAndExp\n");
        print_tree(root->right, depth + 1);
        if (root->int_val == AND)
        {
            for (int i = 0; i < depth + 1; i++)
                printf(" ");
            printf("ExpType: &&\n");
        }
        print_tree(root->left, depth + 1);
        break;

    case EqExp:
        printf("EqExp\n");
        print_tree(root->right, depth + 1);
        if (root->int_val == EQUAL)
        {
            for (int i = 0; i < depth + 1; i++)
                printf(" ");
            printf("ExpType: ==\n");
        }
        else if (root->int_val == NEQUAL)
        {
            for (int i = 0; i < depth + 1; i++)
                printf(" ");
            printf("ExpType: !=\n");
        }
        print_tree(root->left, depth + 1);
        break;

    case RelExp:
        printf("RelExp\n");
        print_tree(root->right, depth + 1);
        if (root->int_val == LT)
        {
            for (int i = 0; i < depth + 1; i++)
                printf(" ");
            printf("ExpType: <\n");
        }
        else if (root->int_val == GT)
        {
            for (int i = 0; i < depth + 1; i++)
                printf(" ");
            printf("ExpType: >\n");
        }
        else if (root->int_val == LE)
        {
            for (int i = 0; i < depth + 1; i++)
                printf(" ");
            printf("ExpType: <=\n");
        }
        else if (root->int_val == GE)
        {
            for (int i = 0; i < depth + 1; i++)
                printf(" ");
            printf("ExpType: >=\n");
        }
        print_tree(root->left, depth + 1);
        break;

    case NonType:
        printf("NonType\n");
        break;

    default:
        break;
    }
}
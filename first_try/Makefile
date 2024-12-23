LEX = flex
YACC = bison
CC = gcc

LEX_FILE = lexer.l
YACC_FILE = lexer.y

LEX_OUTPUT = lex.yy.c
YACC_OUTPUT = y.tab.c
YACC_HEADER = y.tab.h

CST_FUNC = cst.c 

EXEC = lexer

all: $(EXEC)

$(LEX_OUTPUT): $(LEX_FILE)
	$(LEX) $(LEX_FILE)

$(YACC_OUTPUT) $(YACC_HEADER): $(YACC_FILE)
	$(YACC) -vdty $(YACC_FILE)

$(EXEC): $(LEX_OUTPUT) $(YACC_OUTPUT) $(CST_FUNC)
	$(CC) -o $(EXEC) $(LEX_OUTPUT) $(YACC_OUTPUT) $(CST_FUNC) -lfl

clean:
	rm -f $(LEX_OUTPUT) $(YACC_OUTPUT) $(YACC_HEADER) $(EXEC) y.output
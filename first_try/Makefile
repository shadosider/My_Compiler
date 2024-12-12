# Makefile

# 定义变量，默认值为test
NAME = lexer

# 目标：编译生成可执行文件
$(NAME): y.tab.c lex.yy.c
	gcc -o $(NAME) y.tab.c lex.yy.c

# 目标：生成y.tab.c文件
y.tab.c: $(NAME).y
	bison --yacc -dv $(NAME).y

# 目标：生成lex.yy.c文件
lex.yy.c: $(NAME).l
	flex $(NAME).l

# 默认目标
.PHONY: clean
clean:
	rm -f $(NAME) y.tab.c lex.yy.c y.tab.h y.output

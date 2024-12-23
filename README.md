# My_Compiler

这是504小组的编译原理大作业

个人理解：flex用于简单的声明，bison实现复杂的逻辑

```
.
├── README.md
├── Sy_Test #存放任务一中的测试用例
│   ├── note.txt    #记录测试用例是否通过
│   ├── test1.sy    #int型的加减乘除和取余
│   ├── test2.sy    #条件语句
│   ├── test3.sy    #while循环语句  ✔
│   ├── test4.sy    #函数调用
│   ├── test5.sy    #int型数组
│   ├── test6.sy    #int型二维数组和循环嵌套
│   ├── test7.sy    #常量和全局变量 
│   ├── test8.sy    #逻辑与和逻辑或
│   └── test9.sy    #float型的加减乘除  ✔
├── bison_test  #联合使用flex和bison的测试用例
│   ├── Makefile
│   ├── test.l
│   └── test.y
├── first_try   #项目原文件
│   ├── Makefile
│   ├── lex.yy.c
│   ├── lexer
│   ├── lexer.l
│   ├── lexer.y
│   ├── test.sy
│   ├── y.output
│   ├── y.tab.c
│   └── y.tab.h
├── flex_test   #使用flex的测试用例
│   ├── image-1.png
│   ├── image.png
│   ├── lex.yy.c
│   ├── lexer
│   └── lexer.l
├── lab4        #陌生人的项目
├── pattern.md
└── template    #模板定义
    ├── SysY2022语言定义-V1.pdf
    ├── temp.l
    └── temp.y

```


## Installation of Prerequisites

```
sudo apt-get install flex  
sudo apt-get install bison
```

## Usage
### flex：词法分析

* 编写lexer.l文件，测试用例中实现了echo所有的整数等内容
* 生成lex.yy.c
```
flex lexer.l
```
* 生成执行文件，其中lexer是生成的执行文件名
```
gcc -o lexer lex.yy.c -lfl
```
* 测试
```
./lexer ../Sy_Test/test1.sy
```
### bison

* 编写test.y文件，测试用例中实现了判断一个算式是否合法
* 生成y.tab.c等相关文件
```
bison --yacc -dv test.y
flex test.l
```
* 生成执行文件，其中lexer是生成的执行文件名
```
gcc -o test y.tab.c lex.yy.c
```
* 测试
```
./test 
```

### How to use Makefile

当你写好了flex和bison文件后，例如a.l和a.y（注意必须是同名的），在cmd直接输入
```
make
```
即可直接编译出可执行文件

使用```make clean```来清除文件目录

### 错误识别

- 已完成
1.  错误类型1：变量未声明
2.  错误类型2：变量重复声明
3.  错误类型3：函数在调用时未定义
4.  错误类型4：函数重复定义（同样的函数名出现了不止一次定义）
5.  错误类型5：把变量当做函数调用，如对普通变量使用括号(...)或()运算符（当函数调用），
6.  错误类型6：对函数名的不当引用（如把函数名当做普通变量来引用）

- 未完成
7.  错误类型7：对数组的不当引用，如数组访问运算符"[...]"中出现非整数表达式，即数组变量的下标不是整型
8.  错误类型8：对非数组变量使用数组访问"[...]"运算符
9.  错误类型9：函数调用时参数个数或类型不匹配
10.  错误类型10：return语句返回的类型与函数定义的返回类型不匹配
11.  错误类型11：操作数类型不匹配，或操作数类型与操作符不匹配，如：整型变量与数组变量相加减，或数组
变量与数组变量相加减。
12.  错误类型12：break语句不在循环体内
13.  错误类型13：continue语句不在循环体内



### How to write your own project

参考https://blog.csdn.net/weixin_44007632/article/details/108666375

参考flex相关的[pattern](./pattern.md)文档

### PS: 借鉴了LAB4中AST的构建

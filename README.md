# My_Compiler

这是504小组的编译原理大作业

个人理解：flex用于简单的声明，bison实现复杂的逻辑

```
.
├── README.md
├── Sy_Test   #存放任务一中的测试用例
│   ├── test1.sy
│   └── test2.sy
├── bison_test  #联合使用flex和bison的测试用例
│   ├── lex.yy.c
│   ├── test
│   ├── test.l
│   ├── test.y
│   ├── y.output
│   ├── y.tab.c
│   └── y.tab.h
├── first_try   #自己的尝试
│   ├── lex.yy.c
│   └── lexer.l
├── flex_test   #使用flex的测试用例
│   ├── image-1.png
│   ├── image.png
│   ├── lex.yy.c
│   ├── lexer
│   └── lexer.l
├── pattern.md
└── template       #联合使用flex和bison的模板
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





### How to write your own lexer.l

参考https://blog.csdn.net/weixin_44007632/article/details/108666375

参考flex相关的[pattern](./pattern.md)文档


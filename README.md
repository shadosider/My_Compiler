# My_Compiler

这是504小组的编译原理大作业

Sy_Test文件夹中存放任务一中的测试用例

## Installation of Prerequisites

```
sudo apt-get install flex  
sudo apt-get install bison
```

## Usage
### flex：词法分析

相关文件在sample文件夹中
```
sample
    ├── lex.yy.c   #生成的C代码
    ├── lexer      #生成的执行文件
    ├── lexer.l    #flex源码
    ├── test1.sy   ##测试用例一
    └── test2.sy   ##用例二
```

* 编写lexer.l文件，这个例子中实现了echo所有的整数等内容
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
./lexer test1.sy
```
or
```
./lexer test1.sy
```

### bison

#### 1.使用gcc/g++编程 c/c++程序 增加-g参数 

```
gcc mina.cpp -o main -g
```

#### 2.传参
```
gdb "可执行程序的名字"
给程序传参  set args
```
#### 3.查看代码
```
(1)当前文件
l 
list
l 行号
l 函数名
(2)非当前文件
l 文件名:行号
l 文件名:函数名
l main.c:main
```

#### 4.断点相关的操作
```
break / b
b 行号
b 函数名
b 文件名:行号
b 文件名:函数名

查看设置过的断点
info b
i b

删除断点
d 断点编号
d 2 3 删除多个断点
d 4-7 删除一个范围内的断点

设置断点无效
dis 断点编号
dis 2 3
dis 2-3


设置断点有效
ena 断点编号
ena 2 3
ena 2-3

设置条件断点
b 17 if i==10
b 行号 if 变量==val
```

#### 5.调试相关的命令
```
r 运行
n next 向下单步调试
next遇到函数不会进入函数体内部
s step
step遇到函数会进入函数体内部
c continue 继续运行gdb，停在下一个断点的位置
display i   一直显示i
undisplay 编号
info display

跳出函数体:finish
如果出不去，看一下函数体中的循环是否有断点，如果有就删除，或者设置无效

打印变量的值
print 变量名
p i

查看类型 
ptype

让程序跑起来
start 运行一行-停止
run - r 停在第一个断点的位置
直接设置变量等于某一个值
set var 变量名=值
set var i=5

跳出循环：until 不能有断点

q quit 退出gdb
```

#### 6.设置相关的命令
```
设置显示的行数
show listsize 查看默认显示行数
set listsize 20 将默认显示行数设置为20
```

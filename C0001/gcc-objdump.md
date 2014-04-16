###### 如何查看一个文件经过GCC编译后的汇编码？**
运行以下编译指令

```
$ g++ -O1 -S code.cpp
```

###### 如何生成待链接的二进制码？

```
$ g++ -O1 -c code.cpp
```

###### 反汇编的方法

```
$ gobjdump -d code.o
```

`gobjdump`在其他Linux系统下是`objdump`，Mac OS X下安装`gobjdump`需要通过Homebrew/Macport安装`binutils`。
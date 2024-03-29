# 第十二章 动态内存
笔记: [12.1 动态内存和智能指针](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter12/12.1动态内存和智能指针.xmind)

## 12.1
都是四个

## 12.2
[StrBlob.cpp](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter12/StrBlob.cpp)  
[StrBlob.h](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter12/StrBlob.h)    

## 12.3
不需要，push_back和pop_back都会改变对象本身，不能用const。

## 12.4
私有函数只会被类设计者访问，类设计者可以控制i > 0。

## 12.5 ?

## 12.6
[code](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter12/12_6.cpp)  

## 12.7
[code](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter12/12_7.cpp)  

## 12.8
new int 改为 new int();
int 是内置类型，默认情况下其值是未定义的，应该改为值初始化或直接初始化

## 12.9
q指向值为42的int，r指向值为100的int，r=p使r也指向值为42的int，但值为100的int的内存未释放；并且此时若释放二者中其一且使其指向nullptr，则另一就会变成空悬指针，和未初始化的指针具有一样的缺点。

q2指向值为42的int，r2指向值为100的int，r2=p2使r2也指向值为42的int，此时值为100的int的内存会自动释放。

## 12.10
正确，但改为```process(p);```更好。p已经是智能指针了，不需要再显式转换。  
在题目中，该实参会复制p，使引用计数置为2，函数结束后又变回1，不会影响p的使用。

## 12.11
使用p.get()构造了一个新的智能指针ptr，ptr和p指向同一内存，但有各自独立的引用计数(都为1)，则函数结束时，自动释放ptr指向的内存，此时p就变成了空悬指针。

## 12.12(?)
(a) 合法
(b) 不合法。无法将内置指针隐式转换为智能指针
(c) 不合法。无法将内置指针隐式转换为智能指针。
(d) 合法，但很危险，函数结束时智能指针会自动释放p指向的内存，p就会变成空悬指针。

## 12.13
释放了p和sp共同指向的内存，delete p后，sp就变成了空悬指针，此时再使用sp会出错。

## 12.14
```cpp
void close_connection(connection *p) {
    disconnect(*p);
}

destination d;
connection c = connect(&d);
shared_ptr<connection> p(&c, close_connection);
```

## 12.15
```cpp
destination d;
connection c = connect(&d);
shared_ptr<connection> p(&c, [](connection *ptr){disconnect(*p);});
```

## 12.16
[code](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter12/12_16.cpp)  
报错: 
```
无法引用 函数 "std::unique_ptr<_Tp, _Dp>::unique_ptr(const std::unique_ptr<_Tp, _Dp> &) [其中 _Tp=int, _Dp=std::default_delete<int>]" (已声明 所在行数:394，所属文件:"D:\Program_Files\mingw-64\mingw64\lib\gcc\x86_64-w64-mingw32\8.1.0\include\c++\bits\unique_ptr.h") -- 它是已删除的函数
```

## 12.17
(a) 非法。  
(b) 合法，但pi是内置指针，出了作用域就会释放内存空间，则pi将变成空悬指针。  
(c) 合法。  
(d) 合法，同(b)  
(e) 合法。
(f) 合法。get()返回的是内置指针，可以用于初始化unique_ptr。

## 12.18
多个shared_ptr可以指向同一内存，没必要release后再给另一个shared_ptr赋值。

## 12.19
[StrBlob.cpp](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter12/StrBlob.cpp)  
[StrBlobPtr.cpp](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter12/StrBlobPtr.cpp)  
[StrBlob.h](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter12/StrBlob.h)    
[main.cpp](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter12/main.cpp)

执行方法:
chapter12目录下新建bin目录，然后终端输入  
```shell
make main
./12_20
```

## 12.20
[12_20_infile.txt](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter12/12_20_infile.txt)
[12_20.cpp](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter12/12_20.cpp)

执行方法:
chapter12目录下新建bin目录，然后终端输入  
```shell
make 12_20
./12_20
```

## 12.21
题目中的写法也可执行，不会报错。但书中的写法更易读、易修改。

## 12.22
[StrBlob.cpp](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter12/StrBlob.cpp)  
[StrBlobPtr.cpp](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter12/StrBlobPtr.cpp)  
[StrBlob.h](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter12/StrBlob.h)    
[12_22.cpp](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter12/12_22.cpp)

## 12_23
[12_23.cpp](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter12/12_23.cpp)

## 12_24
[12_24.cpp](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter12/12_24.cpp)

## 12_25
delete []pa;

## 12_26
[12_26.cpp](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter12/12_26.cpp)

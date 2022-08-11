# 第七章 类

## 7.1
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_1.cpp)

## 7.2
我将类放置于头文件中，方便后续题目调用

[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_2.h)

## 7.3
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_3.cpp)

## 7.4
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_4.h)

## 7.5
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_4.h)

应该是const的；因为这些函数只是查看类成员，并不修改类成员。

## 7.6 
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_2.h)

## 7.7
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_7.cpp)

## 7.8
前者需要修改Sales_data对象，后者不需要。

## 7.9
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_4.h)

## 7.10 
连续输入data1和data2对象

## 7.11
[头文件](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_2.h)

[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_11.cpp)

## 7.12
不能将istream构造函数移入类的内部。原因在于该构造函数使用了read非成员函数，该非成员函数声明在了类之后，类内部无法使用；且试图将read函数的声明移至类前面时，又会因为read函数需要使用类而失败。


## 7.13
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_13.cpp)


## 7.14
```C++
Sales_data(const std::string &s): book_num(s), units_sold(0), revenue(0.0) {}
```

## 7.15
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_4.h)


## 7.16
没有。

构造函数和接口成员函数定义在public之后。

非接口成员函数及数据成员定义在private之后。

## 7.17
struct和class的默认权限不同。主要体现在对于第一个访问说明符之前的成员，struct默认public，class默认private。

## 7.18
**封装是指保护类的成员不被随意访问的能力**。将类的实现对用户隐藏。

## 7.19
```C++
class Person {
public:
    //构造函数
    Person() = default;
    Person(const std::string &s1, const std::string &s2): name(s1), address(s2) {}
    Person(std::istream &is);

    //成员函数
    std::string PersonName() const {return name;};
    std::string PersonAddress() const {return address;};

private:
    //数据成员
    std::string name;
    std::string address;
};
```

## 7.20
非成员函数，但需使用数据成员。

## 7.21
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_2.h)

## 7.22
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_4.h)

## 7.23
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_23.h)

## 7.24
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_23.h)

## 7.25
能。需要分配类以外的资源的数据成员都使用了string来定义。

## 7.26
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_2.h)

## 7.27
[头文件](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_23.h)

[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_27.cpp)

## 7.28
先输出20个'X'，然后输出一个'#'，再输出4个'X';换行后输出25个'X'。
>XXXXXXXXXXXXXXXXXXXX#XXXX
>XXXXXXXXXXXXXXXXXXXXXXXXX

## 7.29
推测正确。

[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_29.cpp)

## 7.30
显式使用this指针

优点：直观,可以使用与数据成员同名的形参

缺点：多余,繁琐

## 7.31
```C++
class Y;

class X {
    Y *y;
};

class Y {
    X x;
};
```

## 7_32
[头文件](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_32.h)

[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_32.cpp)

>注意：window_mgr的数据成员不能像书上那样直接就初始化，因为定义window_mgr时Screen类尚未定义，vector无法为screens向量分配内存。

## 7.33
```C++
Screen::pos Screen::size() const {
    return height * width;
}
```

## 7.34
会报错。说明类型别名是在数据成员和函数声明之前编译的。
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

## 7.35
```C++
Type Exercise::setVal(Type parm) { //第一个Type是string，第二个type是double
    val = parm + initVal(); //initVal是类内的
    return val;
}
```
setVal声明处返回类型是double，定义处返回类型是string，类型不匹配。改进方法是定义处的第一个Type要用作用域运算符指定为Exercise的。即
```C++
Exercise:Type Exercise::setVal(Type parm) {
    ......
}
```

## 7.36
构造函数初始化顺序只与它们在类定义中出现的顺序有关，故先初始化rem,再初始化base，则构造函数中用尚未定义的base初始化rem是错误的行为。

改进：
```C++
X (int i, int j): base(i), rem(i % j) {}
```

## 7.37
```C++
//first_item
Sales_data(std::istream &is) { read(is, *this); }
//数据成员的值等于输入的值

//next
Sales_data(std::string s = " "): bookNo(s) {}
//bookNo = " ", units_sold = 0, revenue = 0.0

//last
Sales_data(std::string s = " "): bookNo(s) {}
//bookNo = "9-999-99999-9", units_sold = 0, revenue = 0.0
```

## 7.38
```C++
Sales_data(std::istream &is = std::cin);
```
## 7.39
不合法。编译器无法确定该使用哪个函数，具有二义性。

## 7.40
```C++
class Book {
public:
    Book() = default;
    Book(std::string isbn, double price, std::string bn, std::string an, std::string publisher): isbn_(isbn), price_(price), book_name_(bn), author_name(an), publisher_(publisher) {}
    Book(std::istream &is) {...}
private:
    std::string isbn_;
    double price_ = 0.0;
    std::string book_name_;
    std::string author_name_;
    std::string publisher_;
}
```

## 7.41
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_41.cpp)

## 7.42
```C++
class Book {
public:
    Book(std::string isbn, double price, std::string bn, std::string an, std::string publisher): isbn_(isbn), price_(price), book_name_(bn), author_name(an), publisher_(publisher) {}
    Book(): Book(" ", 0, " ", " ", " ") {}
    Book(std::istream &is): Book() {...}
private:
    std::string isbn_;
    double price_ = 0.0;
    std::string book_name_;
    std::string author_name_;
    std::string publisher_;
}
```

## 7.43
```C++
class NoDefault {
public:
    NoDefault(int n): a(n) {}
private:
    int a;
}

class C {
public:
    C(): nd(0) {}
private:
    NoDefault nd;
}
```

## 7.44
不合法。NoDefault没有默认构造函数，无法进行默认初始化。

## 7.45
合法。C有默认构造函数，能进行默认初始化。

## 7.46
(a)不正确。没有构造函数将会使用编译器的合成默认构造函数。

(b)不正确。也可能是参数都为默认实参。

(c)不正确。

(d)不正确。在定义了其它构造函数的情况下，编译器不会生成合成默认构造函数；在没有定义其它构造函数的情况下，编译器不会初始化内置类型和复合类型的变量。

## 7.47
应该。

## 7.48
无论有无explicit，都能正确构造item1和item2。

## 7.49
(a)正确运行。

(b)报错。因为类型转换后的实参是个临时变量，不能传递给非常量引用

(c)报错。combine需要改变对象的内容，不能设为常量常量成员函数。

## 7.50
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter7/7_4.h)

## 7.51
string希望使用string为形参的函数也可以使用const char*作为实参。

但vector不希望使用vector为形参的函数使用int作为实参。

## 7.52
64页的Sales_data类具有类内初始值，不能当作聚合类来初始化。

修改方法：去掉Sales_data的类内初始值即可。


## 7.53
```C++
class Debug {
public:
    constexpr Debug(bool b = true): hw(b), io(b), other(b) {}
    constexpr Debug(bool h, bool i, bool o): hw(h), io(i), other(o) {}

    constexpr bool any() {return hw || io || other ;}
    void set_hw(bool b) {hw = b;}
    void set_io(bool b) {io = b;}
    void set_other(bool b) {other = b;}
private:
    bool hw;
    bool io;
    bool other;
};
```

## 7.54
不应该，因为它有除了返回语句之外的可执行语句。

## 7.55
不是，因为其是数据成员s是string(非字面值类型)。

## 7.56
类当中与类本身直接相关，而不是与类的各个对象相关的成员叫作静态成员； ；普通成员属于某一个具体的对象，静态成员属于类，普通成员不能作为默认实参，静态成员可以。

## 7.57
```C++
class Account {
public:
    static double rate() {return interestRate;}
    static void rate(double);
private:
    static constexpr int period = 30;
    double daily_tbl[period];
};

constexpr int Account::period;
```

## 7.58
rate和vec作为非常量静态成员，不能再类内初始化，应该在类外初始化。
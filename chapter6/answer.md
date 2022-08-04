# 第六章

## 6.16
该函数的形参是普通的string引用，有两个缺陷，**一是容易使使用者产生其实参可以修改的误导**；二是对实参有限制，实参不能是字面值、需要类型转换的对象、常量引用。改善的方法是将 *string&* 改为 *const string&* 。

## 6.17
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter6/6_17.cpp)
两个函数使用的形参类型不同。第一个函数实参是string对象，由于拷贝string的资源消耗大于引用的，故考虑使用引用形参，又因为不需要修改实参，故使用常量引用的形参；第二个函数实参是string对象，由于需要修改实参对象，故使用引用形参。

## 6.18
```C++
bool compare(const matrix& m1, const matrix& m2);  //猜测函数功能为返回m1>m2(或m1<m2>)是否为真

vector<int>::iterator change_val(int n, vector<int>::iterator it);  //猜测函数功能为使迭代器指示的位置加n
```

## 6.19
(a)不合法，实参数量多于了形参数量
(b)合法
(c)合法
(d)合法

## 6.20
在需要使用引用且无需修改实参时都应该使用常量引用形参，一般是string,vector等进行拷贝操作的资源消耗较大的数据对象；形参应该是常量引用却使用普通引用时会对实参产生一些如题6.16的限制。

## 6.21
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter6/6_21.cpp)

## 6.22
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter6/6_22.cpp)

## 6.23
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter6/6_23.cpp)

## 6.24
该函数循环输出ia数组的前10个元素。潜在问题是，传入函数的数组元素个数不一定为10（参见6.2.4节， P193），当元素个数小于10时，函数会访问超出数组范围的区域，这是错误且危险的行为。

## 6.25
同[6.26](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter6/6_26.cpp)

## 6.26
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter6/6_26.cpp)

## 6.27
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter6/6_27.cpp)

## 6.28
elem的类型为
```C++
const string &
```
是对il元素的常量引用（initializer_list<T>的元素永远是常量值，见P198）

## 6.29
应该。initializer_list的对象可以是拷贝消耗资源大的string,vector等类型，使用引用可以减少资源消耗。

## 6.30
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter6/6_30.cpp)
报错信息如下
```C++
6_30.cpp: In function 'bool str_subrange(const string&, const string&)':
6_30.cpp:19:13: error: return-statement with no value, in function returning 'bool' [-fpermissive]
             return;
             ^~~~~~
```
第一行指示报错语句所在的函数；第二行指示报错语句的位置信息以及报错的具体内容：在应该返回'bool'值的函数中，返回语句没有值。

倘若在第19的return后面补上返回值false,程序可以运行，但会给出如下警告
```C++
6_30.cpp: In function 'bool str_subrange(const string&, const string&)':
6_30.cpp:21:1: warning: control reaches end of non-void function [-Wreturn-type]
 }
 ^
```
这是因为该函数存在不返回值的风险，即当第一个if和第二个if的条件都不满足时，函数将不存在返回值。改进的方法是在函数的结尾处加上一条 return语句。

## 6.31
返回值是局部变量、常量引用、需要类型转换的对象、字面值时引用无效；返回值是局部变量、字面值时常量引用无效

## 6.32
合法

## 6.33
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter6/6_33.cpp)

## 6.34
>错误答案：比原来的factorial函数多递归一次，但也能得到正常结果

该函数的参数是int类型，可以为负数，如果按照题目的停止条件，那传入参数为负数时，函数将不会停止。

## 6.35
因为语句后半部分还需要使用val，如果使用val--，那么后面的val也会变为val-1，使函数产生和我们预期不符的结果。

## 6.36
```C++
string (&func(string s))[10];
```

## 6.37
```C++
using arrT = string[10];  arrT &func(string s); //类型别名
auto func(string s) -> string(&)[10]//尾置返回类型
string arr[10] = {"q", "w", "e", "r", "t", "y", "u", "i", "o", "p"}; decltype(arr) &func(string s);//decltype关键字
```
我觉得尾置返回类型最好，其最简洁易懂。

## 6.38
```C++
decltype(odd) &arrPtr(int i) {
    return (i % 2) ? odd : even;
}
```

## 6.39
(a) 非法。顶级const形参无法与非顶级cost形参区分开来。
(b) 非法 。不允许两个同名函数只有返回值不同。
(c) 合法

## 6.40
(a)正确。
(b)错误。默认实参应该放在形参列表尾部。

## 6.41
(a)非法。第一个形参不是默认实参，需要写明其对应的实参。
(b)合法。
(c)合法。但是'*'会被转换为其对应的ascii码，变为int，与传入字符的初衷不符。

## 6.42
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter6/6_42.cpp)

曾出现过如下报错
```C++
6_42.cpp:13:79: error: default argument given for parameter 3 of 'std::__cxx11::string _make_plural(size_t, const string&, const string&)' [-fpermissive]
 string _make_plural(size_t ctr, const string &word, const string &ending = "s") {
                                                                               ^
6_42.cpp:5:8: note: previous specification in 'std::__cxx11::string _make_plural(size_t, const string&, const string&)' here
 string _make_plural(size_t ctr, const string &word, const string &ending = "s");
```
原因是**在给定的作用域中，一个形参只能被赋予一次默认实参**，而我在函数声明和函数定义处都赋予了默认实参。

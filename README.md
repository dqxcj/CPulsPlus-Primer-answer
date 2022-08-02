[toc]


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
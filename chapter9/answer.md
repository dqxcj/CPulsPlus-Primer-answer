# 第九章 顺序容器

## 9.1
(a)list。按字典序插入的插入位置可能是序列中的任一位置，三种容器中，list对任意位置的插入更友好。

(b)deque。

(c)vector。

## 9.2
```C++
list<deque<int>> LDI;
```

## 9.3
a. 它们可以指向同一个容器中的元素，或者是容器中最后一个元素之后的位置；    
b. end不能在begin前面。

## 9.4
```C++
bool search(vector<int>::iterator begin, vector<int>::const_iterator end, const int n) {
    while(begin != end) {
        if(*begin == n){
            return true;
        }
        ++begin;
    }
    return false;
}
```

## 9.5
```C++
vector<int>::iterator search(vector<int>::iterator begin, vector<int>::const_iterator end, const int n) {
    while(begin != end) {
        if(*begin == n){
            return begin;
        }
        ++begin;
    }
    return end;  //？？？
}
```

## 9.6
list迭代器不支持比较运算符，应该将while循环的终止条件改为如下形式：
```C++
while(iter1 != iter2) {
    ......
}
```

## 9.7
```C++
vector<int>::const_iterator
```

## 9.8
```C++
list<string>::value_type
list<string>::reference
```

## 9.9
cbegin无法执行写操作，begin可以

## 9.10
1. vector<int>::iterator
2. const vector<int>::iterator
3. vector<int>::const_iterator
4. const vector<int>::const_iterator

## 9.11
```C++
//1. 拷贝
vector<int> newV = oldV; //newV的值和oldV的值相同

//2. 列表初始化
vector<int> newV{1, 2, 3, 4, 5, 6};  //newV的值和列表中的值相同

//3. 迭代器拷贝
vector<int> newV(oldV.begin(), oldV.end());  //newV的值为begin与end范围内的值（不包含end）

//4. 默认值初始化
vector<int> newV(10);  //newV的值为10个0

//5. 指定值初始化
vector<int> newV(10, 1);  //newV的值为10个1

//6. 默认初始化
vector<int> newV;  //newV为空
```

## 9.12
1. 对容器类型的要求不同，前者要求容器类型相同，后者不作要求；
2. 对元素类型的要求不同，前者要求元素类型相同，后者要求可以转换即可；
3. 拷贝范围不同，前者只能全部拷贝，后者支持自定义拷贝范围。

## 9.13
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter9/9_13.cpp)

## 9.14
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter9/9_14.cpp)

## 9.15
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter9/9_15.cpp)

## 9.16
容器类型不同，无法直接比较。

## 9.17
1. c1和c2容器类型和元素类型需要相同；
2. c1和c2中的元素支持 '<' 操作。

## 9.18
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter9/9_18.cpp)

## 9.19
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter9/9_19.cpp)

无较大改变。

## 9.20
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter9/9_20.cpp)

## 9.21
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter9/9_21.cpp)

## 9.22
循环无法终止；mid在insert后会失效；

将循环改为
```c++
int old_size = iv.size();
int count = 0;
while(iter != iv.begin() + old_size / 2 + count) {
    if(*iter == some_val) {
        iter = iv.insert(iter, 2 * some_val);
        iter += 2;
        count++;
    } else {
        iter++;
    }
}
```

## 9.23
val指向唯一的元素；val2指向唯一的元素；val3指向唯一的元素；val4指向唯一的元素

## 9.24
会报错
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter9/9_24.cpp)

## 9.25
相等则什么也不删除；

## 9.26
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter9/9_26.cpp)

## 9.27
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter9/9_27.cpp)

## 9.28
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter9/9_28.cpp)

## 9.29
vec.resize(100)会增加75个新元素，新元素的值为默认值；vec.resize(10)会删除靠后的90个元素。

## 9.30
元素类型有默认值或默认构造函数。

## 9.31
list和forward_list的迭代器不支持加减运算，因此需要多次调用自增符号。

[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter9/9_31.cpp)

## 9.32
很多编译器（包括书籍作者使用的）对于函数形参都是从右往左进行处理，因此先处理第二个形参*iter++，此后处理第一个形参时，iter已经由于自增而指向了下一个位置，这会造成错误。

## 9.33
对于不同的容器会有不同的现象。vector或string还能正常运行，因为插入元素只会使该位置之后的迭代器失效；deque则不能正常运行，因为插入元素会使全部迭代器失效；list和forward_list还能正常运行，插入元素不会使迭代器失效。

## 9.34
该程序的目的是复制奇数值；但程序存在会造成死循环的错误，应该将++iter改为iter+=2。

## 9.35
capacity是vector可容纳元素的最大数量，size是vector中元素的当前数量。

## 9.36
不可能。

## 9.37
list增加新元素时为新元素随机分配地址，不需要执行类似于vector(顺序存取)的迁移原有元素至更大的存储空间的操作，capacity不能提高list增加新元素时的效率，没有意义。
array的size不能改变，capacity没有意义。

## 9.38
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter9/9_38.cpp)  
也是翻倍分配的。

## 9.39

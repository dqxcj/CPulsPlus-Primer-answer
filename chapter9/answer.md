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
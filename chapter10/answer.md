# 第十章 泛型算法

## 10.1
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_1.cpp)

## 10.2
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_2.cpp)

## 10.3
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_3.cpp)

## 10.4
第三个参数0意味着返回值会是整数，而我们的期望值是double，故需要将0改为0.0。

## 10.5
c风格字符串其实只是指向字符数组首元素的指针，"==" 比较的是指针而不是对应的元素，只有两个指针指向同一地址，才会返回true。

## 10.6
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_6.cpp)

## 10.7
a. 其错误在于vec的元素个数为0，小于lst拷贝过去的范围；可修改如下：
```c++
copy(lst.cbegin(), lst.cend(), back_inserter(vec));
```

b. 错误，泛型算法要求的是足够多的元素，而不是足够大的capacity。

## 10.8
使用back_inserter改变容器大小并不是算法直接改变，而是调用了push_back。

## 10.9
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_9.cpp)

## 10.10
为了算法的通用性，不同的算法改变容器大小的方法不同。算法与容器之间的桥梁是迭代器，算法根本就不知道容器的存在，能否改变容器的大小，全看迭代器。

## 10.11
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_11.cpp)

## 10.12
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_12.cpp)

## 10.13
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_13.cpp)

## 10.14
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_14.cpp)

## 10.15
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_15.cpp)

## 10.16
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_16.cpp)

## 10.17
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_17.cpp)

## 10.18
使用partition后顺序乱了

[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_18.cpp)

## 10.19
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_19.cpp)

## 10.20
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_20.cpp)

## 10.21
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_21.cpp)

## 10.22
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_22.cpp)

## 10.23
无定值，依情况而定。

## 10.24
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_24.cpp)

## 10.25
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_25.cpp)

## 10.26
back_inserter调用push_back;
front_inserter调用push_front;
inserter调用insert，且插入位置始终不变。

## 10.27
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_27.cpp)

## 10.28
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_28.cpp)

## 10.29
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_29.cpp)

## 10.30
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_30.cpp)

## 10.31
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_31.cpp)

## 10.32
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_32.cpp)

## 10.33
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_33.cpp)

## 10.34
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_34.cpp)

## 10.35
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_35.cpp)

## 10.36
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_36.cpp)

## 10.37
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter10/10_37.cpp)

## 10.38
|类型|   读  |   写  |   扫描次数    |   运算    |
|----|  ---- |  ---- |  ----         | ----|
|输入迭代器|只读|不写|单遍扫描|只能递增|
|输出迭代器|不读|只写|单遍扫描|只能递增|
|前向迭代器|可读|可写|多遍扫描|只能递增|
|双向迭代器|可读|可写|多遍扫描|可递增递减|
|随机访问迭代器|可读|可写|多遍扫描|支持所有运算|

## 10.39
list的迭代器是双向迭代器，vector的迭代器是随机访问迭代器。

## 10.40
copy的前两个迭代器要求输入迭代器，最后一个迭代器是输出迭代器；  
reverse的迭代器是双向迭代器；  
unique的迭代器是前向迭代器。


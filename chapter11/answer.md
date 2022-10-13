# 第十一章 关联容器

## 11.1
map的每一个元素都是一对值，第一个值为索引(key)，第二个值是要保存的值(value); vector一般只保存map中的第二个值。  
map以key为索引，vector顺序索引。

## 11.2
list: 需要频繁插入删除  
vector: 大部分情况  
deque: 先进先出  
map: 需要频繁查找，查找过程存在key-value关系  
set: 需要频繁查找，查找过程不存在key-value关系  

## 11.3
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter11/11_3.cpp)

## 11.4
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter11/11_4.cpp)

## 11.5
map和set最大的区别是map除了key还有value，而set只有key。  
当需要快速查找时，我优先考虑set，如果在此基础上需要保存key对应的其他信息，则用map。

## 11.6
set: 快速查找  
list: 快速插入

## 11.7
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter11/11_7.cpp)

## 11.8
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter11/11_8.cpp)  
set的优点是快速查找。

## 11.9
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter11/11_9.cpp)  

## 11.10
前者可以，后者不可以。原因是vector的迭代器是随机访问迭代器，支持<操作，而list的迭代器是双向迭代器，不支持<操作。

## 11.11
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter11/11_11.cpp)  

## 11.12
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter11/11_12.cpp)  

## 11.13
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter11/11_13.cpp)   
感觉a方式最好理解, 但c方式最方便。

## 11.14
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter11/11_14.cpp) 

## 11.15  
key_type: int  
mapped_type: vector<int>  
value_type: pair<const int, vector<int>>

## 11.16
```c++
auto it = map.begin();
it -> second = value;
```

## 11.17
(a) 不合法。multiset的迭代器是const的，只能访问，不能写入。    
(b) 不合法。理由同上。  
(c) 合法  
(d) 合法  

## 11.18
pair<const string, size_t>::iterator

## 11.19
```c++
typedef bool (*ptrF)(const Sales_data &lhs, const Sales_data &rhs);
multiset<Sales_data, ptrF> bookstore(&compareIsbn);
......
pair<Sales_data, ptrF>::iterator
```

## 11.20
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter11/11_20.cpp)  
下标操作更容易编写和阅读 

## 11.21
对word_count插入{word, 0}， 如果已经存在word为key的pair，则不插入，只对其second进行自增操作；否则在插入后自增插入元素的second，即0自增为1。

## 11.22
pair<map<string, vector<int>::iterator, bool>> insert(pair<string, vector<int>>)

## 11.23
```c++
multimap<string, string> mmap;
```

## 11.24
第一行定义了map<int, int> 的变量m;  
第二行m[0]在m中添加了关键字为0的元素，并对其进行值初始化，使元素的second为0， = 1 将1赋予给元素的second，使其由0变为1。

## 11.25
本题程序是错误的，因为v的元素个数为0，v[0]会导致访问越界。

## 11.26
```c++
map<string, int> mapSI;
mapSI["an"] = 1;
返回类型为int
```

## 11.27
查找的同时需要计数则用count，其他查找都使用find

## 11.28
map<string, int>::iterator it;

## 11.29
upper_bound == lower_bound == end()  
equal_range -> first == equal_range -> second == end()

## 11.30
pos.first是调用equal_range返回的范围的左迭代器，-> second是该左迭代器指向的map的元素(pair类型)的第二个值。

## 11.31 
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter11/11_31.cpp)  

## 11.32
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter11/11_32.cpp) 

本题不可使用sort排序，multimap本身维护了关键字的字典序，sort不允许对这类在意元素顺序的容器进行排序，要想使用sort，可以先复制到vector中。

## 11.33
[代码](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter11/11_33.cpp) 

## 11.34
使用下标会为不存在的字符串建立错误映射，导致程序运行结果不符合预期。

## 11.35
要注意多条规则关键字相同的情况，下标会不断将前面的映射覆盖，最终使最后一条关键字映射保留；insert则是在发现关键字相同时不采取插入行为，最终使第一条关键字映射保留。

## 11.36
在我的程序中应该会不进行转换，但程序依旧能够运行。  
但事实证明，该关键字(用k进行的测试)会被映射为空
![](https://raw.githubusercontent.com/dqxcj/Study/test/test2/test7/test8/202210121719105.png)


## 11.37
无序版本的优势是插入、查找效率高，维护成本低；  
有序版本的优势是有顺序。

## 11.38
[单词计数程序](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter11/11_3.cpp)   
[单词转换程序](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter11/11_33.cpp)   

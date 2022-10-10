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
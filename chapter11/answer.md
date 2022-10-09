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
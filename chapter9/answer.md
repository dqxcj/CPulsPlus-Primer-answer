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
vector<int>::size_type
```

## 9.8
```C++
list<string>::const_iterator
list<string>::iterator
```

## 9.11
```C++
//1. 拷贝
vector<int> newV = oldV; //newV的值和oldV的值相同

//2. 列表初始化
vector<int> newV{1, 2, 3, 4, 5, 6};  //newV的值和列表中的值相同

//3. 迭代器拷贝
vector<int> newV(oldV.begin(), oldV.end());  //newV的值为begin与end范围内的值（不包含end）

//4. 提供大小
vector<int> newV(10);  //newV的值为10个0
```

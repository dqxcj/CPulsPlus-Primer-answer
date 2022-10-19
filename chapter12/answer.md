# 第十二章 动态内存

## 12.1
都是四个

## 12.2
[StrBlob.cpp](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter12/StrBlob.cpp)  
[StrBlob.h](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter12/StrBlob.h)    

## 12.3
不需要，push_back和pop_back都会改变对象本身，不能用const。

## 12.4
data -> size() 不会小于0。

## 12.5 ?

## 12.6
[code](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter12/12_6.cpp)  

## 12.7
[code](https://github.com/dqxcj/C-Primer-answer/blob/main/chapter12/12_7.cpp)  

## 12.8
正常情况下分配内存失败会抛出异常bad_alloc，而不会使p为空指针； 将```new int```改为```new (nothrow) int```即可

## 12.9
q指向值为42的int，r指向值为100的int，r=p使r也指向值为42的int，但值为100的int的内存未释放；并且此时若释放二者中其一，另一就会变成空悬指针，和未初始化的指针具有一样的缺点。

q2指向值为42的int，r2指向值为100的int，r2=p2使r2也指向值为42的int，此时值为100的int的内存会自动释放。


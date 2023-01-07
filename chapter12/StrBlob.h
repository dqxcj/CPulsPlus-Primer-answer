#ifndef StrBlob_H
#define StrBlob_H

#include <string>
#include <vector>
#include <memory>
#include <initializer_list>
#include <iostream>

class StrBlobPtr;

class StrBlob {
friend class StrBlobPtr;
public: 
    using size_type =  std::vector<std::string>::size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);

    size_type Size() const { return data -> size(); }
    bool Empty() const { return data -> empty(); }
    void PushBack(const std::string &str) { data->push_back(str); }
    void PopBack();
    std::string &Front() const;
    std::string &Back() const;

    StrBlobPtr begin();
    StrBlobPtr end();

    StrBlobPtr begin() const;
    StrBlobPtr end() const;

private:
    std::shared_ptr<std::vector<std::string>> data;
    void Check(size_type i, const std::string &msg) const;
};

class StrBlobPtr {
public:
    StrBlobPtr(): curr(0) {}
    StrBlobPtr(StrBlob &a, size_t sz = 0): wptr(a.data), curr(sz) { }
    StrBlobPtr(const StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) {}

    std::string &deref() const;
    StrBlobPtr &incr();
    std::size_t Curr() const {return curr;}
private:
    std::shared_ptr<std::vector<std::string>> check(std::size_t, const std::string &msg) const;
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;
};


#endif
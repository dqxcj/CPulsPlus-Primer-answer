#ifndef StrBlob_H
#define StrBlob_H

#include <string>
#include <vector>
#include <memory>
#include <initializer_list>
#include <iostream>
// #include "StrBlobPtr.h"

class StrBlob {
    // friend class StrBlobPtr;
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

    // StrBlobPtr begin() {return StrBlobPtr(*this);}
    // StrBlobPtr end() {return StrBlobPtr(*this, data -> size());}

    void Output(std::ostream &out) const;

private:
    std::shared_ptr<std::vector<std::string>> data;
    void Check(size_type i, const std::string &msg) const;
};


#endif
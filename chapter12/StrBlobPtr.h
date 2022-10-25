#ifndef STRBLOBPTR_H
#define STRBLOBPTR_H

#include <vector>
#include <string>
#include <memory>
#include "StrBlob.h"

class StrBlobPtr {
public:
    StrBlobPtr(): curr(0) {}
    StrBlobPtr(StrBlob &SB, size_t sz = 0): wptr(SB.data), curr(sz) { } 
    std::string &deref() const;
    StrBlobPtr &incr();
    std::size_t Curr() const {return curr;}
private:
    std::shared_ptr<std::vector<std::string>> check(std::size_t, const std::string &msg) const;
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;
};

#endif
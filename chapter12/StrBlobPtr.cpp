#include "StrBlob.h"
#include <vector>
#include <string>
using namespace std;

//private函数
shared_ptr<vector<string>> StrBlobPtr::check(size_t sz, const string &msg) const {
    auto ret = wptr.lock();
    if(!ret) {
        throw runtime_error("unbound StrBlobPtr");
    }
    if(sz >= ret -> size()) {
        throw out_of_range(msg);
    }
    return ret;
}

//public函数
string &StrBlobPtr::deref() const {
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
    // return (*check(curr, "dereference past end"))[curr];
}

StrBlobPtr &StrBlobPtr::incr() {
    check(curr, "increment past end of StrBlobPtr");
    ++curr;
    return *this;
}
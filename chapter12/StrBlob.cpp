#include "StrBlob.h"
#include <stdexcept>

using namespace std;

//private函数
void StrBlob::Check(size_type i, const string &msg) const {
    if(i >= data -> size()) {
        throw out_of_range(msg);
    }
}

//构造函数
StrBlob::StrBlob(): data(make_shared<vector<string>>()) {}
StrBlob::StrBlob(initializer_list<vector<string>> il): data(make_shared<vector<string>>(il)) {}


//public函数
void StrBlob::PopBack() {
    Check(0, "PopBack on empty StrBlob");
    data -> pop_back();
}

string &StrBlob::Front() {
    Check(0, "Front on empty StrBlob");
    return data -> front(); 
}

const string &StrBlob::Front() const {
    Check(0, "Front(const) on empty StrBlob");
    return data -> front();
}

string &StrBlob::Back() {
    Check(0, "Back on empty StrBlob");
    return data -> back();
}

const string &StrBlob::Back() const {
    Check(0, "Back(const) on empty StrBlob");
    return data -> back();
}


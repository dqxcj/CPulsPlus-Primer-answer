#ifndef StrBlob_H
#define StrBlob_H

#include <string>
#include <vector>
#include <memory>
#include <initializer_list>

class StrBlob {
public: 
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::vector<std::string>> il);

    size_type Size() const { return data -> size(); }
    bool Empty() const { return data -> empty(); }
    void PushBack(const std::string &str) { data->push_back(str); }
    void PopBack();
    std::string &Front();
    const std::string &Front() const;
    std::string &Back();
    const std::string &Back() const;

private:
    std::shared_ptr<std::vector<std::string>> data;
    void Check(size_type i, const std::string &msg) const;
};


#endif
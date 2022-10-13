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
    void PopBack() { data -> pop_back(); };
    std::string &Front() { return data->front(); }
    const std::string &Front() const { return data->front(); };
    std::string &Back() { return data->back(); };
    const std::string &Back() const { return data->back(); };

private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const;
};


#endif
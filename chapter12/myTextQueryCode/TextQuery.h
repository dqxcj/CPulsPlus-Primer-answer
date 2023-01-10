#ifndef QUERYRESULT_H
#define QUERYRESULT_H
#include <fstream>
#include <vector>
#include <string>
#include <unordered_map>
#include <set>
#include <memory>
#include <iostream>

class QueryResult;

class TextQuery {
friend class QueryResult;
public:
    TextQuery(std::ifstream &in);

    std::shared_ptr<std::set<int>> query(const std::string &s);
private:
    std::vector<std::string> allLine_;
    std::unordered_map<std::string, std::set<int>> wordToLine_;
};

class QueryResult {
public:
    QueryResult(std::shared_ptr<std::set<int>> line): line_(line) {}

    void print(std::ostream &out);

private:
    std::shared_ptr<std::set<int>> line_;
};



#endif
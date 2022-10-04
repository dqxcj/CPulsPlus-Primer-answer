#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <iterator>
#include "Sales_item.h"
using namespace std;

bool compareisbn(Sales_item &si1, Sales_item &si2) {
    return stoi(si1.isbn()) > stoi(si2.isbn());
}

int main() {
    istream_iterator<Sales_item> is(cin), eof;
    ostream_iterator<Sales_item> os(cout, "\n");
    vector<Sales_item> vs, result;
    while(is != eof) {
        vs.push_back(*is++);
    }
    sort(vs.begin(), vs.end(), compareisbn);
    copy(vs.begin(), vs.end(), os);
    auto left = vs.begin();
    while(left != vs.end()) {
        auto it = find_if(left, vs.end(), [&](Sales_item item){return item.isbn() != (*left).isbn();});
        result.push_back(accumulate(left + 1, it, *left));
        left = it;
    }
    copy(result.begin(), result.end(), os);
    return 0;
}
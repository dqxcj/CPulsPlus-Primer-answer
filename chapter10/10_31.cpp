#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
    istream_iterator<int> is(cin), eof;
    ostream_iterator<int> os(cout, "\t");
    vector<int> vi(10); //为了在输入操作时能使用copy
    copy(is, eof, vi.begin());
    sort(vi.begin(), vi.end());
    unique_copy(vi.begin(), vi.end(), os);
    return 0;
}
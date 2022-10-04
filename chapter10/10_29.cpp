#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    ifstream infile("10_29_infile.txt");
    vector<string> vs(10); //不设为10copy时无法增加元素个数，则无法输入到vs中
    istream_iterator<string> is(infile), eof;
    ostream_iterator<string> os(cout, "\t");
    copy(is, eof, vs.begin());
    copy(vs.begin(), vs.end(), os);
    return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, int size) {
    return size > s.size();
}

int main() {
    string s = "hello world";
    vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    auto a = find_if(vi.begin(), vi.end(), bind(check_size, s, _1));
    cout << *a << endl;
    return 0;
}
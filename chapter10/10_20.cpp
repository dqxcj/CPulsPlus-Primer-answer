#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> vs = {"happy", "hello world", "codingdaily", " ", "\a"};
    int size = 6;
    int counts = count_if(vs.begin(), vs.end(), [&](string s){return s.size() > size;});
    cout << counts << endl;
    return 0;
}
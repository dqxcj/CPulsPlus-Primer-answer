#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec_int;
    auto iter = vec_int.begin();
    for(int i = 0; i < 20; ++i) {
        iter = vec_int.insert(iter, i);
    }
    for(auto &i : vec_int) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
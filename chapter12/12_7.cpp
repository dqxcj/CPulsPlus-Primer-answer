#include <iostream>
#include <vector>
#include <memory>
using namespace std;

auto Func0() {
    return  make_shared<vector<int>>();
}

auto Func1() {
    auto ptr = Func0();
    int n;
    while(cin >> n) {
        ptr -> push_back(n);
    }
    return ptr;
}

void Func2() {
    auto ptr = Func1();
    for(auto &i : *ptr) {
        cout << i << " ";
    }
    cout << endl;
} 

int main() {
    Func2();
    return 0;
}
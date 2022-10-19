#include <iostream>
#include <vector>
using namespace std;

vector<int> *Func0() {
    return new vector<int>;
}

vector<int> *Func1() {
    vector<int> *ptr = Func0();
    int n;
    while(cin >> n) {
        ptr -> push_back(n);
    }
    return ptr;
}

void Func2() {
    vector<int> *ptr = Func1();
    for(auto &i : *ptr) {
        cout << i << " ";
    }
    cout << endl;
    delete ptr;
} 

int main() {
    Func2();
    return 0;
}
#include <iostream>
#include <list>
#include <deque>
using namespace std;

int main() {
    list<int> list_int = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> deque_int_0, deque_int_1;
    for(auto &i : list_int) {
        if(i % 2) {
            deque_int_1.push_back(i);
        } else {
            deque_int_0.push_back(i);
        }
    }
    cout << "奇数有: ";
    for(auto &i : deque_int_1) {
        cout << i << " ";
    }
    cout << "\t偶数有: ";
    for(auto &i : deque_int_0) {
        cout << i << " ";
    }
    return 0;
}
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
    list<int> list_int = {1, 2, 3, 4, 5};
    vector<int> vec_int = {6, 7, 8, 9, 10};
    vector<double> vec_double1(list_int.begin(), list_int.end());
    vector<double> vec_double2(vec_int.begin(), vec_int.end());
    for(auto &d : vec_double1) {
        cout << d << " ";
    }
    cout << endl;
    for(auto &d : vec_double2) {
        cout << d << " ";
    }
    return 0;
}
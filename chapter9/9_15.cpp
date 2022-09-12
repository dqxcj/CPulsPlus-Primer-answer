#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec_i1 = {1, 2, 3, 4, 5}, vec_i2 = {1, 2, 3, 4, 5};
    cout << (vec_i1 == vec_i2) << endl;
    return 0;
}
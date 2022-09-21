#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    for(int i = 0; i < 20; i++)
        vec.push_back(i);
    cout << vec.size() << " " << vec.capacity() << endl;
    vec.reserve(50);
    cout << vec.size() << " " << vec.capacity() << endl;
    for(int i = 0; i < 70; i++)
        vec.push_back(0);
    cout << vec.size() << " " << vec.capacity() << endl;
    return 0;
}
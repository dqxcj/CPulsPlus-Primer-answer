#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::vector;
using std::cout;
using std::endl;

int main() {
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};
    cout << v1.size() << " " << v2.size() << " " << v3.size() << " " << v4.size() << " " << v5.size() << " " << v6.size() << " " << v7.size() << endl;
    for(auto i : v1)
        cout << i << " ";
    cout << endl;
    for (auto i : v2)
        cout << i << " ";
    cout << endl;
    for (auto i : v3)
        cout << i << " ";
    cout << endl;
    for (auto i : v4)
        cout << i << " ";
    cout << endl;
    for (auto i : v5)
        cout << i << " ";
    cout << endl;
    for (auto i : v6)
        cout << i << " ";
    cout << endl;
    for (auto i : v7)
        cout << i << " ";
    cout << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2;
    auto f = [a, b]{return a + b;};
    cout << f() << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a = 1;
    auto f = [a](int b){return a + b;};
    cout << f(4) << endl;
    return 0;
}
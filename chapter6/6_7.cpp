#include <iostream>
#include "chapter6.h"
using namespace std;

int main() {
    for(int i = 0; i < 10; ++i) {
        cout << count() << endl;
    }
    return 0;
}

size_t count() {
    static size_t a = 1;
    return a++;
}
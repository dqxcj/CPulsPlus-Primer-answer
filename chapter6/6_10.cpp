#include <iostream>
using namespace std;

int main() {
    void swap(int *a, int *b);
    int a = 3, b = 4;
    cout << "交换之前 a: " << a << "  b: " << b << endl;
    swap(&a, &b);
    cout << "交换之后 a: " << a << "  b: " << b << endl;
    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
#include <iostream>
using namespace std;

int main() {
    void swap(int **a, int **b);
    int a=1, b=2, *pa = &a, *pb = &b;
    cout << pa << " " << pb << endl;
    swap(&pa, &pb);
    cout << pa << " " << pb << endl;
    return 0;
}

void swap(int **a, int **b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
}
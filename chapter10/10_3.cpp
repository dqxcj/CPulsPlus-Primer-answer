#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = accumulate(vi.cbegin(), vi.cend(), 0);
    cout << sum << endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;

void output(deque<int> &vi) {
    for (auto i : vi) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vi1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    deque<int> vi2, vi3, vi4;
    auto it = inserter(vi2, vi2.begin());
    auto bit = back_inserter(vi3);
    auto fit = front_inserter(vi4);
    for(auto i : vi1) {
        *it = i;
        *bit = i;
        *fit = i;
    }
    output(vi2);
    output(vi3);
    output(vi4);
    return 0;
}
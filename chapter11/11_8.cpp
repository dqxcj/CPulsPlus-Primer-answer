#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vi;
    int n;
    bool flag = true;
    while(cin >> n) {
        for(auto &i : vi) {
            if(i == n)
                flag = false;
        }
        if(flag == true)
            vi.push_back(n);
        flag = true;
    }
    for(auto &i : vi) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
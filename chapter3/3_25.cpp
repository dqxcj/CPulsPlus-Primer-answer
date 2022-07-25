#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector<int> score(11, 0);
    int n;
    while(cin >> n)
        if(n <= 100 && n >= 0){
            (*(score.begin() + n / 10))++; //注意最外面要加括号，否则自增符无效，不想加括号可以把自增符放开头
        }
    for(auto i : score)
        cout << i << " ";
    return 0;
}
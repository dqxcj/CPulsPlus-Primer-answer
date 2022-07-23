#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::vector;

int main() {
    vector<string> text = {"appendHappyHello World!", "hhhhhh", "", "niob"};
    for(auto i = text.begin(); i != text.end() && !i->empty(); i++){
        for(auto j = (*i).begin(); j != (*i).end(); j++)
            *j = toupper(*j);
    }
    for(auto i = text.cbegin(); i != text.end(); i++)
        cout << *i << endl;
    return 0;
}
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

struct PersonInfo {
    string name;
    vector<string> phnoes;
};

int main() {
    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    while(getline(cin, line)) {
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        while(record >> word) {
            info.phnoes.push_back(word);
        }
        people.push_back(info);
    }
    for(auto &i : people) {
        cout << i.name << " ";
        for(auto & j : i.phnoes) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
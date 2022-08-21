#include <string>
#include <vector>
#include <fstream>
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
    ifstream inFile("8_13_data.txt");
    istringstream record;
    while(getline(inFile, line)) {
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
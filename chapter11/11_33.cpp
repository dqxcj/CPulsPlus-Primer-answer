#include <iostream>
#include <unordered_map>
#include <fstream>
#include <sstream>
using namespace std;

auto GetWordsMap(ifstream &input) {
    unordered_map<string, string> umap;
    string line;
    while(getline(input, line)) {
        istringstream getWords(line);
        string word[2];
        for(int i = 0; i < 2; i++) {
            getWords >> word[i];
        }
        umap[word[0]] = word[1];
    }
    return umap;
}

void WordTransform(ifstream &input1, ifstream &input2) {
    auto wordsMap = GetWordsMap(input1);
    string line;
    while(getline(input2, line)) {
        istringstream wordInLine(line);
        string word;
        while(wordInLine >> word) {
            if(wordsMap.find(word) != wordsMap.cend())
                cout << wordsMap[word];
            else
                cout << word;
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    ifstream input1("11_33_infile1.txt");
    ifstream input2("11_33_infile2.txt");
    WordTransform(input1, input2);
    return 0;
}
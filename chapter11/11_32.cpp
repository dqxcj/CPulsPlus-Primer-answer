#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    multimap<string, string> mmap;
    string author, book;
    cout << "Please input author and book(input quit to exit): ";
    while(cin >> author >> book && author != "quit") {
        mmap.insert({author, book});
        cout << "Please input author and book(input quit to exit): ";
    }
    cout << "These are all authors and their books: " << endl;
    for(auto p = mmap.cbegin(); p != mmap.cend(); ++p) {
        cout << p -> first << " " << p -> second << endl;
    }
    return 0;
}
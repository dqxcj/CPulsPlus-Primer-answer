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
    cout << "Please input author who you want to delete: ";
    cin >> author;
    cout << "These are his books: " << endl;
    for(auto p = mmap.equal_range(author); p.first != p.second; ++p.first) {
        cout << p.first -> second << endl;
    }
    mmap.erase(author);
    auto p = mmap.equal_range(author);
    if(p.first == p.second)
        cout << "Delete successfully!" << endl;
    else   
        cout << "Delete error!" << endl;
    return 0;
}
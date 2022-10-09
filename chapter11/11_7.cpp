#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    unordered_map<string, vector<string>> umap;
    vector<string> vs;
    string s1, s2;
    int option;
    cout << "请选择: 1. 添加新的家庭    2. 给已有家庭添加新的孩子    3. 显示所有家庭    4. 退出\n";
    while(cin >> option) {
        if(option == 1) {
            cout << "请输入新家庭的姓: ";
            cin >> s1;
            cout << "请输入新家庭中孩子(们)的名字(quit退出): ";
            while(cin >> s2 && s2 != "quit")
                vs.push_back(s2);
            umap[s1] = vs;
            vs.clear();
        } else if(option == 2) {
            cout << "请输入已有家庭的姓: ";
            cin >> s1;
            cout << "请输入新添加的孩子(们)的名字(quit退出): ";
            while(cin >> s2 && s2 != "quit")
                umap[s1].push_back(s2);
        } else if(option == 3) {
            for(auto &p : umap) {
                cout << "家庭 " << p.first << " 的成员: ";
                for(auto &s : p.second) {
                    cout << s << " ";
                }
                cout << endl;
            }
        } else if(option == 4)
            break;
        cout << "请选择: 1. 添加新的家庭    2. 给已有家庭添加新的孩子    3. 显示所有家庭    4. 退出\n";
    }
    return 0;
}
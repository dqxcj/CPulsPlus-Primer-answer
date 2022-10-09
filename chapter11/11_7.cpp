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
    cout << "��ѡ��: 1. ����µļ�ͥ    2. �����м�ͥ����µĺ���    3. ��ʾ���м�ͥ    4. �˳�\n";
    while(cin >> option) {
        if(option == 1) {
            cout << "�������¼�ͥ����: ";
            cin >> s1;
            cout << "�������¼�ͥ�к���(��)������(quit�˳�): ";
            while(cin >> s2 && s2 != "quit")
                vs.push_back(s2);
            umap[s1] = vs;
            vs.clear();
        } else if(option == 2) {
            cout << "���������м�ͥ����: ";
            cin >> s1;
            cout << "����������ӵĺ���(��)������(quit�˳�): ";
            while(cin >> s2 && s2 != "quit")
                umap[s1].push_back(s2);
        } else if(option == 3) {
            for(auto &p : umap) {
                cout << "��ͥ " << p.first << " �ĳ�Ա: ";
                for(auto &s : p.second) {
                    cout << s << " ";
                }
                cout << endl;
            }
        } else if(option == 4)
            break;
        cout << "��ѡ��: 1. ����µļ�ͥ    2. �����м�ͥ����µĺ���    3. ��ʾ���м�ͥ    4. �˳�\n";
    }
    return 0;
}
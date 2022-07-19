#include <iostream>
#include "Sales_data.h"
using namespace std;

Sales_data Input(Sales_data data) {
    cin >> data.isbn >> data.sale_num >> data.avg_sold;
    data.total_sold = data.sale_num * data.avg_sold;
    return data;
}

Sales_data Add() {
    Sales_data data1, data2;
    data1 = Input(data1);
    while(cin >> data2.isbn){
        if(data1.isbn != data2.isbn) {
            cout << "ERROR：相加的对象isbn不同！" << endl;
            return data1;
        } else {
            cin >> data2.sale_num >> data2.avg_sold;
            data2.total_sold = data2.sale_num * data2.avg_sold;
            data1.total_sold = data1.sale_num * data1.avg_sold + data2.sale_num * data2.avg_sold;
            data1.sale_num += data2.sale_num;
            data1.avg_sold = data1.total_sold / data1.sale_num;
        }
    }
    return data1;
}

void Output(Sales_data data) {
    cout << data.isbn << " " << data.sale_num << " " << data.total_sold << " " << data.avg_sold << endl;
}

void Count() {
    Sales_data data1, data2;
    int count = 1;
    data1 = Input(data1);
    while(cin >> data2.isbn){
        cin >> data2.sale_num >> data2.avg_sold;
        data2.total_sold = data2.sale_num * data2.avg_sold;
        if(data1.isbn == data2.isbn) {
            count++;
        } else {
            cout << data1.isbn << "有" << count << "条销售记录" << endl;
            data1 = data2;
            count = 1;
        }
    }
    cout << data1.isbn << "有" << count << "条销售记录" << endl;
}

int main() {
    Count();
    return 0;
}
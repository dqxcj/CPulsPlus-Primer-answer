#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

struct Sales_data
{
    std::string isbn;  // isbn
    unsigned sale_num; //销售数量
    double total_sold; //总销售额
    double avg_sold;   //单价或平均价格
};

#endif
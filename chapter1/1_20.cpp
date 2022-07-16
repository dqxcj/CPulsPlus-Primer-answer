#include <iostream>
#include "Sales_item.h"

int main(){
    int i;
    Sales_item book[100];
    for(i = 0; std::cin >> book[i]; i++)
        ;
    for(int j = 0; j < i; j++)
        std::cout << book[j] << std::endl;
    return 0;
}
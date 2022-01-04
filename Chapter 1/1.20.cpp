#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item sale;
    while (std::cin >> sale) {
        std::cout << sale << std::endl;
    }
}
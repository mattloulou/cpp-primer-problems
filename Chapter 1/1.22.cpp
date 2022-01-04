#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item sum, val;
    if (std::cin >> sum) {
        while (std::cin >> val) {
            sum += val;
            std::cout << std::endl;
        }
        std::cout << sum << std::endl;
    }
    
}
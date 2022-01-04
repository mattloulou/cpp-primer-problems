#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item current, next;
    if (std::cin >> current) {
        int count = 1;
        while (std::cin >> next) {
            if (current.isbn() == next.isbn()) {
                ++count;
            } else {
                std::cout << "ISBN: " << current.isbn() << " Count: " << count << std::endl;
                count = 1;
                current = next;
            }
        }
        std::cout << "ISBN: " << current.isbn() << " Count: " << count << std::endl;

    }
}
#include <iostream>

int main()
{
    int first, last;
    std::cout << "please enter in two numbers, where first < second" << std::endl;
    std::cin >> first >> last;
    std::cout << "\n";
    while (first <= last) {
        std::cout << first << std::endl;
        ++first;
    }
}
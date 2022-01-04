//the final value of sum should be 0.

//test the hypothesis:
#include <iostream>
int main()
{
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
    sum += i;
    std::cout << sum;
}

//I was correct!
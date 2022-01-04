//predictions:
//line 3 and 4 will break

//testing:
#include <iostream>

int main()
{
    std::cout << "/*";
    std::cout << "*/";
    // std::cout << /* "*/" */;
    std:: cout << /*  "*/" /*  "/*"  */; //whoops, I made a mistake for this one.
}
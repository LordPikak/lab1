#include <iostream>

int main()
{
    int a,b,c,x;
    std::cout << "Please input a: ";
    std::cin >> a;
    std::cout << "Please input b: ";
    std::cin >> b;
    std::cout << "Please input c: ";
    std::cin >> c;
    x=(c-b)/a;
    std::cout << "Your solution is: " << x;


    return 0;
}

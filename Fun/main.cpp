#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    while (x%2==1)
    {
        for (int i=0; i<=20; i++)
        {
            x-=1;
            x=x+i;
            std::cout << x << std::endl;
        }
    }


    return 0;
}

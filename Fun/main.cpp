#include <iostream>
#include <math.h>
int main()
{
    for (int i=0; i<=360; i++)
    {
        std::cout << i << " " << sin(i) <<std::endl;
    }
    return 0;
}

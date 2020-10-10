#include <iostream>
#include <math.h>
int main()
{
    int poggers[5]={2,3,7,17,21};
    int i=0;
    while (i<6)
    {
        poggers[i]+=i;
        std::cout << poggers[i] << std::endl;
        i++;
    }
return 0;
}

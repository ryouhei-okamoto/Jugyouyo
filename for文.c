#include <stdio.h>

int main()
{
    int total = 0;
    
    for(int i = 0;i <= 10;i++)
    {
        total += i;
    }
    printf("1～10までの和は%dです\n",total);

    return 0;
}

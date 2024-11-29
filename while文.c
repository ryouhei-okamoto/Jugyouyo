#include <stdio.h>
#include <math.h>
int main()
{
    int i=1;
    
    printf("\t逆数\t２乗\t平方根\n");
    printf("ーーーーーーーーーーーーーー\n");
    
    while(i <= 10)
    {
        double value = i;
        double a = 1 / value;
        double b = value * value;
        double c = sqrt(value);
        printf("%5.1f\t%5.3f %6.1f\t%6.4f\n",value,a,b,c);
        i += 1;
    }


    return 0;
}

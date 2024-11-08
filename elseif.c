#include <stdio.h>

int main()
{
    int a,b,kekka;
    printf("数字を2つ入力してください。\n");
    scanf("%d %d",&a,&b);
    
    kekka = a + b;
    if (a % 2 == 0 && b % 2 == 0)
    {
        printf("2つの数字はともに偶数");
    }
    else if(a % 2 != 0 && b % 2 != 0)
    {
        printf("2つの数字はともに奇数");
    }
    
    else
    {
        printf("2つの数字は偶数または奇数");
    }
    
    return 0;
}

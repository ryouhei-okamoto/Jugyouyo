#include <stdio.h>

int main()
{
    int a,b,kekka;
    printf("足し算したい数字を2つ入力してください。\n");
    scanf("%d %d",&a,&b);
    
    kekka = a + b;
    
    printf("%d + %d = %d",a,b,kekka);


    return 0;
}

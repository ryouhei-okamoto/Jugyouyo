#include <stdio.h>

int main()
{
    int a,b,c;
    printf("a,b,cの数字を入力。\n");
    scanf("%d %d %d",&a,&b,&c);
    
    if( a < 20)
    printf("aは20より下\n");
    if( a >= 20)
    printf("aは20以上\n");
    if(b <= 50)
    printf("bは50以下\n");
    if(b > 50)
    printf("bは50より上\n");
    if(c <= 100)
    printf("cは100以下\n");
    if(c > 100)
    printf("cは100より上\n");
    
    if(a > b){printf("a > b\n");}
    if(a > c){printf("a > c\n");}
    
    return 0;
}

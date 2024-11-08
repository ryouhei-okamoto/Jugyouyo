#include <stdio.h>

int main()
{
    int d;
    char l;
    char s;
    
    printf("アルファベットの小文字を入力");
    scanf("%c",&s);
    d = 'a' - 'A';
    l = s - d ;
    printf("大文字は%c 小文字は%c \n",l,s);
    
    return 0;
}

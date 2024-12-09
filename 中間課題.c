#include <stdio.h>
#include <string.h>

int main()
{
    int i , large = 0 , small = 0 , number = 0;
    char buff[100];
    printf("Password:");
    
    scanf("%99s",buff);
    
    if(strlen(buff) >= 8)
    {
        printf("文字数が8文字以上\n");
        for(i = 0 ; i < 100 ; i++ )
        {
            if(buff[i] >= 'A' && buff[i] <= 'Z')
            large = 1;
            if(buff[i] >= 'a' && buff[i] <= 'z')
            small = 1;
            if(buff[i] >= '0' && buff[i] <= '9')
            number = 1;
        }

        if (large == 1 && small == 1 && number == 1)
        {
            printf("大文字、小文字、数字がすべて含まれている\n");
            printf("\nこれらより強いパスワードである\n");
        }
        if(large != 1)
        printf("大文字を含めてください\n");
        if(small != 1)
        printf("小文字を含めてください\n");
        if(number != 1)
        printf("数字を含めてください\n");
        
    }
    else
    printf("文字数を８文字以上にしてください\n");
    
    return 0;
}

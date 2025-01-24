#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int number1 = (rand() % 21);
    int number2 = (rand() % (21 - number1));
    int number3 = 20 - number1 -number2;
    
    printf("intelligenceは%d\n",number1);
    printf("staminaは%d\n",number2);
    printf("charismaは%d\n",number3);
    
    if(number1 > number2 && number1 > number3)
    {
        printf("クラスはmage");
    }
    if(number2 > number1 && number2 > number3)
    {
        printf("クラスはknight");
    }
    if(number3 > number1 && number3 > number2)
    {
        printf("クラスはthief");
    }
    
    if(number1 == number2 && number1 > number3)
    printf("クラスはmageとknightのデュアルクラスです");
    
    if(number3 == number2 && number3 > number1)
    printf("クラスはthiefとknightのデュアルクラスです");
    
    if(number1 == number3 && number1 > number2)
    printf("クラスはmageとthiefのデュアルクラスです");
    
    return 0;
}

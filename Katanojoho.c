#include <float.h>
#include <limits.h>
#include <stdio.h>


int main(void)
{
    
    printf("char最大値%d\n", CHAR_MAX);
    printf("char最小値%d\n", CHAR_MIN);
    printf("char符号なし最大値%d\n",UCHAR_MAX);
    printf("float精度%d\n", FLT_DIG);
    printf("long double最大値%Lg\n", LDBL_MAX);
    printf("int最小値%d\n", INT_MIN);

    return 0;
}

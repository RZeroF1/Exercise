#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num = 1;
    double sum1 = 0;
    double sum2 = 0;
    
    for (double i = 1; i - 100 < 0; i += 2)
        sum1 += num / i;

    for (double i = 2; i - 100 <= 0; i += 2)
        sum2 += num / i;

    sum1 -= sum2;
    printf("结果是%lf", sum1);
    return 0;
}

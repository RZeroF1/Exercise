#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    int res = 0;
    int ave = 0;

    printf("Type 10 numbers to get the average: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        res += num;
    }
    ave = res / 10;
    printf("\nThe average is %d\n", ave);
    return 0;
}

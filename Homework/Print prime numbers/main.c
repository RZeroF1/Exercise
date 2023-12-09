#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    for (int i = 100; i <= 200; i++)
    {
        int temp = 0;
        for (int j = 2; j <= i - 1; j++)
        {
            if (i % j == 0)
            {
                temp = 1;
                break;
            }
        }
        if (temp == 0)
        {
            printf("%d ", i);
            n++;
            if (n % 4 == 0)
            {
                printf("\n");
            }
        }
    }
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 1;
    int m = 9;
    printf("SOLUTION1\n");
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%2dX%d=%2d ", i, j, i * j);
            if (j == n)
            {
                printf("\n");
            }
        }
        n++;
    }
    printf("SOLUTION2\n");
    for (int i = 9; i > 0; i--)
    {
        for (int j = m; j > 0; j--)
        {
            printf("%2dX%d=%2d ", i, j, i * j);
        }
        m--;
        printf("\n");
    }
    return 0;
}

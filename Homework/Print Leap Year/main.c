#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    for (int i = 1000; i <= 2000; i += 1)
    {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 ==0)
        {
            printf("%d ", i);
            n++;
            if (n % 15 == 0)
            {
                printf("\n");
            }
        }
    }
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    while (scanf("%d", &a) != EOF)
    {
        for (int i = 0; i < a; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
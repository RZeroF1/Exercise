#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (0 == i % 3)
        {
            printf("%d\n", i);
            Sleep(50);
        }
        else
            continue;
    }
    return 0;
}

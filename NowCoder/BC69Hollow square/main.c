#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int num = 0;
    char arr[100][100] = { 0 };

    while (scanf("%d", &num) == 1)
    {
        //赋值
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < num; j++)
            {
                if (0 == i || num - 1 == i || 0 == j || num - 1 == j)
                {
                    arr[i][j] = '*';
                }
                else
                {
                    arr[i][j] = ' ';
                }
            }

        }
        //打印
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < num; j++)
            {
                printf("%c ", arr[i][j]);
            }
            printf("\n");
        }
    }


    return 0;
}

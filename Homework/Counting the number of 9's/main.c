#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0;
    int single = 0;

    printf("方法一：");
    for (int i = 1; i <= 100; i++)
    {
        single = i % 10;
        if (9 == single)
        {
            count++;
        }
        single = i / 10;
        if (9 == single)
        {
            count++;
        }
    }
    printf("%d", count);

    printf("\n方法二：");
    count = 0;
    for (int i = 1; i <= 100; i++)
    {
        int temp = i;
        while (temp != 0)//针对一个数处理
        {
            single = temp % 10;//留下个位数
            if (9 == single)
            {
                count++;
            }
            temp /= 10;
        }
    }
    printf("%d", count);

    return 0;
}

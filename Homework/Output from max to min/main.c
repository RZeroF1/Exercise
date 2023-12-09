#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num[3] = { 0 };
    printf("请输入三个数，它们将按从大到小的顺序排列：\n");
    for (int i = 0; i < 3; i++)
        scanf("%d", &num[i]);

    if (num[0] < num[1])
    {
        swap(&num[0], &num[1]);
    }

    if (num[1] < num[2])
    {
        swap(&num[1], &num[2]);
    }

    if (num[0] < num[1])
    {
        swap(&num[0], &num[1]);
    }

    printf("结果是%d %d %d", num[0], num[1], num[2]);

    return 0;
}


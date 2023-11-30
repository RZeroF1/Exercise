#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
    int arr[3];
    int number;
    scanf("%d", &number);
    for (int i = 0; i <= 2; i++)
    {
        arr[i] = number % 10;
        number /= 10;
    }
    if (arr[0] == 0 && arr[1] == 0)
        printf("%d", arr[2]);
    else if (arr[1] != 0 && arr[0] == 0)
        printf("%d%d", arr[1], arr[2]);
    else
        printf("%d%d%d", arr[0], arr[1], arr[2]);
    return 0;
}
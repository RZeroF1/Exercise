#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int max = arr[0];

    for (int i = 0; i < 10; i++)
    {
        max = max > arr[i] ? max : arr[i];
    }

    printf("Maximun : %d", max);
    return 0;
}

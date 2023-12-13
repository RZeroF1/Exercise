#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

static void swap(int arr1[5], int arr2[5], int temp[5])
{
    for (int i = 0; i < 5; i++)
    {
        temp[i] = arr1[i];
    }

    for (int i = 0; i < 5; i++)
    {
        arr1[i] = arr2[i];
    }

    for (int i = 0; i < 5; i++)
    {
        arr2[i] = temp[i];
    }
}

int main()
{
    int arrA[5] = { 1, 2, 3, 4, 5 };
    int arrB[5] = { 5, 4, 3, 2, 1 };
    int temp[5] = { 0 };
    printf("Original arrA:");
    for (int i = 0; i < 5; i++)
        printf("%d", arrA[i]);
    printf("\n"); 
    printf("Original arrB:");
    for (int i = 0; i < 5; i++)
        printf("%d", arrB[i]);
    printf("\n");
//Exchange
    swap(arrA, arrB, temp);

    printf("arrA:");
    for (int i = 0; i < 5; i++)
        printf("%d", arrA[i]);
    printf("\n");
    printf("arrB:");
    for (int i = 0; i < 5; i++)
        printf("%d", arrB[i]);
    printf("\n");
    return 0;
}

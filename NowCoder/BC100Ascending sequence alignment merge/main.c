#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m = 0;
    int n = 0;
    int arr[9999] = { 0 };
    scanf("%d%d", &m, &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = n; i < m + n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < m + n; i++)
    {
        for (int j = i + 1; j < m + n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ÊäÈëÑùÀı
//3
//12 34 - 5
#define MAXN 10

int Sum(int List[], int N);

int main()
{
    int List[MAXN], N, i;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%d", &List[i]);
    printf("%d\n", Sum(List, N));

    return 0;
}

int Sum(int List[], int N)
{
    int result = 0;
    for (int w = 0; w < N; w++)
    {
        result += List[w];
    }
    return result;
}
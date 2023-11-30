#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ÊäÈëÑùÀı
//3
//12.3 34 - 5
#define MAXN 10
typedef float ElementType;

ElementType Average(ElementType S[], int N);

int main()
{
    ElementType S[MAXN];
    int N, i;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%f", &S[i]);
    printf("%.2f\n", Average(S, N));

    return 0;
}

ElementType Average(ElementType S[], int N)
{
    ElementType result = 0.0;
    for (int i = 0; i < N; i++)
    {
        result += S[i];
    }
    return result / N;
}
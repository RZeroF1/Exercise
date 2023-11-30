#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
// ‰»Î—˘¿˝
//3
//12.3 34 - 5
#define MAXN 10
typedef float ElementType;

ElementType Max(ElementType S[], int N);

int main()
{
    ElementType S[MAXN];
    int N, i;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%f", &S[i]);
    printf("%.2f\n", Max(S, N));

    return 0;
}

ElementType Max(ElementType S[], int N)
{
    ElementType max = S[1];
    for (int i = 0; i < N; i++)
    {
        max = (max > S[i]) ? max : S[i];
    }
    return max;
}
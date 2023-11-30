#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAXN 10

//ÊäÈëÑùÀı
//2 1.1
//1 2.5 - 38.7

double f(int n, double a[], double x);

int main()
{
    int n, i;
    double a[MAXN], x;

    scanf("%d %lf", &n, &x);
    for (i = 0; i <= n; i++)
        scanf("%lf", &a[i]);
    printf("%.1f\n", f(n, a, x));
    return 0;
}

double f(int n, double a[], double x)
{
    double re = 0.0;
    for (int j = 0; j <= n; j++)
    {
        re += a[j] * pow(x, j);
    }
    return re;
}

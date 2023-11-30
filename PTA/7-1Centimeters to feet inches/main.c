#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//cm = (foot+inch/12)¡Á30.48
//foot = 12*inch
int main()
{
    double centi, inch, foot;
    scanf("%lf", &centi);
    foot = centi / 30.48;
    inch = (foot - (int)foot) * 12; 
    printf("%d %d", (int)foot, (int)inch);
    return 0;
}
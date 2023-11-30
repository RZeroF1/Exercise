#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
    char* province[5] = {"Anhui", "Beijing", "Chongqing", "Shanghai", "Zhejiang"};
    double area[5] = { 139600.00,16410.54,82400.00,6340.50,101800.00 };
    double pop[5] = { 6461.00,1180.70,3144.23,1360.26,4894.00 };
    printf("------------------------------------\n");
    printf("Province      Area(km2)   Pop.(10K)\n");
    printf("------------------------------------\n");
    for (int i = 0; i < 5; i++)
        printf("%-12s%11.2lf%10.2lf\n", province[i], area[i], pop[i]);
    printf("------------------------------------\n");
    return 0;
}
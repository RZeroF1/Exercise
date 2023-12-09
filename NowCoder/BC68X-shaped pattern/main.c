#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//根据输入数值，打印X型图案
//5
//*   *    11 51
// * *     22 42
//  *      33
// * *     24 44
//*   *    15 55

int main()
{
    int num = 0;
    while (scanf("%d", &num) != -1)
    {
        for (int i = 0; i < num; i++) 
        {
            for (int j = 0; j < num; j++) 
            {
                if (i == j || i + j == num - 1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    
    return 0;
}
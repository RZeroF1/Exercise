#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A = 0;
    int B = 0;
    printf("Enter two numbers \nto get their biggest common divisor(Separated by space):");
    while (scanf("%d %d", &A, &B) == 2)
    {      
        int i = 0;
        int temp = 0;

        if (A < B)
        {
            temp = A;
            A = B;
            B = temp;
        }

        for (i = A - 1; i > 0; i--)
        {
            if(0 == A % i)
            {
                if (0 == B % i)
                {
                    break;
                }
            }
        }
        printf("The biggest common divisor is %d\n", i);
        printf("Enter two numbers \nto get their biggest common divisor(Separated by space):");
    }
    return 0;
}

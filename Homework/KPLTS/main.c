#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "KPLTS.h"

int main()
{
    char JUDGEMENT[5] = { "exit" };
    char input1[100] = { 0 };

    do {
        menu();
        one:
        scanf("%s", input1);
        if (strcmp(input1, JUDGEMENT) == 0)
        {
            break;
        }
        if (strcmp(input1, "1") == 0) 
        {
            
        }
        else if (strcmp(input1, "2") == 0) 
        {

        }
        else if (strcmp(input1, "3") == 0)
        {

        }
        else if (strcmp(input1, "4") == 0)
        {

        }
        else if (strcmp(input1, "5") == 0) 
        {

        }
        else if (strcmp(input1, "6") == 0)
        {

        }
        else if (strcmp(input1, "7") == 0)
        {

        }
        else 
        {
            printf("Invalid content number! Please input correct number:");
            goto one;
        }
    } while (1);
    return 0;
}

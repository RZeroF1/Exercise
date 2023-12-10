#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Foundation.h"

int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));

    do{
        GameMenu();
        scanf("%d", &input);
        switch (input)
        {
        case 0:
            printf("Game Over!!!!!!!!!!!!\n");
            break;
        case 1:
            system("cls");
            Game();
            break;
        default:
            printf("\nPlease enter again: ");
        }
    } while (input);
    return 0;
}

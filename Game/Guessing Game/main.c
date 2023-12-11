#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static void gameMenu()
{
    printf("*************************************\n");
    printf("******** Guessing Game(0~100)********\n");
    printf("********      ->1.Play       ********\n");
    printf("********      ->0.Quit       ********\n");
    printf("*************************************\n");
    printf("*********Choose one to play or quit:");
}

int difficulty()
{
    int num = 0;
    int ret = 0;
    system("cls");
    printf("*************************************\n");
    printf("********      Difficulty     ********\n");
    printf("********      ->1.Easy       ********\n");
    printf("********      ->2.Hard       ********\n");
    printf("*************************************\n");
    printf("*************Choose your difficulty:");
    do {
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            ret = 9;
            break;
        case 2:
            ret = 5;
            break;
        default:
            printf("Invalid! Please enter again:");
            continue;
        }
        break;
    } while (1);
    return ret;
}

void game()
{
    int random = rand() % 100 + 1;
    int guess = 1;
    int count = difficulty();
    printf("请猜一个0~100的数字\n");
    while (count)
    {
        scanf("%d", &guess);
        if (guess < random)
        {
            count--;
            printf("Too small! Once again!\n");
            printf("%d times left!\n", count);
        }
        else if (guess > random)
        {
            count--;
            printf("Too high! Once again!\n");
            printf("%d times left!\n", count);
        }
        else
        {
            printf("You win! The number is %d.\n", random);
        }
    }
}

int main()
{
    int gate = 0;
    srand((unsigned int)time(NULL));
    do{
        gameMenu();
        scanf("%d", &gate);
        switch (gate)
        {
            case 1:
                game();
                break;
            case 0:
                break;
            default:
                system("cls");
                printf("Invalid! Please enter again\n");
        }
    } while (gate);
    return 0;
}
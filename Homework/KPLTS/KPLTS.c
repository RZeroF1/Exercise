#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "KPLTS.h"

void openfile(const char* file)
{
    system("cls");
    FILE* get = fopen(file, "r");
    if (get == NULL)
    {
        printf("Fail to open file\n");
        return 0;
    }
    printfch(get);
    fclose(get);
    get = NULL;
}

void printfch(FILE *ch)
{
	char buffer[9999] = { 0 };
	while (fgets(buffer, sizeof(buffer), ch) != NULL)
	{
		printf("%s", buffer);
	}
}

void back()
{
    char op[99] = { 0 };
    printf("\nEnter 'back' to return:");
    scanf("%s", op);
    if (strcmp("back",op) == 0)
    {
        return;
    }
    else
    {
        printf("\nInvalid! Please enter again:");
    }
}

void identity(char user[99])
{
    char id[99] = { 0 };
    printf("Tell me your ID, then you can enter the system:");
    scanf("%s", id);
    printf("Done! Loading KPLTS...\n");
    strcpy(user, id);
}

int method()
{
    char way[99] = { 0 };
    openfile("method.txt");
    scanf("%s", way);
    while (1)
    {
        if (strcmp(way, "1") == 0)
        {
            return 1;
        }
        else if (strcmp(way, "2") == 0)
        {
            return 2;
        }
        else if (strcmp(way, "3") == 0)
        {
            return 3;
        }
        else if (strcmp(way, "4") == 0)
        {
            return 4;
        }
        else if (strcmp(way, "5") == 0)
        {
            return 5;
        }
        else if (strcmp(way, "6") == 0)
        {
            return 6;
        }
        else
            printf("Ivalid! Please enter again:");
        while (getchar() != '\n');
        scanf("%s", way);
    }
}


void writelog(clock_t start, clock_t end, int method, const char* username, const char* file)
{

}

void viewlog()
{

}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include "KPLTS.h"

void menu()
{
	FILE* menu = fopen("Contents.txt", "r");
	if (menu == NULL)
	{
		printf("Fail to open Contents\n");
		return;
	}
	printfch(menu);
	fclose(menu);
	menu = NULL;
}

void printfch(FILE * ch)
{
	char buffer[9999] = { 0 };
	while (fgets(buffer, sizeof(buffer), ch) != NULL)
	{
		printf("%s", buffer);
	}
}

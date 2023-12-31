#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "KPLTS.h"

void openfile(const char* file)
{
    FILE* get = fopen(file, "r");
    if (get == NULL)
    {
        printf("Fail to open file\n");
        return;
    }
    printf("KPLTS*system***********************************************************************************************\n");
    printf("***********************************************************************************************************\n");
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
    while (1)
    {
        scanf("%s", op);
        if (strcmp("back", op) == 0)
        {
            return;
        }
        else
        {
            printf("Invalid! Please enter again:");
        }
    }
}

void identity(char user[99])
{
    char id[99] = { 0 };
    printf("KPLTS*Login***********************************************************************\n");
    printf("**********************************************************************************\n");
    printf("Info:If you exit the system improperly, some data will be lost.\n\n");
    printf("Tell me your ID\n\nThen you can enter KPLTS system:");
    scanf("%s", id);
    strcpy(user, id);
    printf("\nLoading KPLTS system");
    for (int i = 0; i < 6; i++)
    {
        Sleep(500);
        printf(".");
    }
    Sleep(500);
    printf("100%%\n\nDone!");
    Sleep(1000);
}

int method()
{
    char way[99] = { 0 };
    system("cls");
    openfile("method.txt");
    scanf("%s", way);
    while (1)
    {
        if (strcmp(way, "1") == 0)
        {
            system("cls");
            return 1;
        }
        else if (strcmp(way, "2") == 0)
        {
            system("cls");
            return 2;
        }
        else if (strcmp(way, "3") == 0)
        {
            system("cls");
            return 3;
        }
        else if (strcmp(way, "4") == 0)
        {
            system("cls");
            return 4;
        }
        else if (strcmp(way, "5") == 0)
        {
            system("cls");
            return 5;
        }
        else if (strcmp(way, "6") == 0)
        {
            system("cls");
            return 6;
        }
        else
            printf("Ivalid! Please enter again:");
        while (getchar() != '\n');
        scanf("%s", way);
    }
}

void writelog(clock_t start, clock_t end, int method, const char* username, const char* file, char* chapter, char* chapsec, int data[][dim2])
{
    double doustart = (double)start/1000;
    double douend = (double)end/1000;
    double elapse = douend - doustart;
    char originalmethod[50] = { 0 };

    if (method == 1)
    {
        strcpy(originalmethod, "Lecture");
    }
    else if (method == 2)
    {
        strcpy(originalmethod, "Tutorial");
    }
    else if (method == 3)
    {
        strcpy(originalmethod, "Practice");
    }
    else if (method == 4)
    {
        strcpy(originalmethod, "Online");
    }
    else if (method == 5)
    {
        strcpy(originalmethod, "Guided Learning");
    }
    else if (method == 6)
    {
        strcpy(originalmethod, "Independent Learning");
    }

    FILE* File = fopen("log.txt", "a");
    fclose(File);
    File = fopen("log.txt", "r+");

    if (File == NULL)
    {
        printf("Fail to open learning log...\n");
    }

    if (fgetc(File) == EOF)
    {
        fprintf(File,"User\t\tStart\t\tEnd\t\tDuration\tMethod\t\t\tKnowledge point\n");
    }
    fclose(File);

    File = fopen("log.txt", "a");
    fprintf(File, "%-16s%-16.2lf%-16.2lf%-16.2lf%-24s%s\n", username, doustart, douend,elapse, originalmethod, file);
    fclose(File);
    File = NULL;

    processing(chapter, elapse, data, method);
}

void removefile(const char* file)
{
    char re[99] = { 0 };
    system("cls");
    printf("KPLTS*Warning********************************************************************\n");
    printf("Are you sure you want to delete the log?\n\n");
    printf("\t1\tYES\n\n");
    printf("\t2\tNO\n\n");
    printf("Tell me the number you choose:");
    scanf("%s", re);
    printf("\nInfo:\n");
    if (strcmp(re, "1") == 0)
    {
        if (remove(file) == 0)
        {
            printf("Log deleted sucsessfully!\n");
        }
        else
        {
            printf("Error deleting file");
        }
    }
    else
        return;
}

void processing(char* pr, double elapse, int data[][dim2], int method)
{
    int chapter = atoi(pr);
    if (data[chapter - 1][method - 1] != 0)
        data[chapter - 1][method - 1] += (int)elapse;
    else
        data[chapter - 1][method - 1] = (int)elapse;
}

void viewlog(int data[][dim2])
{
    int s = 0;
    system("cls");
    printf("KPLTS*system*log*Cumulative learning times*****************************************************************\n");
    printf("***********************************************************************************************************\n");
    printf("\n\t\tL\tT\tP\tO\tGL\tIL\tTotal\n");
    for (int i = 0; i < dim1; i++) 
    {
        int sum = 0;
        printf("%11s","Chapter");
        printf("%-5d", i + 1);
        for (int j = 0; j < dim2; j++) 
        {
            printf("%-8d", data[i][j]);
        }
        for (int m = 0; m < dim2; m++)
        {
            sum += data[i][m];
        }
        printf("%-8d", sum);
        printf("\n\n");
    }
    printf("%16s", "Total      ");
    for (int j = 0; j < dim2; j++)
    {
        int sum = 0;
        for (int i = 0; i < dim1; i++)
        {
            sum += data[i][j];
        }
        printf("%-8d", sum);
        s += sum;
    }
    printf("%-8d\n", s);
    printf("\nInfo:The data in the table is in seconds\n");
}

void savedata(int data[][dim2])
{
    FILE* file = fopen("data.dat", "wb");
    if (file != NULL) {
        // 写入数组数据到文件
        fwrite(data, sizeof(double), dim1 * dim2, file);

        // 关闭文件
        fclose(file);
    }
    else {
        printf("Error: Unable to open file for writing.\n");
    }
}

void loadingdata(const char* File, int data[][dim2])
{
    FILE* file = fopen(File, "rb");
    if (file != NULL) 
    {
        // 读取文件中的数据到数组
        fread(data, sizeof(double), dim1 * dim2, file);

        // 关闭文件
        fclose(file);
    }
    else 
    {
        return;
    }
}

void removefilex(const char* file1, const char* file2)
{
    char re[99] = { 0 };
    system("cls");
    printf("KPLTS*Warning********************************************************************\n");
    printf("Are you sure you want to delete them?\n\n");
    printf("\t1\tYES\n\n");
    printf("\t2\tNO\n\n");
    printf("Tell me the number you choose:");
    scanf("%s", re);
    printf("\nInfo:\n");
    if (strcmp(re, "1") == 0)
    {
        if (remove(file1) == 0)
        {
            printf("Deleting Learninglog sucsessfully!\n");
        }
        else
        {
            printf("Learninglog dose NOT exist\n");
        }
        if (remove(file2) == 0)
        {
            printf("Deleting Cumulative learning times sucsessfully!\n");
        }
        else
        {
            printf("Cumulative learning times dose NOT exist\n");
        }
    }
    else
        return;
}
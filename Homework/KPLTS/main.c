#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include "KPLTS.h"

int main()
{
    char JUDGEMENT[5] = { "exit" };
    char input1[100] = { 0 };

    do {
        //print the contents
        const char* menu = "Contents.txt";
        openfile(menu);

        one:
        scanf("%s", input1);

        if (strcmp(input1, JUDGEMENT) == 0)
        {
            break;
        }
        if (strcmp(input1, "1") == 0) 
        {
            
            do {
                chap1:
                system("cls");
                const char* chapter1 = "resource/chap1/cont.txt";
                openfile(chapter1);
                char chapter1input[99] = { 0 };
                scanf("%s", chapter1input);
                if (strcmp(chapter1input, "1") == 0)
                {
                    char judge[99] = { 0 };
                    chap1cont:
                    system("cls");
                    const char* path = "resource/chap1/Getting Ready/cont.txt";
                    openfile(path);
                    printf("\nEnter 'back' to return");
                    scanf("%s", judge);
                    if (strcmp(judge, "back") == 0)
                    {
                        goto chap1;
                    }
                    else if (strcmp(judge, "1") == 0)
                    {
                        //clock_t starttime = starttimelog("resource/chap1/Getting Ready/1Whence C.txt");
                        system("cls");
                        char emm[99] = { 0 };
                        const char* chap1_1 = "resource/chap1/Getting Ready/1Whence C.txt";
                        openfile(chap1_1);
                        printf("\nEnter 'back' to return\n");
                        scanf("%s", emm);
                        if (strcmp(emm, "back") == 0)
                            goto chap1cont;
                        else
                            printf("Invalid! Please enter again!\n");
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        system("cls");
                        char emm[99] = { 0 };
                        const char* chap1_1 = "resource/chap1/Getting Ready/2Why C.txt";
                        openfile(chap1_1);
                        printf("\nEnter 'back' to return\n");
                        scanf("%s", emm);
                        if (strcmp(emm, "back") == 0)
                            goto chap1cont;
                        else
                            printf("Invalid! Please enter again!\n");
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        system("cls");
                        char emm[99] = { 0 };
                        const char* chap1_1 = "resource/chap1/Getting Ready/3What Computers Do.txt";
                        openfile(chap1_1);
                        printf("\nEnter 'back' to return\n");
                        scanf("%s", emm);
                        if (strcmp(emm, "back") == 0)
                            goto chap1cont;
                        else
                            printf("Invalid! Please enter again!\n");
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        system("cls");
                        char emm[99] = { 0 };
                        const char* chap1_1 = "resource/chap1/Getting Ready/4Shortcoming.txt";
                        openfile(chap1_1);
                        printf("\nEnter 'back' to return\n");
                        scanf("%s", emm);
                        if (strcmp(emm, "back") == 0)
                            goto chap1cont;
                        else
                            printf("Invalid! Please enter again!\n");
                    }
                    else if (strcmp(judge, "5") == 0)
                    {
                        system("cls");
                        char emm[99] = { 0 };
                        const char* chap1_1 = "resource/chap1/Getting Ready/5Language Standards.txt";
                        openfile(chap1_1);
                        printf("\nEnter 'back' to return\n");
                        scanf("%s", emm);
                        if (strcmp(emm, "back") == 0)
                            goto chap1cont;
                        else
                            printf("Invalid! Please enter again!\n");
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
                }
                else if (strcmp(chapter1input, "2") == 0)
                {
                    
                }
                else if (strcmp(chapter1input, "3") == 0)
                {
                    
                }
                else if (strcmp(chapter1input, "back") == 0)
                {
                    system("cls");
                    break;
                }
                else
                {
                    printf("Not found! Please input correct number:");
                }
            } while (1);
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
            printf("Not found! Please input correct number:");
            goto one;
        }
    } while (1);
    return 0;
}

typedef struct {
    char chapter[99];
    sec;
}learninglog, chap1log, chap2log, chap3log, chap4log, chap5log, chap6log, chap7log;//7

typedef struct {
    char section[99];
    know;
}sec, sec1log, sec2log, sec3log, sec4log, sec5log, sec6log, sec7log, sec8log, sec9log, sec10log;//10

typedef struct {
    char knowledgepoint[99];
}know, know1log, know2log, know3log, know5log, know6log, know7log, know8log, know9log, know10log;//10

typedef struct {
     int 
}method, T, S, P, O, Guided, Independent;//6
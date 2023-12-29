#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include "KPLTS.h"

int main()
{
    char user[99];
    char input1[99] = { 0 };
    identity(user);
    system("cls");
    do {
        printf("Hello, %s\n", user);
        //print the contents
        openfile("cont.txt");
    main:
        scanf("%s", input1);
        if (strcmp(input1, "1") == 0)
        {
            do {
            chap1:
                system("cls");
                openfile("con1.txt");
                char chapter1input[99] = { 0 };
                scanf("%s", chapter1input);
                if (strcmp(chapter1input, "1") == 0)
                {
                    char judge[99] = { 0 };
                chap1sec1:
                    system("cls");
                    openfile("con1.1.txt");
                    scanf("%s", judge);
                    if (strcmp(judge, "1") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("1.1.1 Whence C.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "1.1.1 Whence C.txt");
                        goto chap1sec1;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("1.1.2 Why C.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "1.1.2 Why C.txt");
                        goto chap1sec1;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("1.1.3 What Computers Do.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "1.1.3 What Computers Do.txt");
                        goto chap1sec1;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("1.1.4 Shortcoming.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "1.1.4 Shortcoming.txt");
                        goto chap1sec1;
                    }
                    else if (strcmp(judge, "5") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("1.1.5 Language Standards.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "1.1.5 Language Standards.txt");
                        goto chap1sec1;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap1;
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
                }
                else if (strcmp(chapter1input, "2") == 0)
                {
                    char judge[99] = { 0 };
                chap1sec2:
                    system("cls");
                    openfile("con1.2.txt");
                    scanf("%s", judge);
                    if (strcmp(judge, "1") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("1.2.1 The Structure of a Simple Program.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "1.2.1 The Structure of a Simple Program.txt");
                        goto chap1sec2;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("1.2.2 Introduction to keywords.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "1.2.2 Introduction to keywords.txt");
                        goto chap1sec2;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("1.2.3 Main function.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "1.2.3 Main function.txt");
                        goto chap1sec2;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("1.2.4 Library functions.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "1.2.4 Library functions.txt");
                        goto chap1sec2;
                    }
                    else if (strcmp(judge, "5") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("1.2.5 Compilation and Linking.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "1.2.5 Compilation and Linking.txt");
                        goto chap1sec2;
                    }
                    else if (strcmp(judge, "6") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("1.2.6 Characters and ASCII encoding.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "1.2.6 Characters and ASCII encoding.txt");
                        goto chap1sec2;
                    }
                    else if (strcmp(judge, "7") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("1.2.7 Debugging.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "1.2.7 Debugging.txt");
                        goto chap1sec2;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap2;
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
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
            do {
            chap2:
                system("cls");
                openfile("con2.txt");
                char chapter2input[99] = { 0 };
                scanf("%s", chapter2input);
                if (strcmp(chapter2input, "1") == 0)
                {
                    char judge[99] = { 0 };
                chap2sec1:
                    system("cls");
                    openfile("con2.1.txt");
                    scanf("%s", judge);
                    if (strcmp(judge, "1") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.1.1 int.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.1.1 int.txt");
                        goto chap2sec1;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.1.2 float.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.1.2 float.txt");
                        goto chap2sec1;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.1.3 long Constants and long long Constants.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.1.3 long Constants and long long Constants.txt");
                        goto chap2sec1;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.1.4 char.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.1.4 char.txt");
                        goto chap2sec1;
                    }
                    else if (strcmp(judge, "5") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.1.5 Signed or Unsigned.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.1.5 Signed or Unsigned.txt");
                        goto chap2sec1;
                    }
                    else if (strcmp(judge, "6") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.1.6 The _Bool Type.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.1.6 The _Bool Type.txt");
                        goto chap2sec1;
                    }
                    else if (strcmp(judge, "7") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.1.7 Types float, double, and long double.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.1.7 Types float, double, and long double.txt");
                        goto chap2sec1;
                    }
                    else if (strcmp(judge, "8") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.1.8 Conversion Specifiers and the Resulting Printed Output.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.1.8 Conversion Specifiers and the Resulting Printed Output.txt");
                        goto chap2sec1;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap2;
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
                }
                else if (strcmp(chapter2input, "2") == 0)
                {
                    char judge[99] = { 0 };
                chap2sec2:
                    system("cls");
                    openfile("con2.2.txt");
                    scanf("%s", judge);
                    if (strcmp(judge, "1") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.2.1 Assignment Operator.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.2.1 Assignment Operator.txt");
                        goto chap2sec2;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.2.2 Addition Operator.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.2.2 Addition Operator.txt");
                        goto chap2sec2;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.2.3 Subtraction Operator.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.2.3 Subtraction Operator.txt");
                        goto chap2sec2;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.2.4 Multiplication Operator.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.2.4 Multiplication Operator.txt");
                        goto chap2sec2;
                    }
                    else if (strcmp(judge, "5") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.2.5 Division Operator.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.2.5 Division Operator.txt");
                        goto chap2sec2;
                    }
                    else if (strcmp(judge, "6") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.2.6 Modulus Operator.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.2.6 Modulus Operator.txt");
                        goto chap2sec2;
                    }
                    else if (strcmp(judge, "7") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.2.7 Increment and Decrement Operators.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.2.7 Increment and Decrement Operators.txt");
                        goto chap2sec2;
                    }
                    else if (strcmp(judge, "8") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.2.8 Forced type conversion.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.2.8 Forced type conversion.txt");
                        goto chap2sec2;
                    }
                    else if (strcmp(judge, "9") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.2.9 More Assignment Operators.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.2.9 More Assignment Operators.txt");
                        goto chap2sec2;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap2;
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
                }
                else if (strcmp(chapter2input, "3") == 0)
                {
                    char judge[99] = { 0 };
                chap2sec3:
                    system("cls");
                    openfile("con2.3.txt");
                    scanf("%s", judge);
                    if (strcmp(judge, "1") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.3.1 Expressions.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.3.1 Expressions.txt");
                        goto chap2sec3;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.3.2 Statements.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.3.2 Statements.txt");
                        goto chap2sec3;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap1;
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
                    }
                else if (strcmp(chapter2input, "back") == 0)
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
        else if (strcmp(input1, "3") == 0)
        {
            do {
            chap3:
                system("cls");
                openfile("con3.txt");
                char chapter3input[99] = { 0 };
                scanf("%s", chapter3input);
                if (strcmp(chapter3input, "1") == 0)
                {
                    char judge[99] = { 0 };
                chap3sec1:
                    system("cls");
                    openfile("con3.1.txt");
                    scanf("%s", judge);
                    if (strcmp(judge, "1") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("3.1.1 while loop.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "3.1.1 while loop.txt");
                        goto chap3sec1;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("3.1.2 for loop.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "3.1.2 for loop.txt");
                        goto chap3sec1;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("3.1.3 do while.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "3.1.3 do while.txt");
                        goto chap3sec1;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap3;
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
                }
                else if (strcmp(chapter3input, "2") == 0)
                {
                    char judge[99] = { 0 };
                chap3sec2:
                    system("cls");
                    openfile("con3.2.txt");
                    scanf("%s", judge);
                    if (strcmp(judge, "1") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("3.2.1 The if Statement.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "3.2.1 The if Statement.txt");
                        goto chap3sec2;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("3.2.2 Adding else to the if Statement.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "3.2.2 Adding else to the if Statement.txt");
                        goto chap3sec2;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("3.2.3 The Conditional Operator.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "3.2.3 The Conditional Operator.txt");
                        goto chap3sec2;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("3.2.4 Loop Aids.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "3.2.4 Loop Aids.txt");
                        goto chap3sec2;
                    }
                    else if (strcmp(judge, "5") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("3.2.5 Multiple Choice.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "3.2.5 Multiple Choice.txt");
                        goto chap3sec2;
                    }
                    else if (strcmp(judge, "6") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("3.2.6 switch and if else.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "3.2.6 switch and if else.txt");
                        goto chap3sec2;
                    }
                    else if (strcmp(judge, "7") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("3.2.7 The goto Statement.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "3.2.7 The goto Statement.txt");
                        goto chap3sec2;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap3;
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
                }
                else if (strcmp(chapter3input, "back") == 0)
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
        else if (strcmp(input1, "4") == 0)
        {
            do {
            chap4:
                system("cls");
                openfile("con4.txt");
                char chapter4input[99] = { 0 };
                scanf("%s", chapter4input);
                if (strcmp(chapter4input, "1") == 0)
                {
                    char judge[99] = { 0 };
                chap4sec1:
                    system("cls");
                    openfile("con4.1.txt");
                    scanf("%s", judge);
                    if (strcmp(judge, "1") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("4.1.1 Creating and Using a Simple Function.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "4.1.1 Creating and Using a Simple Function.txt");
                        goto chap4sec1;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("4.1.2 Defining a Function with an Argument.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "4.1.2 Defining a Function with an Argument.txt");
                        goto chap4sec1;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("4.1.3 Prototyping a Function with Arguments.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "4.1.3 Prototyping a Function with Arguments.txt");
                        goto chap4sec1;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("4.1.4 Calling a Function with an Argument.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "4.1.4 Calling a Function with an Argument.txt");
                        goto chap4sec1;
                    }
                    else if (strcmp(judge, "5") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("4.1.5 The Black-Box Viewpoint.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "4.1.5 The Black-Box Viewpoint.txt");
                        goto chap4sec1;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap4;
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
                }
                else if (strcmp(chapter4input, "2") == 0)
                {
                    char judge[99] = { 0 };
                chap4sec2:
                    system("cls");
                    openfile("con4.2.txt");
                    scanf("%s", judge);
                    if (strcmp(judge, "1") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("4.2.1 Recursion Revealed.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "4.2.1 Recursion Revealed.txt");
                        goto chap4sec2;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("4.2.2 Recursion Fundamentals.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "4.2.2 Recursion Fundamentals.txt");
                        goto chap4sec2;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("4.2.3 Tail Recursion.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "4.2.3 Tail Recursion.txt");
                        goto chap4sec2;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("4.2.4 Recursion and Reversal.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "4.2.4 Recursion and Reversal.txt");
                        goto chap4sec2;
                    }
                    else if (strcmp(judge, "5") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("4.2.5 Recursion Pros and Cons.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "4.2.5 Recursion Pros and Cons.txt");
                        goto chap4sec2;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap4;
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
                }
                else if (strcmp(chapter4input, "3") == 0)
                {
                    char judge[99] = { 0 };
                chap4sec3:
                    system("cls");
                    openfile("con4.3.txt");
                    scanf("%s", judge);
                    if (strcmp(judge, "1") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("4.3.1 The & Operator.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "4.3.1 The & Operator.txt");
                        goto chap4sec3;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("4.3.2 The Indirection Operator.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "4.3.2 The Indirection Operator.txt");
                        goto chap4sec3;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("4.3.3 Declaring Pointers.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "4.3.3 Declaring Pointers.txt");
                        goto chap4sec3;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap4;
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
                }
                else if (strcmp(chapter4input, "back") == 0)
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
        else if (strcmp(input1, "5") == 0)
        {
            do {
            chap5:
                system("cls");
                openfile("con5.txt");
                char chapter5input[99] = { 0 };
                scanf("%s", chapter5input);
                if (strcmp(chapter5input, "1") == 0)
                {
                    char judge[99] = { 0 };
                chap5sec1:
                    system("cls");
                    openfile("con5.1.txt");
                    scanf("%s", judge);
                    if (strcmp(judge, "1") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("5.1.1 Initialization.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "5.1.1 Initialization.txt");
                        goto chap5sec1;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("5.1.2 Designated Initializers (C99).txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "5.1.2 Designated Initializers (C99).txt");
                        goto chap5sec1;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("5.1.3 Specifying an Array Size.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "5.1.3 Specifying an Array Size.txt");
                        goto chap5sec1;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("5.1.4 Initializing a Two-Dimensional Array.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "5.1.4 Initializing a Two-Dimensional Array.txt");
                        goto chap5sec1;
                    }
                    else if (strcmp(judge, "5") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("5.1.5 More Dimensions.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "5.1.5 More Dimensions.txt");
                        goto chap5sec1;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap5;
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
                }
                else if (strcmp(chapter5input, "2") == 0)
                {
                    char judge[99] = { 0 };
                chap5sec2:
                    system("cls");
                    openfile("con5.2.txt");
                    scanf("%s", judge);
                    if (strcmp(judge, "1") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("5.2.1 Using Pointer Parameters.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "5.2.1 Using Pointer Parameters.txt");
                        goto chap5sec2;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("5.2.2 Comment_ Pointers and Arrays.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "5.2.2 Comment_ Pointers and Arrays.txt");
                        goto chap5sec2;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap5;
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
                }
                else if (strcmp(chapter5input, "3") == 0)
                {
                    char judge[99] = { 0 };
                chap5sec3:
                    system("cls");
                    openfile("con4.3.txt");
                    scanf("%s", judge);
                    if (strcmp(judge, "1") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("5.3.1 Using const with Formal Parameters.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "5.3.1 Using const with Formal Parameters.txt");
                        goto chap5sec3;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("5.3.2 More About const.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "5.3.2 More About const.txt");
                        goto chap5sec3;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("5.3.3 Pointers to Multidimensional Arrays.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "5.3.3 Pointers to Multidimensional Arrays.txt");
                        goto chap5sec3;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("5.3.4 Pointer Compatibility.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "5.3.4 Pointer Compatibility.txt");
                        goto chap5sec3;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap1;
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
                }
                else if (strcmp(chapter5input, "back") == 0)
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
        else if (strcmp(input1, "6") == 0)
        {
            do {
            chap6:
                system("cls");
                openfile("con6.txt");
                char chapter6input[99] = { 0 };
                scanf("%s", chapter6input);
                if (strcmp(chapter6input, "1") == 0)
                {
                    char judge[99] = { 0 };
                chap6sec1:
                    system("cls");
                    openfile("con6.1.txt");
                    scanf("%s", judge);
                    if (strcmp(judge, "1") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.1.1 Initializing a Structure.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.1.1 Initializing a Structure.txt");
                        goto chap6sec1;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.1.2 Gaining Access to Structure Members.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.1.2 Gaining Access to Structure Members.txt");
                        goto chap6sec1;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.1.3 Initializers for Structures.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.1.3 Initializers for Structures.txt");
                        goto chap6sec1;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap6;
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
                }
                else if (strcmp(chapter6input, "2") == 0)
                {
                    char judge[99] = { 0 };
                chap6sec2:
                    system("cls");
                    openfile("con6.2.txt");
                    scanf("%s", judge);
                    if (strcmp(judge, "1") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.2.1 Declaring an Array of Structures.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.2.1 Declaring an Array of Structures.txt");
                        goto chap6sec2;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.2.2 Identifying Members of an Array of Structures.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.2.2 Identifying Members of an Array of Structures.txt");
                        goto chap6sec2;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap6;
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
                }
                else if (strcmp(chapter6input, "3") == 0)
                {
                    char judge[99] = { 0 };
                chap6sec3:
                    system("cls");
                    openfile("con6.3.txt");
                    scanf("%s", judge);
                    if (strcmp(judge, "1") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.3.1 Declaring and Initializing a Structure Pointer.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.3.1 Declaring and Initializing a Structure Pointer.txt");
                        goto chap6sec3;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.3.2 Member Access by Pointer.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.3.2 Member Access by Pointer.txt");
                        goto chap6sec3;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap6;
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
                }
                else if (strcmp(chapter6input, "4") == 0)
                {
                    char judge[99] = { 0 };
                chap6sec4:
                    system("cls");
                    openfile("con6.4.txt");
                    scanf("%s", judge);
                    if (strcmp(judge, "1") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.4.1 Using Unions.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.4.1 Using Unions.txt");
                        goto chap6sec4;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.4.2 Anonymous Unions.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.4.2 Anonymous Unions.txt");
                        goto chap6sec4;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap6;
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
                    }
                else if (strcmp(chapter6input, "5") == 0)
                {
                    char judge[99] = { 0 };
                chap6sec5:
                    system("cls");
                    openfile("con6.5.txt");
                    scanf("%s", judge);
                    if (strcmp(judge, "1") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.5.1 enum Constants.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.5.1 enum Constants.txt");
                        goto chap6sec5;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.5.2 Default Values.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.5.2 Default Values.txt");
                        goto chap6sec5;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.5.3 Assigned Values.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.5.3 Assigned Values.txt");
                        goto chap6sec5;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.5.4 enum Usage.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.5.4 enum Usage.txt");
                        goto chap6sec5;
                    }
                    else if (strcmp(judge, "5") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.5.5 Shared Namespaces.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.5.5 Shared Namespaces.txt");
                        goto chap6sec5;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap6;
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
                    }
                else if (strcmp(chapter6input, "6") == 0)
                {
                    char judge[99] = { 0 };
                chap6sec6:
                    system("cls");
                    openfile("con6.6.txt");
                    scanf("%s", judge);
                    if (strcmp(judge, "1") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.6.1 typedef A Quick Look.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.6.1 typedef A Quick Look.txt");
                        goto chap6sec6;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap6;
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
                    }
                else if (strcmp(chapter6input, "back") == 0)
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
        else if (strcmp(input1, "7") == 0)
        {
            do {
            chap7:
                system("cls");
                openfile("con7.txt");
                char chapter7input[99] = { 0 };
                scanf("%s", chapter7input);
                if (strcmp(chapter7input, "1") == 0)
                {
                    char judge[99] = { 0 };
                chap7sec1:
                    system("cls");
                    openfile("con7.1.txt");
                    scanf("%s", judge);
                    if (strcmp(judge, "1") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.1.1 The fopen() Function.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.1.1 The fopen() Function.txt");
                        goto chap7sec1;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.1.2 The getc() and putc() Functions.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.1.2 The getc() and putc() Functions.txt");
                        goto chap7sec1;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.1.3 End-of-File.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.1.3 End-of-File.txt");
                        goto chap7sec1;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.1.4 The fclose() Function.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.1.4 The fclose() Function.txt");
                        goto chap7sec1;
                    }
                    else if (strcmp(judge, "5") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.1.5 Pointers to the Standard Files.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.1.5 Pointers to the Standard Files.txt");
                        goto chap7sec1;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap7;
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
                }
                else if (strcmp(chapter7input, "2") == 0)
                {
                    char judge[99] = { 0 };
                chap7sec2:
                    system("cls");
                    openfile("con7.2.txt");
                    scanf("%s", judge);
                    if (strcmp(judge, "1") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.2.1 The fprintf() and fscanf() Functions.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.2.1 The fprintf() and fscanf() Functions.txt");
                        goto chap7sec2;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.2.2 The fgets() and fputs() Functions.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.2.2 The fgets() and fputs() Functions.txt");
                        goto chap7sec2;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap7;
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
                }
                else if (strcmp(chapter7input, "3") == 0)
                {
                    char judge[99] = { 0 };
                chap7sec3:
                    system("cls");
                    openfile("con7.3.txt");
                    scanf("%s", judge);
                    if (strcmp(judge, "1") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.3.1 How fseek() and ftell() Work.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.3.1 How fseek() and ftell() Work.txt");
                        goto chap7sec3;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.3.2 Binary Versus Text Mode.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.3.2 Binary Versus Text Mode.txt");
                        goto chap7sec3;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.3.3 Portability.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.3.3 Portability.txt");
                        goto chap7sec3;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.3.4 The fgetpos() and fsetpos() Functions.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.3.4 The fgetpos() and fsetpos() Functions.txt");
                        goto chap7sec3;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap7;
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
                }
                else if (strcmp(chapter7input, "4") == 0)
                {
                    char judge[99] = { 0 };
                chap7sec4:
                    system("cls");
                    openfile("con7.4.txt");
                    scanf("%s", judge);
                    if (strcmp(judge, "1") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.4.1 The int unget Function.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.4.1 The int unget Function.txt");
                        goto chap7sec4;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.4.2 The int fflush() Function.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.4.2 The int fflush() Function.txt");
                        goto chap7sec4;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.4.3 The int setvbuf() Function.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.4.3 The int setvbuf() Function.txt");
                        goto chap7sec4;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.4.4 Binary IO fread() and fwrite().txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.4.4 Binary IO fread() and fwrite().txt");
                        goto chap7sec4;
                    }
                    else if (strcmp(judge, "5") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.4.5 The size_t fwrite() Function.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.4.5 The size_t fwrite() Function.txt");
                        goto chap7sec4;
                    }
                    else if (strcmp(judge, "6") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.4.6 The size_t fread() Function.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.4.6 The size_t fread() Function.txt");
                        goto chap7sec4;
                    }
                    else if (strcmp(judge, "7") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.4.7 The int feof and int ferror Functions.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.4.7 The int feof and int ferror Functions.txt");
                        goto chap7sec4;
                    }
                    else if (strcmp(judge, "8") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.4.8 An fread() and fwrite() Example.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.4.8 An fread() and fwrite() Example.txt");
                        goto chap7sec4;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap7;
                    }
                    else
                    {
                        printf("Not found! Please input correct number:");
                    }
                    }
                else if (strcmp(chapter7input, "back") == 0)
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
        else if (strcmp(input1, "8") == 0)
        {
            viewlog();
        }
        else if (strcmp(input1, "9") == 0)
        {
            break;
        }
        else
        {
            printf("Not found! Please input correct number:");
            goto main;
        }
    } while (1);
    return 0;
}

//typedef struct {
//    char chapter[99];
//    sec;
//}learninglog, chap1log, chap2log, chap3log, chap4log, chap5log, chap6log, chap7log;//7

//typedef struct {
//    char section[99];
//    know;
//}sec, sec1log, sec2log, sec3log, sec4log, sec5log, sec6log, sec7log, sec8log, sec9log, sec10log;//10

//typedef struct {
//    char knowledgepoint[99];
//}know, know1log, know2log, know3log, know5log, know6log, know7log, know8log, know9log, know10log;//10

//typedef struct {
//    int j;
//}method, T, S, P, O, Guided, Independent;//6
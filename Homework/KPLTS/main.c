#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include "KPLTS.h"

int learningdata[dim1][dim2] = { 0 };

int main()
{
    char user[99];
    char input1[99] = { 0 };
    identity(user);
    loadingdata("data.dat", learningdata);
    do {
    main:
        system("cls");
        printf("Welcome! %s.\n", user);
        openfile("cont.txt");
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
                        writelog(starttime, endtime, way, user, "1.1.1 Whence C.txt", input1, chapter1input, learningdata);
                        goto chap1sec1;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("1.1.2 Why C.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "1.1.2 Why C.txt", input1, chapter1input, learningdata);
                        goto chap1sec1;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("1.1.3 What Computers Do.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "1.1.3 What Computers Do.txt", input1, chapter1input, learningdata);
                        goto chap1sec1;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("1.1.4 Shortcoming.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "1.1.4 Shortcoming.txt", input1, chapter1input, learningdata);
                        goto chap1sec1;
                    }
                    else if (strcmp(judge, "5") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("1.1.5 Language Standards.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "1.1.5 Language Standards.txt", input1, chapter1input, learningdata);
                        goto chap1sec1;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap1;
                    }
                    else
                    {
                        goto chap1sec1;
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
                        writelog(starttime, endtime, way, user, "1.2.1 The Structure of a Simple Program.txt", input1, chapter1input, learningdata);
                        goto chap1sec2;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("1.2.2 Introduction to keywords.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "1.2.2 Introduction to keywords.txt", input1, chapter1input, learningdata);
                        goto chap1sec2;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("1.2.3 Main function.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "1.2.3 Main function.txt", input1, chapter1input, learningdata);
                        goto chap1sec2;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("1.2.4 Library functions.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "1.2.4 Library functions.txt", input1, chapter1input, learningdata);
                        goto chap1sec2;
                    }
                    else if (strcmp(judge, "5") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("1.2.5 Compilation and Linking.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "1.2.5 Compilation and Linking.txt", input1, chapter1input, learningdata);
                        goto chap1sec2;
                    }
                    else if (strcmp(judge, "6") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("1.2.6 Characters and ASCII encoding.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "1.2.6 Characters and ASCII encoding.txt", input1, chapter1input, learningdata);
                        goto chap1sec2;
                    }
                    else if (strcmp(judge, "7") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("1.2.7 Debugging.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "1.2.7 Debugging.txt", input1, chapter1input, learningdata);
                        goto chap1sec2;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap1;
                    }
                    else
                    {
                        goto chap1sec2;
                    }
                }
                else if (strcmp(chapter1input, "back") == 0)
                {
                    break;
                }
                else
                {
                    continue;
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
                        writelog(starttime, endtime, way, user, "2.1.1 int.txt",input1, chapter2input, learningdata);
                        goto chap2sec1;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.1.2 float.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.1.2 float.txt", input1, chapter2input, learningdata);
                        goto chap2sec1;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.1.3 long Constants and long long Constants.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.1.3 long Constants and long long Constants.txt", input1, chapter2input, learningdata);
                        goto chap2sec1;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.1.4 char.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.1.4 char.txt", input1, chapter2input, learningdata);
                        goto chap2sec1;
                    }
                    else if (strcmp(judge, "5") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.1.5 Signed or Unsigned.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.1.5 Signed or Unsigned.txt", input1, chapter2input, learningdata);
                        goto chap2sec1;
                    }
                    else if (strcmp(judge, "6") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.1.6 The _Bool Type.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.1.6 The _Bool Type.txt", input1, chapter2input, learningdata);
                        goto chap2sec1;
                    }
                    else if (strcmp(judge, "7") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.1.7 Types float, double, and long double.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.1.7 Types float, double, and long double.txt", input1, chapter2input, learningdata);
                        goto chap2sec1;
                    }
                    else if (strcmp(judge, "8") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.1.8 Conversion Specifiers and the Resulting Printed Output.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.1.8 Conversion Specifiers and the Resulting Printed Output.txt", input1, chapter2input, learningdata);
                        goto chap2sec1;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap2;
                    }
                    else
                    {
                        goto chap2sec1;
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
                        writelog(starttime, endtime, way, user, "2.2.1 Assignment Operator.txt", input1, chapter2input, learningdata);
                        goto chap2sec2;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.2.2 Addition Operator.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.2.2 Addition Operator.txt", input1, chapter2input, learningdata);
                        goto chap2sec2;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.2.3 Subtraction Operator.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.2.3 Subtraction Operator.txt", input1, chapter2input, learningdata);
                        goto chap2sec2;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.2.4 Multiplication Operator.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.2.4 Multiplication Operator.txt", input1, chapter2input, learningdata);
                        goto chap2sec2;
                    }
                    else if (strcmp(judge, "5") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.2.5 Division Operator.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.2.5 Division Operator.txt", input1, chapter2input, learningdata);
                        goto chap2sec2;
                    }
                    else if (strcmp(judge, "6") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.2.6 Modulus Operator.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.2.6 Modulus Operator.txt", input1, chapter2input, learningdata);
                        goto chap2sec2;
                    }
                    else if (strcmp(judge, "7") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.2.7 Increment and Decrement Operators.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.2.7 Increment and Decrement Operators.txt", input1, chapter2input, learningdata);
                        goto chap2sec2;
                    }
                    else if (strcmp(judge, "8") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.2.8 Forced type conversion.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.2.8 Forced type conversion.txt", input1, chapter2input, learningdata);
                        goto chap2sec2;
                    }
                    else if (strcmp(judge, "9") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.2.9 More Assignment Operators.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.2.9 More Assignment Operators.txt", input1, chapter2input, learningdata);
                        goto chap2sec2;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap2;
                    }
                    else
                    {
                        goto chap2sec2;
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
                        writelog(starttime, endtime, way, user, "2.3.1 Expressions.txt", input1, chapter2input, learningdata);
                        goto chap2sec3;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("2.3.2 Statements.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "2.3.2 Statements.txt", input1, chapter2input, learningdata);
                        goto chap2sec3;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap2;
                    }
                    else
                    {
                        goto chap2sec3;
                    }
                }
                else if (strcmp(chapter2input, "back") == 0)
                {
                    break;
                }
                else
                {
                    continue;
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
                        writelog(starttime, endtime, way, user, "3.1.1 while loop.txt", input1, chapter3input, learningdata);
                        goto chap3sec1;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("3.1.2 for loop.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "3.1.2 for loop.txt", input1, chapter3input, learningdata);
                        goto chap3sec1;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("3.1.3 do while.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "3.1.3 do while.txt", input1, chapter3input, learningdata);
                        goto chap3sec1;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap3;
                    }
                    else
                    {
                        goto chap3sec1;
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
                        writelog(starttime, endtime, way, user, "3.2.1 The if Statement.txt", input1, chapter3input, learningdata);
                        goto chap3sec2;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("3.2.2 Adding else to the if Statement.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "3.2.2 Adding else to the if Statement.txt", input1, chapter3input, learningdata);
                        goto chap3sec2;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("3.2.3 The Conditional Operator.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "3.2.3 The Conditional Operator.txt", input1, chapter3input, learningdata);
                        goto chap3sec2;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("3.2.4 Loop Aids.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "3.2.4 Loop Aids.txt", input1, chapter3input, learningdata);
                        goto chap3sec2;
                    }
                    else if (strcmp(judge, "5") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("3.2.5 Multiple Choice.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "3.2.5 Multiple Choice.txt", input1, chapter3input, learningdata);
                        goto chap3sec2;
                    }
                    else if (strcmp(judge, "6") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("3.2.6 switch and if else.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "3.2.6 switch and if else.txt", input1, chapter3input, learningdata);
                        goto chap3sec2;
                    }
                    else if (strcmp(judge, "7") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("3.2.7 The goto Statement.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "3.2.7 The goto Statement.txt", input1, chapter3input, learningdata);
                        goto chap3sec2;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap3;
                    }
                    else
                    {
                        goto chap3sec2;
                    }
                }
                else if (strcmp(chapter3input, "back") == 0)
                {
                    break;
                }
                else
                {
                    continue;
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
                        writelog(starttime, endtime, way, user, "4.1.1 Creating and Using a Simple Function.txt", input1, chapter4input, learningdata);
                        goto chap4sec1;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("4.1.2 Defining a Function with an Argument.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "4.1.2 Defining a Function with an Argument.txt", input1, chapter4input, learningdata);
                        goto chap4sec1;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("4.1.3 Prototyping a Function with Arguments.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "4.1.3 Prototyping a Function with Arguments.txt", input1, chapter4input, learningdata);
                        goto chap4sec1;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("4.1.4 Calling a Function with an Argument.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "4.1.4 Calling a Function with an Argument.txt", input1, chapter4input, learningdata);
                        goto chap4sec1;
                    }
                    else if (strcmp(judge, "5") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("4.1.5 The Black-Box Viewpoint.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "4.1.5 The Black-Box Viewpoint.txt", input1, chapter4input, learningdata);
                        goto chap4sec1;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap4;
                    }
                    else
                    {
                        goto chap4sec1;
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
                        writelog(starttime, endtime, way, user, "4.2.1 Recursion Revealed.txt", input1, chapter4input, learningdata);
                        goto chap4sec2;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("4.2.2 Recursion Fundamentals.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "4.2.2 Recursion Fundamentals.txt", input1, chapter4input, learningdata);
                        goto chap4sec2;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("4.2.3 Tail Recursion.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "4.2.3 Tail Recursion.txt", input1, chapter4input, learningdata);
                        goto chap4sec2;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("4.2.4 Recursion and Reversal.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "4.2.4 Recursion and Reversal.txt", input1, chapter4input, learningdata);
                        goto chap4sec2;
                    }
                    else if (strcmp(judge, "5") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("4.2.5 Recursion Pros and Cons.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "4.2.5 Recursion Pros and Cons.txt", input1, chapter4input, learningdata);
                        goto chap4sec2;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap4;
                    }
                    else
                    {
                        goto chap4sec2;
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
                        writelog(starttime, endtime, way, user, "4.3.1 The & Operator.txt", input1, chapter4input, learningdata);
                        goto chap4sec3;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("4.3.2 The Indirection Operator.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "4.3.2 The Indirection Operator.txt", input1, chapter4input, learningdata);
                        goto chap4sec3;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("4.3.3 Declaring Pointers.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "4.3.3 Declaring Pointers.txt", input1, chapter4input, learningdata);
                        goto chap4sec3;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap4;
                    }
                    else
                    {
                        goto chap4sec3;
                    }
                }
                else if (strcmp(chapter4input, "back") == 0)
                {
                    break;
                }
                else
                {
                    continue;
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
                        writelog(starttime, endtime, way, user, "5.1.1 Initialization.txt", input1, chapter5input, learningdata);
                        goto chap5sec1;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("5.1.2 Designated Initializers (C99).txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "5.1.2 Designated Initializers (C99).txt", input1, chapter5input, learningdata);
                        goto chap5sec1;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("5.1.3 Specifying an Array Size.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "5.1.3 Specifying an Array Size.txt", input1, chapter5input, learningdata);
                        goto chap5sec1;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("5.1.4 Initializing a Two-Dimensional Array.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "5.1.4 Initializing a Two-Dimensional Array.txt", input1, chapter5input, learningdata);
                        goto chap5sec1;
                    }
                    else if (strcmp(judge, "5") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("5.1.5 More Dimensions.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "5.1.5 More Dimensions.txt", input1, chapter5input, learningdata);
                        goto chap5sec1;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap5;
                    }
                    else
                    {
                        goto chap5sec1;
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
                        writelog(starttime, endtime, way, user, "5.2.1 Using Pointer Parameters.txt", input1, chapter5input, learningdata);
                        goto chap5sec2;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("5.2.2 Comment_ Pointers and Arrays.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "5.2.2 Comment_ Pointers and Arrays.txt", input1, chapter5input, learningdata);
                        goto chap5sec2;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap5;
                    }
                    else
                    {
                        goto chap5sec2;
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
                        writelog(starttime, endtime, way, user, "5.3.1 Using const with Formal Parameters.txt", input1, chapter5input, learningdata);
                        goto chap5sec3;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("5.3.2 More About const.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "5.3.2 More About const.txt", input1, chapter5input, learningdata);
                        goto chap5sec3;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("5.3.3 Pointers to Multidimensional Arrays.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "5.3.3 Pointers to Multidimensional Arrays.txt", input1, chapter5input, learningdata);
                        goto chap5sec3;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("5.3.4 Pointer Compatibility.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "5.3.4 Pointer Compatibility.txt", input1, chapter5input, learningdata);
                        goto chap5sec3;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap5;
                    }
                    else
                    {
                        goto chap5sec3;
                    }
                }
                else if (strcmp(chapter5input, "back") == 0)
                {
                    break;
                }
                else
                {
                    continue;
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
                        writelog(starttime, endtime, way, user, "6.1.1 Initializing a Structure.txt", input1, chapter6input, learningdata);
                        goto chap6sec1;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.1.2 Gaining Access to Structure Members.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.1.2 Gaining Access to Structure Members.txt", input1, chapter6input, learningdata);
                        goto chap6sec1;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.1.3 Initializers for Structures.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.1.3 Initializers for Structures.txt", input1, chapter6input, learningdata);
                        goto chap6sec1;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap6;
                    }
                    else
                    {
                        goto chap6sec1;
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
                        writelog(starttime, endtime, way, user, "6.2.1 Declaring an Array of Structures.txt", input1, chapter6input, learningdata);
                        goto chap6sec2;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.2.2 Identifying Members of an Array of Structures.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.2.2 Identifying Members of an Array of Structures.txt", input1, chapter6input, learningdata);
                        goto chap6sec2;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap6;
                    }
                    else
                    {
                        goto chap6sec2;
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
                        writelog(starttime, endtime, way, user, "6.3.1 Declaring and Initializing a Structure Pointer.txt", input1, chapter6input, learningdata);
                        goto chap6sec3;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.3.2 Member Access by Pointer.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.3.2 Member Access by Pointer.txt", input1, chapter6input, learningdata);
                        goto chap6sec3;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap6;
                    }
                    else
                    {
                        goto chap6sec3;
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
                        writelog(starttime, endtime, way, user, "6.4.1 Using Unions.txt", input1, chapter6input, learningdata);
                        goto chap6sec4;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.4.2 Anonymous Unions.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.4.2 Anonymous Unions.txt", input1, chapter6input, learningdata);
                        goto chap6sec4;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap6;
                    }
                    else
                    {
                        goto chap6sec4;
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
                        writelog(starttime, endtime, way, user, "6.5.1 enum Constants.txt", input1, chapter6input, learningdata);
                        goto chap6sec5;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.5.2 Default Values.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.5.2 Default Values.txt", input1, chapter6input, learningdata);
                        goto chap6sec5;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.5.3 Assigned Values.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.5.3 Assigned Values.txt", input1, chapter6input, learningdata);
                        goto chap6sec5;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.5.4 enum Usage.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.5.4 enum Usage.txt", input1, chapter6input, learningdata);
                        goto chap6sec5;
                    }
                    else if (strcmp(judge, "5") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("6.5.5 Shared Namespaces.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "6.5.5 Shared Namespaces.txt", input1, chapter6input, learningdata);
                        goto chap6sec5;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap6;
                    }
                    else
                    {
                        goto chap6sec5;
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
                        writelog(starttime, endtime, way, user, "6.6.1 typedef A Quick Look.txt", input1, chapter6input, learningdata);
                        goto chap6sec6;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap6;
                    }
                    else
                    {
                        goto chap6sec6;
                    }
                }
                else if (strcmp(chapter6input, "back") == 0)
                {
                    break;
                }
                else
                {
                    continue;
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
                        writelog(starttime, endtime, way, user, "7.1.1 The fopen() Function.txt", input1, chapter7input, learningdata);
                        goto chap7sec1;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.1.2 The getc() and putc() Functions.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.1.2 The getc() and putc() Functions.txt", input1, chapter7input, learningdata);
                        goto chap7sec1;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.1.3 End-of-File.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.1.3 End-of-File.txt", input1, chapter7input, learningdata);
                        goto chap7sec1;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.1.4 The fclose() Function.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.1.4 The fclose() Function.txt", input1, chapter7input, learningdata);
                        goto chap7sec1;
                    }
                    else if (strcmp(judge, "5") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.1.5 Pointers to the Standard Files.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.1.5 Pointers to the Standard Files.txt", input1, chapter7input, learningdata);
                        goto chap7sec1;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap7;
                    }
                    else
                    {
                        goto chap7sec1;
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
                        writelog(starttime, endtime, way, user, "7.2.1 The fprintf() and fscanf() Functions.txt", input1, chapter7input, learningdata);
                        goto chap7sec2;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.2.2 The fgets() and fputs() Functions.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.2.2 The fgets() and fputs() Functions.txt", input1, chapter7input, learningdata);
                        goto chap7sec2;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap7;
                    }
                    else
                    {
                        goto chap7sec2;
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
                        writelog(starttime, endtime, way, user, "7.3.1 How fseek() and ftell() Work.txt", input1, chapter7input, learningdata);
                        goto chap7sec3;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.3.2 Binary Versus Text Mode.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.3.2 Binary Versus Text Mode.txt", input1, chapter7input, learningdata);
                        goto chap7sec3;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.3.3 Portability.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.3.3 Portability.txt", input1, chapter7input, learningdata);
                        goto chap7sec3;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.3.4 The fgetpos() and fsetpos() Functions.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.3.4 The fgetpos() and fsetpos() Functions.txt", input1, chapter7input, learningdata);
                        goto chap7sec3;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap7;
                    }
                    else
                    {
                        goto chap7sec3;
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
                        writelog(starttime, endtime, way, user, "7.4.1 The int unget Function.txt", input1, chapter7input, learningdata);
                        goto chap7sec4;
                    }
                    else if (strcmp(judge, "2") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.4.2 The int fflush() Function.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.4.2 The int fflush() Function.txt", input1, chapter7input, learningdata);
                        goto chap7sec4;
                    }
                    else if (strcmp(judge, "3") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.4.3 The int setvbuf() Function.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.4.3 The int setvbuf() Function.txt", input1, chapter7input, learningdata);
                        goto chap7sec4;
                    }
                    else if (strcmp(judge, "4") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.4.4 Binary IO fread() and fwrite().txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.4.4 Binary IO fread() and fwrite().txt", input1, chapter7input, learningdata);
                        goto chap7sec4;
                    }
                    else if (strcmp(judge, "5") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.4.5 The size_t fwrite() Function.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.4.5 The size_t fwrite() Function.txt", input1, chapter7input, learningdata);
                        goto chap7sec4;
                    }
                    else if (strcmp(judge, "6") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.4.6 The size_t fread() Function.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.4.6 The size_t fread() Function.txt", input1, chapter7input, learningdata);
                        goto chap7sec4;
                    }
                    else if (strcmp(judge, "7") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.4.7 The int feof and int ferror Functions.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.4.7 The int feof and int ferror Functions.txt", input1, chapter7input, learningdata);
                        goto chap7sec4;
                    }
                    else if (strcmp(judge, "8") == 0)
                    {
                        int way = method();
                        clock_t starttime = clock();
                        openfile("7.4.8 An fread() and fwrite() Example.txt");
                        back();
                        clock_t endtime = clock();
                        writelog(starttime, endtime, way, user, "7.4.8 An fread() and fwrite() Example.txt", input1, chapter7input, learningdata);
                        goto chap7sec4;
                    }
                    else if (strcmp(judge, "back") == 0)
                    {
                        goto chap7;
                    }
                    else
                    {
                        goto chap7sec4;
                    }
                }
                else if (strcmp(chapter7input, "back") == 0)
                {
                    break;
                }
                else
                {
                    continue;
                }
            } while (1);
        }
        else if (strcmp(input1, "8") == 0)
        {
            system("cls");
            char option[99] = { 0 };
            printf("KPLTS*LOG**************************************************************************\n");
            printf("Which log do you want to browse?\n\n");
            printf("\t1\tLearninglog\n\n");
            printf("\t2\tCumulative learning times\n\n");
            printf("Tell me the number you choose(Any other key returns):");
            scanf("%s", option);
            if (strcmp(option, "1") == 0)
            {
                openfile("log.txt");
            }
            else if (strcmp(option, "2") == 0)
            {
                viewlog(learningdata);
            }
            else
            {
                goto main;
            }
            back();
        }
        else if (strcmp(input1, "9") == 0)
        {
            system("cls");
            char option[99] = { 0 };
            printf("KPLTS*LOG**************************************************************************\n");
            printf("Which log do you want to delete?\n\n");
            printf("\t1\tLearninglog\n\n");
            printf("\t2\tCumulative learning times\n\n");
            printf("\t3\tALL\n\n");
            printf("Tell me the number you choose(Any other key returns):");
        
            scanf("%s", option);
            if (strcmp(option, "1") == 0)
            {
                removefile("log.txt");
            }
            else if (strcmp(option, "2") == 0)
            {
                removefile("data.dat");
            }
            else if (strcmp(option, "3") == 0)
            { 
                removefilex("log.txt", "data.dat");
            }
            else
                goto main;
            back();
        }
        else if (strcmp(input1, "10") == 0)
        {
            break;
        }
        else
        {
            continue;
        }
    } while (1);
    savedata(learningdata);
    return 0;
}

#pragma once
#include <string.h>
#define dim1 7
#define dim2 6

void printfch(FILE * ch);//print the characters in the text

void openfile(const char* file);//open and print text

void back();

int method();

void identity(char user[99]);

void viewlog(int data[][dim2]);

void removefile(const char* file);

void writelog(clock_t start, clock_t end, int method, const char* username, const char* file, char* chapter, char* chapsec, int data[][dim2]);

void processing(char* pr, double elapse, int data[][dim2], int method);

void savedata(int data[][dim2]);

void loadingdata(const char* File, int data[][dim2]);

void removefilex(const char* file1, const char* file2);
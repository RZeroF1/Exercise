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
        return 0;
    }
    printfch(get);
    fclose(get);
    get = NULL;
}

void justopenfile(const char* file)
{
    FILE* get = fopen(file, "r");
    if (get == NULL)
    {
        printf("Fail to open file\n");
        return 0;
    }
}

 clock_t starttimelog(const char* file)
{
    
}

void endtimelog(const char* file, clock_t startTime)
{
    
}

void printfch(FILE * ch)
{
	char buffer[9999] = { 0 };
	while (fgets(buffer, sizeof(buffer), ch) != NULL)
	{
		printf("%s", buffer);
	}
}

void printLinesInRange(const char* filename, int startLine, int endLine) {
    FILE* file;
    char line[100]; // 适当选择数组大小

    // 打开文件
    file = fopen(filename, "r");

    // 检查文件是否成功打开
    if (file == NULL) {
        perror("无法打开文件");
        return;
    }

    int currentLine = 1;

    // 逐行读取文件内容
    while (fgets(line, sizeof(line), file) != NULL) {
        // 如果当前行在指定范围内，则打印
        if (currentLine >= startLine && currentLine <= endLine) {
            printf("%s", line);
        }

        // 到达终止行，退出循环
        if (currentLine == endLine) {
            break;
        }

        currentLine++;
    }

    // 关闭文件
    fclose(file);
}


//打开知识点时记录时间，存储在/log
//关闭知识点时记录时间，存储在/log
//设计函数计算学习时间，存储在结构体?
#pragma once

clock_t starttimelog(const char* file);

void endtimelog(const char* file, clock_t startTime);

void printfch(FILE * ch);//print the characters in the text

void openfile(const char* file);//open and print text

void justopenfile(const char* file);


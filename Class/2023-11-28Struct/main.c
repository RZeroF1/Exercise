#include <stdio.h>
#include <stdlib.h>

typedef struct Birthday{
    int year;
    int month;
    int day;
}Birthday;

typedef struct Student{
    char name[20];
    char id[10];
    int age;
    float grade;
    Birthday birthday;
}Student;

void PrintfStuInfo(Student * pstu)
{
    for(int i = 0; i < 2; i++)
    {
        printf("名字是%s，学号是%s，年龄是%d，成绩是%f，生日是%d-%d-%d\n",
           pstu->name, pstu->id, pstu->age, pstu->grade, pstu->birthday.year, pstu->birthday.month, pstu->birthday.day);
        pstu++;
    }
}

int main()
{
    Student stu[2] ={ {"WUDI","CYS2309203", 18, 90.0, {2005, 9, 24}},{"WU","CYS", 18, 80.0, {2000, 8, 23}}};
    PrintfStuInfo(&stu[0]);
    return 0;
}

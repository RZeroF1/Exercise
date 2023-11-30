#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int startTime, startHour, startMinute, elapsedTime, totalMinute, endHour, endMinute;
    scanf("%d %d", &startTime, &elapsedTime);
    startHour = startTime / 100;
    startMinute = startTime % 100;
    totalMinute = startHour * 60 + startMinute + elapsedTime;
    endHour = totalMinute / 60;
    endMinute = totalMinute % 60;
    printf("%d%02d", endHour, endMinute);
    return 0;
}

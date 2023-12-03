#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//在一个升序的数组中查找指定的数字n，很容易想到的方法就是遍历数组，但是这种方法效率比较低。
//比如我买了一双鞋，你好奇问我多少钱，我说不超过300元。你还是好奇，你想知道到底多少，我就让
//你猜，你会怎么猜？你会1，2，3，4...这样猜吗？显然很慢；一般你都会猜中间数字，比如：150，然
//后看大了还是小了，这就是二分查找，也叫折半查找。

int main()
{
    int arr_num[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int Left = 0;
    int Right = sizeof(arr_num)/sizeof(arr_num[0]) - 1;
    int MID = 0;
    int judge = 0;
    int lookingfor = 0;
    printf("请输入1-10h之间的数字以寻找在数组中的位置:");
    scanf("%d", &lookingfor);
    while (Left <= Right)
    {
        MID = Left + (Right - Left)/2;
        if (lookingfor < arr_num[MID])
            Right = MID - 1;
        else if (lookingfor > arr_num[MID])
            Left = MID + 1;
        else
        {
            judge = 1;
            break;
        }
    }
    if (1 == judge)
        printf("%d数字在数组的下标为%d\n", lookingfor, MID);
    else
        printf("该数字在数组中不存在\n");
    return 0;
}

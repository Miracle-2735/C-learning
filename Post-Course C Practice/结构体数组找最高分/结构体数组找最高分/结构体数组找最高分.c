/***2. 结构体数组找最高分**
定义一个学生结构体：学号 (int)、姓名 (char [])、分数 (float)。
定义 5 个学生，写函数`findTop(struct Student s[], int n)`返回最高分学生的下标，打印他的信息。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Student {
    char num[4];      // 学号是字符串
    char name[20];
    float score;
};

// 返回最高分学生的下标（int）
int findTop(struct Student s[], int n)
{
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].score > s[maxIndex].score) {
            maxIndex = i;
        }
    }
    return maxIndex;   // 返回下标
}

int main(void)
{
    struct Student stu[5];

    strcpy(stu[0].num, "001");
    strcpy(stu[0].name, "王大");
    stu[0].score = 32.0f;

    strcpy(stu[1].num, "002");
    strcpy(stu[1].name, "李二");
    stu[1].score = 100.0f;

    strcpy(stu[2].num, "003");
    strcpy(stu[2].name, "张三");
    stu[2].score = 85.5f;

    strcpy(stu[3].num, "004");
    strcpy(stu[3].name, "黄四");
    stu[3].score = 63.0f;

    strcpy(stu[4].num, "005");
    strcpy(stu[4].name, "柳五");
    stu[4].score = 55.5f;

    // 调用findTop，拿到最高分学生的下标
    int top = findTop(stu, 5);
    printf("最高分：%s %s %.1f\n", stu[top].num, stu[top].name, stu[top].score);

    return 0;
}

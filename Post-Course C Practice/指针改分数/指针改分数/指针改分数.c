/***3. 指针改分数**
写函数`addScore(struct Student *s, float add)`，通过指针给某个学生的分数加`add`分（比如加 5 分）。main 里打印加分前后对比。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


struct Student {
    char num[4];
    char name[20];
    float score;
};

void addScore(struct Student* s, float add)
{
    // 你自己写：通过指针给s的分数加add
    s->score = s->score + add;

}

int main()
{
    struct Student stu = { "001", "王大", 80.0f };

    printf("加分前：%.1f\n", stu.score);

    addScore(&stu, 5.0f);   // 把stu的地址传进去

    printf("加分后：%.1f\n", stu.score);

    return 0;
}

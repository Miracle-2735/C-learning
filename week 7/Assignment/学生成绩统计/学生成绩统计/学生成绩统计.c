/*## 综合题：学生成绩统计
定义结构体：
struct Student {
    char name[20];
    int score;
};
main 里定义结构体数组 `struct Student stu[3];`，存 3 个学生：
姓名	分数
张三	85
李四	92
王五	78

写两个函数：
**1. `void printAll(struct Student *arr, int n)`**
- 遍历 n 个学生，逐个打印 "姓名：分数分"
- 这个函数只负责打印，不返回值 → 用 `void`
**2. `float getAverage(struct Student *arr, int n)`**
- 算这 n 个人的平均分，**把结果 return 回 main**
- 这个函数要还结果 → 返回类型写 `float`，最后 `return 平均分;`
main 里先调用 printAll，再调用 getAverage 接收并打印平均分。
*/
#define _CRT_SECURE_NO_WARNINGS    // VS屏蔽strcpy的安全警告，固定写最顶上
#include <stdio.h>
#include <string.h>                // strcpy在这

// ===== 结构体模板：一个学生有姓名、分数两栏 =====
struct Student {
    char name[20];                 // 姓名：字符数组
    int score;                     // 分数：整数
};

// ===== 函数1：打印全部学生。只打印、不还结果 → 返回类型void =====
void printAll(struct Student* arr, int n)
{
    for (int i = 0; i < n; i++) {        // 遍历下标0~n-1
        printf("姓名：%s\n", arr[i].name);   // arr[i]是实体，用点号取name
        printf("分数：%d\n", arr[i].score);  // 用点号取score
        printf("\n");
    }
}

// ===== 函数2：算平均分，要把结果还回main → 返回类型float =====
float getAverage(struct Student* arr, int n)
{
    float sum = 0;                       // 累加器，先清零
    for (int i = 0; i < n; i++) {
        sum += arr[i].score;             // 逐个把分数累加进sum
    }
    return sum / n;                      // 总和÷人数，return还回main
}

int main(void)
{
    struct Student stu[3];               // 定义3个学生的数组，下标0/1/2

    strcpy(stu[0].name, "张三");         // 第0个：姓名用strcpy
    stu[0].score = 85;                   // 分数直接=

    strcpy(stu[1].name, "李四");
    stu[1].score = 92;

    strcpy(stu[2].name, "王五");
    stu[2].score = 78;

    printAll(stu, 3);                    // 传数组名stu + 人数3

    float avg = getAverage(stu, 3);      // 接住函数return回来的平均分
    printf("平均分：%.1f分\n", avg);

    return 0;
}

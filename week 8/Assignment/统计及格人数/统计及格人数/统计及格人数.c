/*## 统计及格人数
还是 `struct Student { char name[20]; int score; };`，数组存 4 个人：
姓名	分数
张三	85
李四	92
王五	55
赵六	60

写函数：
int countPass(struct Student* arr, int n)
- 遍历 n 个人，统计 **分数 >= 60** 的人数
- 人数是整数 → 返回类型 `int`，最后 `return 计数;`

main 里调用，打印 "及格人数：X 人"。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int score;
};

int countPass(struct Student* arr, int n)
{
    int pass = 0;
    for (int i = 0;i < n;i++) {
        if (arr[i].score >= 60) {
            pass++;
        }
    }
    return pass;
}

int main(void)
{
    struct Student stu[4];

    strcpy(stu[0].name, "张三");
    stu[0].score = 85;

    strcpy(stu[1].name, "李四");
    stu[1].score = 92;

    strcpy(stu[2].name, "王五");
    stu[2].score = 55;

    strcpy(stu[3].name, "赵六");
    stu[3].score = 60;

    int count = countPass(stu, 4);       // 接住函数返回的及格人数
    printf("及格人数：%d 人\n", count);

    return 0;
}
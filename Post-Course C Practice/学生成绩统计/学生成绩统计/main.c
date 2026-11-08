/***3. 多文件再来一道**
把 "学生成绩统计" 拆成多文件：
- `Student.h`：定义结构体、声明`countPass(struct Student s[], int n)`函数（返回及格人数，>=60 分算及格）
- `Student.c`：实现 countPass
- `main.c`：定义 5 个学生，调用 countPass 打印及格人数
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Student.h"

int main(void)
{
	struct Student s[5] = {
		{"王大", 63.0},
		{"李二", 89.5},
		{"黄三", 32.0},
		{ "胡四", 89.5 },
		{"柳五", 55.0},
	};

	// countPass 的实现在 Student.c 里，main 只负责准备数据并调用
	printf("及格人数：%d\n", countPass(s,5));

	return 0;
}
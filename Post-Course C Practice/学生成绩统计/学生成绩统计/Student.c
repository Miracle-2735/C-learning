#include "Student.h"   // 包含结构体定义和 countPass 的声明

// countPass 的实现：遍历 n 个学生，数出分数 >= 60 的人数
int countPass(struct Student s[], int n)

{
	int count = 0;                          // 计数器从0开始
	for (int i = 0;i < n;i++) {
		if (s[i].score >= 60) {            // 及格线60分
			count++;                        // 符合条件计数器+1
		}
	}
	return count;                           // 返回及格人数
}
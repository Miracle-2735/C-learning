/*### 练习 2（标准版）：成绩等级
- 输入成绩（0-100）
- >=90 → A
- >=80 → B
- >=70 → C
- >=60 → D
- <60 → F
- 不合法 → `输入错误`
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score;
	printf("请输入成绩：");
	scanf("%d", &score);

	// 从高到低判断，else if 是"前面都不成立才执行"
	if (score < 0 || score > 100)       // 先判断是否合法
		printf("输入错误，成绩应在0~100之间\n");
	else if (score >= 90)               // 走到这说明≥0，再看是不是≥90
		printf("A\n");
	else if (score >= 80)               // 走到这说明<90，再看是不是≥80
		printf("B\n");
	else if (score >= 70)
		printf("C\n");
	else if (score >= 60)
		printf("D\n");
	else                                // 走到这说明<60
		printf("F\n");

	return 0;
}
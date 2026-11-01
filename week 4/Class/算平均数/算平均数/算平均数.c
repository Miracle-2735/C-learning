#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 连续输入整数，输入 -1 表示结束，求前面所有数的平均值
 * do-while：先读入，不是哨兵值就累加，直到读到 -1
 */
int main(void)
{
	int number;
	int sum = 0;
	int count = 0;

	do {
		printf("请输入整数（输入 -1 结束）：");
		scanf("%d", &number);
		if (number != -1) {
			sum += number;
			count++;
		}
	} while (number != -1);

	// 直接输入 -1 时 count=0，除以 0 会出错，必须先保护
	if (count == 0) {
		printf("没有输入任何有效数据。\n");
	}
	else {
		printf("平均值为 %.2f\n", 1.0 * sum / count);
	}

	return 0;
}

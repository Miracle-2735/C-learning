#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 计算工资：
 * 标准工时 40 小时以内按 RATE 时薪计算；
 * 超过 40 小时的部分按 1.5 倍时薪计算
 */
int main()
{
	const double RATE = 8.25;        // 每小时时薪 8.25 元
	const int STANDARD = 40;         // 标准工时 40 小时
	double pay = 0.0;
	int hours;

	printf("请输入工作的小时数：");
	scanf("%d", &hours);

	if (hours < 0) {
		printf("错误：工作小时数不能为负数。\n");
		return 1;
	}

	if (hours > STANDARD)
		pay = STANDARD * RATE +
			(hours - STANDARD) * (RATE * 1.5);   // 超时部分 ×1.5 倍薪
	else
		pay = hours * RATE;

	printf("应付工资：%.2f元\n", pay);

	return 0;
}

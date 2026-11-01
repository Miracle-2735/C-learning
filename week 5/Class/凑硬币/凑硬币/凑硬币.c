/* 凑硬币：用 1角、2角、5角 凑出指定金额（单位元，内部换成角 = x*10）
 * 三重循环枚举三种硬币枚数，总角数等于目标就打印一种方案
 * 说明：课程示例每种硬币至少 1 枚；循环条件做了剪枝，避免无意义枚举
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int one, two, five;
	printf("请输入金额（元，1~9之间）：");
	scanf("%d", &x);

	if (x <= 0 || x >= 10) {
		printf("错误：请输入 1~9 元之间的金额。\n");
		return 1;
	}

	int total = x * 10;   // 统一换成"角"计算
	for (one = 1; one <= total; one++) {
		for (two = 1; one + two * 2 <= total; two++) {
			for (five = 1; one + two * 2 + five * 5 <= total; five++) {
				if (one + two * 2 + five * 5 == total) {
					printf("%d个1角 + %d个2角 + %d个5角 = %d元\n", one, two, five, x);
				}
			}
		}
	}

	return 0;
}

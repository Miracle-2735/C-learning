/***题 2（中等・拆数字）**
 * 输入一个三位数，判断是不是水仙花数：个位³+十位³+百位³ 等于原数
 * 例：153 → 是；123 → 不是
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	printf("请输入一个三位整数：");
	scanf("%d", &n);

	if (n < 100 || n > 999) {
		printf("错误：请输入100~999之间的三位数。\n");
		return 1;
	}

	int g = n % 10;        // 个位
	int s = n / 10 % 10;   // 十位
	int b = n / 100;       // 百位

	if (b * b * b + s * s * s + g * g * g == n) {
		printf("是水仙花数\n");
	}
	else {
		printf("不是水仙花数\n");
	}
	return 0;
}

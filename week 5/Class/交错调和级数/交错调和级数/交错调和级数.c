/* 交错调和级数：f(n) = 1 - 1/2 + 1/3 - 1/4 + ... ± 1/n
 * sign 每轮翻转一次，实现加减交替
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, i;
	double sum = 0.0;
	int sign = 1;
	printf("请输入正整数 n：");
	scanf("%d", &n);

	if (n <= 0) {
		printf("错误：请输入正整数。\n");
		return 1;
	}

	for (i = 1; i <= n; i++) {
		sum += sign * 1.0 / i;    // 1.0 保证浮点除法
		sign = -sign;             // 下一项符号翻转
	}
	printf("f(%d)=%.4f\n", n, sum);

	return 0;
}

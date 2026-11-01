/* 调和级数：f(n) = 1 + 1/2 + 1/3 + ... + 1/n */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, i;
	double sum = 0.0;
	printf("请输入正整数 n：");
	scanf("%d", &n);

	if (n <= 0) {
		printf("错误：请输入正整数。\n");
		return 1;
	}

	for (i = 1; i <= n; i++) {
		sum += 1.0 / i;
	}
	printf("f(%d)=%.4f\n", n, sum);

	return 0;
}

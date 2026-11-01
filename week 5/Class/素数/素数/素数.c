#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, i;
	int isPrime = 1;      // 1=先假设是素数，0=被推翻
	printf("请输入一个整数：");
	scanf("%d", &x);

	if (x < 2) {
		printf("输入不合法，素数必须大于等于2。\n");
		return 1;
	}

	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			isPrime = 0;
			break;        // 已找到因子，无需继续试除
		}
	}

	if (isPrime == 1) {
		printf("是素数\n");
	}
	else {
		printf("不是素数\n");
	}

	return 0;
}

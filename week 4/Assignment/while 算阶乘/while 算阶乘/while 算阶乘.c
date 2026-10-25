/*
## 题 2：while 算阶乘
用 while 循环，输入一个 n，计算 n 的阶乘（1×2×3×...×n）。输入 5 输出 120。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int fact = 1;
	int i = 1;
	printf("请输入一个整数：");
	scanf("%d", &n);
	while (i<=n) {
		fact *= i;
		i++;
	}
	printf("%d的阶乘为%d", n,fact);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int fact = 1;
	int i = 1;
	printf("请输入一个整数：");
	scanf("%d", &n);

	for (i = 1;i <= n;i++) {
		fact *= i;
	}
	printf("%d!=%d\n", n, fact);

	return 0;
}
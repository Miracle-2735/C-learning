#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* while 版阶乘：输入 n，输出 n! */
int main(void)
{
	int n;
	int fact = 1;
	int i = 1;
	printf("请输入一个非负整数：");
	scanf("%d", &n);

	if (n < 0) {
		printf("错误：阶乘只对非负整数有定义。\n");
		return 1;
	}

	while (i <= n) {
		fact *= i;
		i++;
	}

	printf("%d != %d\n", n, fact);

	return 0;
}

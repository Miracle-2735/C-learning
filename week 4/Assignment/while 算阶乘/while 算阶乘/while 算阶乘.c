/* while 算阶乘：输入 n，计算 n! = 1×2×3×...×n（输入 5 得 120） */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int fact = 1;       // 阶乘结果初始值必须是 1（乘法单位元），不能是 0
	int i = 1;
	printf("请输入一个非负整数：");
	scanf("%d", &n);

	if (n < 0) {
		printf("错误：阶乘只对非负整数有定义。\n");
		return 1;
	}

	while (i <= n) {
		fact *= i;      // fact = fact * i
		i++;
	}
	printf("%d 的阶乘为 %d\n", n, fact);

	return 0;
}

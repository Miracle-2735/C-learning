#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* for 版阶乘：for(初值;条件;增量) 在一行管完循环三要素 */
int main(void)
{
	int n;
	int fact = 1;
	int i;
	printf("请输入一个非负整数：");
	scanf("%d", &n);

	if (n < 0) {
		printf("错误：阶乘只对非负整数有定义。\n");
		return 1;
	}

	for (i = 1; i <= n; i++) {
		fact *= i;
	}
	printf("%d != %d\n", n, fact);

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 用"不断除以 10"的方法数位数：
 * 每除一次 10 相当于抹掉最低一位，除到 0 为止，执行次数就是位数
 */
int main(void)
{
	int x;
	int n = 0;

	printf("请输入一个整数：");
	scanf("%d", &x);

	if (x < 0) x = -x;   // 负数先转正

	if (x == 0) {        // 0 是 1 位数
		printf("0 是 1 位数\n");
		return 0;
	}

	while (x > 0) {
		n++;
		x /= 10;         // 去掉最低位
	}
	printf("是 %d 位数\n", n);

	return 0;
}

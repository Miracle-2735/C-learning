#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 数一个整数是几位数（课堂示例：1位=1，2位=2，3位=3，4位及以上=4）
 * 先把负数转正，否则负号会让判断失效
 */
int main(void)
{
	int x;
	int n = 1;

	printf("请输入一个整数：");
	scanf("%d", &x);

	if (x < 0) x = -x;   // 负数先转正，负号不占位数
	if (x == 0) {        // 0 单独处理，按 1 位输出
		printf("0 是 1 位数\n");
		return 0;
	}

	if (x >= 1000) {
		n = 4;           // 课堂示例上限为 4 位数
	}
	else if (x >= 100) {
		n = 3;
	}
	else if (x >= 10) {
		n = 2;
	}
	else {
		n = 1;
	}
	printf("%d 是 %d 位数\n", x, n);

	return 0;
}

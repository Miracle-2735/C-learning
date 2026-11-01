/* 辗转相除法求最大公约数 gcd
 * 1. b==0 时结束，a 就是 gcd
 * 2. 否则 t=a%b，a=b，b=t，回到第1步
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, t;

	printf("请输入两个正整数：");
	scanf("%d %d", &a, &b);

	if (a <= 0 || b <= 0) {
		printf("错误：请输入正整数。\n");
		return 1;
	}

	while (b != 0) {
		t = a % b;
		a = b;
		b = t;
	}
	printf("gcd=%d\n", a);

	return 0;
}

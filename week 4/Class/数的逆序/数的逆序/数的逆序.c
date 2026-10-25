#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	printf("请输入一个整数：");
	scanf("%d", &x);

	int digit;
	int ret = 0;

	while (x > 0) {
		digit = x % 10;
		printf("%d\n", digit);
		ret = ret * 10 + digit;
		printf("x=%d,digit=%d,ret=%d\n", x, digit, ret);
		x /= 10;
	}
	printf("\n");
	printf("这个整数的逆序为：");
	printf("%d\n", ret);

	return 0;
}
/* 输入两个正整数 a 和 b，输出最大公约数（试除法）
 * 思路：从 1 枚举到两者较小值，能同时整除 a、b 的最大那个就是 gcd
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	int min;
	printf("请输入两个正整数：");
	scanf("%d %d", &a, &b);

	if (a <= 0 || b <= 0) {
		printf("错误：请输入正整数。\n");
		return 1;
	}

	// 取两者较小值作为枚举上界（gcd 不可能超过较小数）
	min = (a < b) ? a : b;

	int ret = 1;        // 至少有公约数 1
	int i;
	for (i = 1; i <= min; i++) {   // 注意是 <=，gcd 可能正好等于 min
		if (a % i == 0 && b % i == 0) {
			ret = i;    // 每找到一个公约数就更新，最后留下的就是最大的
		}
	}
	printf("%d和%d的最大公约数是%d\n", a, b, ret);

	return 0;
}

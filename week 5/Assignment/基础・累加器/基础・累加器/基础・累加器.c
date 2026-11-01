/***题 1（基础・累加器）**
 * 输入整数 n，输出 1~n 中所有偶数的和。例：10 → 30（2+4+6+8+10）
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int i;
	int sum = 0;
	printf("请输入一个整数：");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		if (i % 2 == 0) {     // 只累加偶数
			sum += i;
		}
	}
	printf("1~%d中所有偶数的和为%d\n", n, sum);

	return 0;
}

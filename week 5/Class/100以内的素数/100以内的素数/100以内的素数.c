/* 打印 2~99 之间的所有素数
 * 素数：只能被 1 和自身整除的数
 * 判断 x：用 2~x-1 逐个试除，只要有一个能整除就不是素数
 */
#include <stdio.h>

int main(void)
{
	int x, i;
	int isPrime;

	for (x = 2; x < 100; x++) {
		isPrime = 1;              // 先假设是素数
		for (i = 2; i < x; i++) {
			if (x % i == 0) {     // 找到因子
				isPrime = 0;
				break;            // 已证伪，不必再试
			}
		}
		if (isPrime == 1) {
			printf("%d\t", x);
		}
	}
	printf("\n");

	return 0;
}

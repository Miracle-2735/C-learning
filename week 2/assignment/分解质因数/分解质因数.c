/*### 练习 2（标准版）：分解质因数
- 用户输入一个正整数
- 把它分解成质因数相乘的形式
- 比如输入 12，输出`12 = 2 * 2 * 3`
- 提示：从最小的质数 2 开始除，除不尽就换下一个质数*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("请输入一个正整数：");
	scanf("%d", &n);

	printf("%d = ", n);   // 先打印原数和等号

	// i 从 2 开始，每次加 1，直到 n 变成 1
	for (int i = 2; n > 1; i++) {
		// 只要 i 能整除 n，就一直除
		// 因为同一个质数可能要除好几次，比如 12 = 2*2*3
		while (n % i == 0) {
			printf("%d", i);       // 打印这个质数
			n = n / i;             // n 除以 i，变小
			if (n > 1) {
				printf(" * ");     // 还没除完，打个乘号
			}
		}
	}

	printf("\n");
	return 0;
}
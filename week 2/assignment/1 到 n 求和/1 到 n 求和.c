/*### 练习 2（标准版）：1 到 n 求和
- 用户输入 n，计算 1+2+...+n
- 比如输入 100，输出 5050
- 进阶：同时输出平均值*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("请输入n：");
	scanf("%d", &n);

	double sum = 0;     // 总和
	double mean = 0;    // 平均值
	int i;

	// 第一步：循环累加，从 1 加到 n
	for (i = 1; i <= n; i++) {
		sum += i;
	}

	// 第二步：循环结束后，再算平均值（别写在循环里！）
	// sum 是 double，所以直接除就行，不会丢小数
	mean = sum / n;

	printf("1到%d的和为%.0f\n", n, sum);
	printf("1到%d的平均值为%.2f\n", n, mean);

	return 0;
}
/*### 练习 2（标准版）：n 层金字塔
- 用户输入 n，输出 n 层用`*`组成的金字塔
- 比如输入 3，输出：
  *
 ***
*****
提示：第 i 行有 `2*i-1` 个星号，前面有 `n-i` 个空格*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("请输入n：");
	scanf("%d", &n);

	// 外层循环：控制行数，一共 n 行
	for (int i = 1; i <= n; i++) {
		// ① 先打印空格（让金字塔居中）
		// 第 i 行前面有 n-i 个空格
		for (int j = 1; j <= n - i; j++) {
			printf(" ");
		}

		// ② 再打印星号
		// 第 i 行有 2*i-1 个星号
		for (int j = 1; j <= 2 * i - 1; j++) {
			printf("*");
		}

		// ③ 一行打完了，换行
		printf("\n");
	}

	return 0;
}
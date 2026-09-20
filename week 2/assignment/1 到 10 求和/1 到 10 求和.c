/*### 练习 1（超简版）：1 到 10 求和
- 用 for 循环，计算 1+2+3+...+10
- 输出结果：`1到10的和是：55`*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x = 10;      // 加到几
	int sum = 0;     // 累加器，从 0 开始
	int i;           // 循环变量

	// for (初始化; 循环条件; 每次做什么)
	// i 从 1 开始，每次加 1，直到 i > 10 就停
	for (i = 1; i <= x; i++) {
		sum += i;    // 等价于 sum = sum + i，把 i 加到总和里
	}

	printf("1到10的和是：%d\n", sum);

	return 0;
}
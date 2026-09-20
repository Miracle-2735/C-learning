/*### 练习 1（超简版）：三个数求最大值

- 输入三个整数
- 输出最大的那个
- 方法：先假设第一个最大，依次和后面两个比较
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;
	printf("请输入三个整数：");
	scanf("%d %d %d", &a, &b, &c);

	int max = a;            // 先假设第一个 a 是最大的
	if (b > max) max = b;   // b 比 max 大吗？大就把 max 换成 b
	if (c > max) max = c;   // c 比 max 大吗？大就把 max 换成 c

	printf("%d\n", max);

	return 0;
}
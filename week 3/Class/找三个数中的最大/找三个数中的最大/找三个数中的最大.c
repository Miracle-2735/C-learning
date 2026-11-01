/* 输入三个整数，输出其中最大的一个 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;
	printf("请输入三个整数：");
	scanf("%d %d %d", &a, &b, &c);

	// 注意：max 不能初始化为 0。若三个数全是负数，0 会比它们都大，结果就错了
	// 正确做法：先用 a 作为最大值候选，再依次和 b、c 比较
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	printf("The max is %d.\n", max);

	return 0;
}

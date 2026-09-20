/***输入三个整数，从小到大排序输出**

- 比如输入 `5 1 3`，输出 `1 3 5`
- 方法提示：三次比较 + 交换
- 写不出来就回去看周四的交换练习和周六的最大值练习*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;
	printf("请输入三个整数：");
	scanf("%d %d %d", &a, &b, &c);

	int t = 0;    // 临时变量，交换时用它"借杯子"

	/* 第一步：让 a 变成最小的 */
	if (a > b) { t = a; a = b; b = t; }   // a 和 b 比，a 大就交换
	if (a > c) { t = a; a = c; c = t; }   // a 和 c 比，a 大就交换

	/* 第二步：让 b 变成中间的（c 自然最大） */
	if (b > c) { t = b; b = c; c = t; }   // b 和 c 比，b 大就交换

	printf("%d %d %d\n", a, b, c);
	return 0;
}
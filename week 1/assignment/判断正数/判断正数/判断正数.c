/*### 练习 1（超简版）：判断正数
- 输入一个整数
- 如果大于 0，输出`正数`
- 否则输出`不是正数`*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	printf("请输入一个整数：");
	scanf("%d", &a);

	if (a > 0)               // a 大于 0
		printf("正数\n");
	else                     // 否则（a ≤ 0）
		printf("不是正数\n");

	return 0;
}
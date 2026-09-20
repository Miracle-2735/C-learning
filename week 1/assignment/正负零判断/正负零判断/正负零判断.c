/*### 练习 1（超简版）：正负零判断

- 输入一个整数
- 大于 0 → `正数`
- 小于 0 → `负数`
- 等于 0 → `零`*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	printf("请输入一个整数：");
	scanf("%d", &a);

	if (a > 0)              // a 大于 0
		printf("正数\n");
	else if (a < 0)         // 走到这说明 a≤0，再判断是不是 <0
		printf("负数\n");
	else                    // 剩下的就是 a == 0
		printf("零\n");

	return 0;
}
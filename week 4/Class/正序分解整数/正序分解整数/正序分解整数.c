/* 输入一个非负整数，正序输出它的每一位数字
 * 输入：13425 → 输出：1 3 4 2 5
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	printf("请输入一个非负整数：");
	scanf("%d", &x);

	if (x < 0) {
		printf("错误：本程序只处理非负整数。\n");
		return 1;
	}

	// 第一步：求 mask，让它和最高位对齐（13425 → mask=10000）
	int mask = 1;
	int t = x;
	while (t >= 10) {     // 只要还有两位以上，就往上乘 10
		t /= 10;
		mask *= 10;
	}

	// 调试用（正式程序可删）：printf("x=%d,mask=%d\n", x, mask);

	// 第二步：从高到低逐位拆出来
	do {
		int d = x / mask;     // 除以当前 mask，得到最高位数字
		printf("%d", d);
		if (mask > 9) {       // 不是最后一位，就打个空格隔开
			printf(" ");
		}
		x %= mask;            // 去掉已打印的最高位，留下低位部分
		mask /= 10;
	} while (mask > 0);
	printf("\n");

	return 0;
}

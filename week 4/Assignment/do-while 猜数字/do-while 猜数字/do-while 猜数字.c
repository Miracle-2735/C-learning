/* do-while 猜数字
 * 说明：题目要求固定答案 7，这里扩展成每次随机生成 1~100 的答案，
 *      猜不对就一直输入，猜对后打印猜测次数。
 * do-while 的特点：先执行一次循环体，再判断条件（玩家至少猜一次）。
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned int)time(NULL));                          // 用当前时间做随机种子，保证每次答案不同
	int target = rand() % 100 + 1;           // 1~100 的随机答案
	int guess = 0;
	int count = 0;
	printf("我已经想好了一个1~100之间的数。\n");
	do {
		printf("请猜这个1~100之间的数：");
		scanf("%d", &guess);
		count++;
		if (guess > target) {
			printf("大了\n");
		}
		else if (guess < target) {
			printf("小了\n");
		}
		// guess == target 时不提示，循环条件不满足，自动退出
	} while (guess != target);
	printf("太好了！你用了%d次猜到了答案：%d\n", count, target);

	return 0;
}

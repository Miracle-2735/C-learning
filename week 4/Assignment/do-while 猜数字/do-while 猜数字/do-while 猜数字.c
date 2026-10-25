/*
## 题 3：do-while 猜数字
用 do-while 循环让用户猜数字，正确数字是 7。猜不对就一直输入，猜对了打印 "猜对了" 退出。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand (time(0));
	int target = rand() % 100 + 1;
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
	} while (guess != target);
	printf("太好了！你用了%d次猜到了答案：%d\n", count, target);

	return 0;
}
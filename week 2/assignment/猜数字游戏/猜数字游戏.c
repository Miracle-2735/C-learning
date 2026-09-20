/*### 练习 2（标准版）：猜数字游戏
- 程序里写死一个数字（比如 42）
- 用户输入猜测的数字
- 如果猜大了，输出`大了`
- 如果猜小了，输出`小了`
- 猜对了，输出`猜对了！`并结束
- 用 while 循环，直到猜对才退出*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x = 42;     // 答案写死
	int n;          // 用户猜的数

	// do-while：先执行一次循环体，再判断条件
	// 也就是说不管怎样，至少让用户猜一次
	do {
		printf("请输入您猜测的数字：");
		scanf("%d", &n);

		if (n > x) {
			printf("大了\n");       // 猜大了
		}
		else if (n < x) {
			printf("小了\n");       // 猜小了
		}
		// 猜对了什么都不提示，直接退出循环
	} while (n != x);   // 只要没猜对，就继续猜

	printf("猜对了！\n");

	return 0;
}
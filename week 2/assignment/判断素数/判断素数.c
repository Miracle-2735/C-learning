/*### 练习 1（超简版）：判断素数
- 用户输入一个正整数
- 判断它是不是素数（只能被 1 和自己整除）
- 用循环从 2 除到 n-1，看有没有能整除的
- 输出`是素数`或`不是素数`*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("请输入一个正整数：");
	scanf("%d", &n);

	int isprime = 1;    // 先假设是素数（1=是，0=不是）

	// 从 2 除到 n-1，看有没有能整除的
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {   // 找到了能整除的
			isprime = 0;    // 推翻假设，不是素数
			break;          // 已经找到了，不用再除了
		}
	}

	// 循环结束后，根据标记输出
	if (isprime == 1) {
		printf("是素数\n");
	}
	else {
		printf("不是素数\n");
	}

	return 0;
}
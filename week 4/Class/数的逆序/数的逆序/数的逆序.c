#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 输入一个正整数，输出它的逆序（如 1234 → 4321）
 * 思路：循环取个位（%10），用 ret = ret*10 + 个位 拼出逆序，再 x/=10 去掉个位
 */
int main(void)
{
	int x;
	printf("请输入一个正整数：");
	scanf("%d", &x);

	if (x < 0) {
		printf("错误：本程序只演示正整数逆序。\n");
		return 1;
	}

	int digit;
	int ret = 0;

	while (x > 0) {
		digit = x % 10;              // 取出当前最低位（个位）
		ret = ret * 10 + digit;      // 把个位拼到逆序结果末尾
		// 学习用的调试输出（原文件保留的逐行打印），正式程序可删除：
		// printf("取出个位=%d，当前逆序=%d\n", digit, ret);
		x /= 10;                     // 去掉最低位
	}
	printf("这个整数的逆序为：%d\n", ret);

	return 0;
}

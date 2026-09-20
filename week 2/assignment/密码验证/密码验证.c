/*### 练习 2（标准版）：密码验证
- 程序里写死密码（比如 123456）
- 用户有 3 次输入机会
- 输入正确 → 登录成功，用 break 跳出循环
- 输入错误 → 密码错误，还有X次机会
- 3 次都错 → 账号已锁定*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int password = 123456;   // 正确密码（写死在程序里）
	int n;                    // 用户输入的密码
	int count = 0;            // 已经输了几次

	// 只要没到 3 次，就继续让用户输
	while (count < 3) {
		printf("请输入密码：");
		scanf("%d", &n);
		count++;              // 进来一次就算一次机会

		if (n == password) {  // 两个等号才是比较！一个等号是赋值
			printf("登录成功\n");
			break;            // 对了就跳出循环，不用再输了
		}
		else {
			int left = 3 - count;   // 还剩几次机会
			printf("密码错误，还有%d次机会\n", left);
		}
	}

	// 如果 3 次都输错了，循环正常结束，count 正好是 3
	if (count == 3) {
		printf("账号已锁定\n");
	}

	return 0;
}
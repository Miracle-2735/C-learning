/* 四则运算
 * 输入两个整数 a 和 b，输出和、差、积、商；商除不尽时保留两位小数
 */
#define _CRT_SECURE_NO_WARNINGS   // 关闭 VS 对 scanf 等函数的安全警告
#include <stdio.h>

int main(void)
{
	int a, b;
	printf("请输入整数a：");
	scanf("%d", &a);
	printf("请输入整数b：");
	scanf("%d", &b);

	// 除数为 0 会导致程序崩溃，先拦截
	if (b == 0) {
		printf("错误：除数 b 不能为 0。\n");
		return 1;
	}

	printf("a+b=%d\n", a + b);
	printf("a-b=%d\n", a - b);
	printf("a*b=%d\n", a * b);
	// 1.0 * a 先把 a 提升为 double，再除以 b，小数才不会被砍掉
	printf("a/b=%.2lf\n", 1.0 * a / b);

	return 0;
}

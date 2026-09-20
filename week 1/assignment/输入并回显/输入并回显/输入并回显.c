/*### 练习 1（超简版）：输入并回显
- 输入一个整数，原样输出：`你输入的是：XX`
- 再输入一个小数，原样输出
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// --- 第一部分：整数 ---
	int a;
	printf("请输入一个整数：");
	scanf("%d", &a);              // %d 读整数
	printf("你输入的是：%d\n", a);   // %d 输出整数

	// --- 第二部分：小数 ---
	double b;
	printf("请输入一个小数：");
	scanf("%lf", &b);             // %lf 读小数
	printf("你输入的是：%lf\n", b); // %f 输出小数

	return 0;
}
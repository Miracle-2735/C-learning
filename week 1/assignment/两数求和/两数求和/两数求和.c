/*### 练习 2（标准版）：两数求和
- 输入两个整数，输出它们的和
- 输入两个小数，输出它们的和
- 观察：整数相加和小数相加的输出格式有什么不同
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// --- 第一部分：整数相加 ---
	int a, b;                      // 定义两个整数变量
	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);       // %d 读整数，一次读两个
	printf("a+b=%d\n", a + b);   // %d 对应 int，直接输出和

	// --- 第二部分：小数相加 ---
	double c, d;                   // 定义两个小数变量
	printf("请输入两个小数：");
	scanf("%lf %lf", &c, &d);     // %lf 读小数
	printf("c+d=%f\n", c + d);   // %f 对应 double

	return 0;
}
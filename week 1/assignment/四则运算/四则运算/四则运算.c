/*### 练习 1（超简版）：四则运算
- 输入两个数，分别输出加、减、乘、除的结果
- 除法要注意：输入 `5 2`，结果是 `2.50` 还是 `2`？为什么？
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a, b;    // 用 double 存，除法才会有小数
	printf("请输入两个数：");
	scanf("%lf %lf", &a, &b);

	// %.f = 不保留小数（四舍五入）
	printf("a+b=%.f\n", a + b);
	printf("a-b=%.f\n", a - b);
	printf("a*b=%.f\n", a * b);
	// %.2f = 保留两位小数
	printf("a/b=%.2f\n", a / b);

	// 因为 a 和 b 都是 double，所以 5/2 = 2.50
	// 如果两个 int 相除，才会丢掉小数变成 2

	return 0;
}
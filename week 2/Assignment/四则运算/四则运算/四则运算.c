/*四则运算
* 输入两个整数 a 和 b，输出它们的和、差、积、商。注意商如果除不尽要保留小数。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	printf("请输入整数a：");
	scanf("%d", &a);
	printf("请输入整数b：");
	scanf("%d", &b);

	printf("a+b=%d\n", a + b);
	printf("a-b=%d\n", a - b);
	printf("a*b=%d\n", a * b);
	printf("a/b=%.2lf\n", 1.0 * a / b);  
	//1.0 * a → 把 a 从 int 变成 double（关键一步！）/ b→ 除以 b，此时 b 也自动提升成 double，小数就保住了

	return 0;
}
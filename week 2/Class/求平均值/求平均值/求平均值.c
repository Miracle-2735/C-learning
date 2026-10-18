/*求平均值
写一个程序，输入两个整数，输出它们的平均值
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	printf("请分别输入整数a和b的值：");
	scanf("%d %d", &a, &b);

	double c = (a + b) / 2.0;

	printf("%d和%d的平均值=%f\n", a, b, c);

	return 0;
}
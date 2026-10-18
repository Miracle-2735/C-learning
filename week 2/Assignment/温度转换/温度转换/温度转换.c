/***温度转换**
*输入一个摄氏温度 C（小数），转换成华氏温度 F 输出。
*F = C × 9 / 5 + 32
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double C;
	printf("请输入摄氏温度：");
	scanf("%lf", &C);

	double F = C * 9 / 5 + 32;
	printf("转换成华氏温度为：%f", F);

	return 0;
}
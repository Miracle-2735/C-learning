/* 温度转换：输入摄氏温度 C，输出华氏温度 F
 * 公式：F = C × 9 / 5 + 32
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double C;
	printf("请输入摄氏温度：");
	scanf("%lf", &C);

	double F = C * 9 / 5 + 32;
	printf("转换成华氏温度为：%.2f\n", F);   // %.2f 保留两位小数

	return 0;
}

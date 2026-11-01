/* 圆的面积和周长
 * 输入半径 r（可为小数），输出面积和周长。π 取 3.14159
 * 面积 = π × r × r；周长 = 2 × π × r
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double r;
	const double pi = 3.14159;     // const 表示该值不可修改；π 不能做变量名，用 pi 代替
	printf("请输入圆的半径r：");
	scanf("%lf", &r);

	// 半径不能为负数
	if (r < 0) {
		printf("错误：半径不能为负数。\n");
		return 1;
	}

	// double 用 %lf 读入、%f 输出
	double area = pi * r * r;
	double perimeter = 2 * pi * r;

	printf("圆的面积为：%.3f\n", area);
	printf("圆的周长为：%.3f\n", perimeter);
	return 0;
}

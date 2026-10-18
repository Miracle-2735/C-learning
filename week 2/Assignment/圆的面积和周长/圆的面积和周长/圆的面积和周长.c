/*圆的面积和周长
*输入一个半径 r（小数），计算并输出圆的面积和周长。π 取 3.14159。
*面积 = π × r?
*周长 = 2 × π × r */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double r;
	double pi = 3.14159;           //希腊字母 `π` 当变量名可能直接报错，建议改成"pi"
	printf("请输入圆的半径r：");
	scanf("%lf", &r);
	//double变量在scanf()函数内使用%lf形式格式符
	//float变量在scanf()函数内使用%f形式格式符
	double Area = pi * r * r;
	double Perimeter = 2 * pi * r;

	printf("圆的面积为：%.3f\n", Area);
	printf("圆的周长为：%.3f\n", Perimeter);
	//float和double输出皆使用%f格式符输出
	return 0;
}
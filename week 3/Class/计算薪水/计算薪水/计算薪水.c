#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	const double RATE = 8.25;        //每小时8.25
	const int STANDARD = 40;         //标准时长40小时
	double pay = 0.0;
	int hours;

	printf("请输入工作的小时数：");
	scanf("%d", &hours);
	printf("\n");
	if (hours > STANDARD)
		pay = STANDARD * RATE +
		(hours - STANDARD) * (RATE * 1.5);
	else
		pay = hours * RATE;

	printf("应付工资：%f\n", pay);

	return 0;
}
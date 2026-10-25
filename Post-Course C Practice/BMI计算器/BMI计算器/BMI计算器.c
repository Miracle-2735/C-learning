/*BMI = 体重 (公斤) ÷ 身高 (米)²
举个例子：你 51.5kg，1.62m
BMI = 51.5 ÷ (1.62 × 1.62) ≈ 19.6
**判定标准（中国）：**
- < 18.5 → 偏瘦
- 18.5 ~ 23.9 → 正常
- 24 ~ 27.9 → 偏胖
- ≥ 28 → 肥胖
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double BMI(double weight, int height);

int main(void)
{
	int height = 0;
	double weight = 0;
	printf("请输入您的身高(厘米)：");           //为了符合大众习惯将单位设为厘米
	scanf("%d", &height);
	printf("请输入您的体重(千克)：");
	scanf("%lf", &weight);
	if (weight <= 0 || height <= 0) {           //防止并告知用户输入错误
		printf("输入有误，不能是负数或0\n");
		return 0;                               //以下三个if语句里的return 0都是在满足判断条件的情况下直接终止程序
	}
	if (height < 50 || height > 250) {          //身高：0.5m ~ 2.5m（比婴儿矮、比姚明高都不正常）
		printf("身高不合理，请输入厘米（比如175）\n");
		return 0;
	}
	if (weight < 10 || weight > 400) {          //体重：10kg ~ 400kg
		printf("体重不合理，请检查单位\n");
		return 0;
	}
	printf("==========================================================\n");
	printf("========================BMI计算器=========================\n");
	printf("身高：%d厘米\n", height);
	printf("体重：%.2f千克\n", weight);
	BMI(weight, height);
	printf("==========================================================\n");

	return 0;
}

double BMI(double weight, int height)
{
	double result;                               
	double h = height / 100.0;                  //将整数height转换成浮点数h
	result = weight / (h * h);
	printf("BMI: %.2f\n", result);

	if (result < 18.5) {
		printf("偏瘦\n");
	}
	else if (result < 24) {
		printf("正常\n");
	}
	else if (result < 28) {
		printf("偏胖\n");
	}
	else {
		printf("肥胖\n");
	}
	return result;                             //将BMI结果返回给main函数
}

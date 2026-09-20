/*练习 2（标准版）：格式化输出
- 在练习 1 基础上，再加体重变量
- 计算 BMI = 体重 / (身高米)^2，打印出来保留 2 位小数
- 输出格式：`姓名:XXX 年龄:XX BMI:XX.XX`
*/
#include <stdio.h>

int main()
{
	char name[] = "Miracle";   // 姓名（字符串）
	int age = 26;              // 年龄（整数）
	int height = 162;          // 身高cm（整数）
	double weight = 53.8;       // 体重kg（小数）
	double BMI;                 // BMI 结果

	// BMI = 体重 / 身高(米)的平方
	// 身高 162cm 转成米是 1.62m
	BMI = weight / ((height * 0.01) * (height * 0.01));

	// %.2f 保留两位小数
	printf("姓名:%s 年龄:%d BMI:%.2f\n", name, age, BMI);
	return 0;
}
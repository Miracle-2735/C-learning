/*### 练习 2（标准版）：BMI 计算器
- 输入身高（厘米）和体重（千克）
- 计算 BMI，保留 2 位小数输出
- 输出：`身高:XXcm 体重:XXkg BMI:XX.XX`
*/
#define _CRT_SECURE_NO_WARNINGS   // 关掉 VS 对 scanf 的安全警告
#include <stdio.h>                  // 引入输入输出库，printf/scanf 都在这

int main()
{
	int height;       // 存身高（厘米），用整数
	double weight;    // 存体重（千克），用小数
	double BMI;       // 存 BMI 结果，肯定是小数

	printf("请输入您的身高（cm）：");
	scanf("%d", &height);   // %d 读整数，&height 是"存到 height 这个变量里"

	printf("请输入您的体重（kg）：");
	scanf("%lf", &weight);  // %lf 读小数（double 类型）

	// BMI = 体重 / 身高(米)的平方
	// 身高从厘米转成米要乘以 0.01
	BMI = weight / ((height * 0.01) * (height * 0.01));

	// %.0f = 不保留小数，%.2f = 保留两位小数
	printf("身高:%dcm 体重:%.0fkg BMI:%.2f\n", height, weight, BMI);

	return 0;
}
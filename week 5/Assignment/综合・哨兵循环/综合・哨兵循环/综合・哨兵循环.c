/***题 3（综合・哨兵循环）**
不断输入正整数，输入 `0` 结束。最后输出：**个数、总和、最大值、平均值**（平均值保留 2 位小数）。

> 
> 考察点：哨兵 while、同时维护多个变量、最大值更新逻辑、`1.0` 防整数除法。
> 隐藏坑：第一个就输 0 时不能除以 0。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int count = 0;      // 个数，从0开始
	int sum = 0;        // 总和
	int max = 0;        // 最大值（题目限定正整数，初始0安全）

	printf("请输入整数（输入0结束）：");
	scanf("%d", &n);

	while (n != 0) {
		sum += n;           // ① 加总和
		count++;            // ② 个数+1
		if (n > max) {      // ③ 更新最大值
			max = n;
		}
		printf("请继续输入：");
		scanf("%d", &n);    // ④ 读下一个
	}

	if (count == 0) {       // 一个数都没输，不能除0
		printf("没有输入任何数\n");
	}
	else {
		// 1.0 先转小数，%.2f 保留两位
		printf("个数为%d，总和为%d，最大值为%d，平均值为%.2f\n",
			count, sum, max, 1.0 * sum / count);
	}

	return 0;
}
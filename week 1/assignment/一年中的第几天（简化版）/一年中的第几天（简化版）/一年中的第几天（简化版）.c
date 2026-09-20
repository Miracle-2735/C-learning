/*### 练习 2（标准版）：一年中的第几天（简化版）

- 输入月份和日期（不考虑闰年，2 月固定 28 天）
- 输出这是这一年的第几天
- 比如输入 `3 1`，输出 `60`（31+28+1）*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int month, day;

	printf("请输入月份：");
	scanf("%d", &month);
	printf("请输入日期：");
	scanf("%d", &day);

	int total = 0;    // total 累加总天数，从 0 开始

	/* 思路：把当前月份之前的整月天数加起来
	 * 输入 3 月 → 加 1 月(31) + 2 月(28)
	 * 输入 5 月 → 加 1月+2月+3月+4月 */
	if (month >= 2)  total += 31;   // 过了1月就加31
	if (month >= 3)  total += 28;   // 过了2月就加28
	if (month >= 4)  total += 31;   // 过了3月就加31
	if (month >= 5)  total += 30;   // 过了4月就加30
	if (month >= 6)  total += 31;   // 过了5月就加31
	if (month >= 7)  total += 30;   // 过了6月就加30
	if (month >= 8)  total += 31;   // 过了7月就加31
	if (month >= 9)  total += 31;   // 过了8月就加31
	if (month >= 10) total += 30;   // 过了9月就加30
	if (month >= 11) total += 31;   // 过了10月就加31
	if (month >= 12) total += 30;   // 过了11月就加30

	total += day;    // 最后加上今天的日期

	printf("这是这一年的第%d天\n", total);

	return 0;
}
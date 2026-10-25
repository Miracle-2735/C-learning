/*## 题 1：while 累加
用 while 循环计算 1 到 100 的和，打印结果。
*/
#include <stdio.h>

int main(void)
{
	int n = 100;
	int sum = 0;
	int i = 1;
	while (i<=n) {
		sum += i;
		i++;
	}
	printf("sum=%d\n", sum);

	return 0;
}
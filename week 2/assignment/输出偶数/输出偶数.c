/*### 练习 1（超简版）：输出偶数
- 用 for 循环输出 1 到 20 之间的所有偶数
- 每行输出一个*/
#include <stdio.h>

int main()
{
	int x = 20;
	int i;

	for (i = 1; i <= x; i++) {
		// i % 2 == 0 就是"除以2余数为0"，说明是偶数
		if (i % 2 == 0) {
			printf("%d\n", i);
		}
	}

	return 0;
}
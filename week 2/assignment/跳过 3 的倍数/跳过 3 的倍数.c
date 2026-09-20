/*### 练习 1（超简版）：跳过 3 的倍数
- 输出 1 到 20 的所有数
- 遇到 3 的倍数就跳过（用 continue）
- 输出：1 2 4 5 7 8 10 11 13 14 16 17 19 20*/
#include <stdio.h>

int main()
{
	int x = 20;

	for (int i = 1; i <= x; i++) {
		// 如果是3的倍数，就跳过本次循环，不打印
		if (i % 3 == 0) {
			continue;   // continue = 跳过这次循环剩下的代码，直接下一次
		}
		printf("%d ", i);   // 不是3的倍数才打印
	}

	return 0;
}
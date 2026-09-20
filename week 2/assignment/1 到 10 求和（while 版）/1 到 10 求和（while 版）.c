/*### 练习 1（超简版）：1 到 10 求和（while 版）
- 用 while 循环重写周一的练习 1
- 体会 for 和 while 的区别：for 适合 "知道循环多少次"，while 适合 "不知道循环多少次"*/
#include <stdio.h>

int main()
{
	int x = 10;
	int sum = 0;
	int i = 1;      // 循环变量，初始值

	while (i <= 10) {   // 只要 i ≤ 10，就继续循环
		sum += i;       // 把 i 加到 sum 里
		i++;            // i 加 1（千万别忘，不然死循环）
	}

	printf("1 到 10 求和为%d\n", sum);

	return 0;
}
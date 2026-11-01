#include <stdio.h>

int main(void)
{
	// %d 是整数格式符，运行时会被括号里的实际值替换
	// 12+34 先算出 46，再填到 %d 的位置；末尾 \n 换行
	printf("12+34=%d\n", 12 + 34);

	return 0;
}

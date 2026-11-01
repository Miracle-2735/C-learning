#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 嵌套的判断：if 里面再套 if
 * 先判断 code 是否等于 READY(24)，满足后再判断 count 是否小于 20
 * 注意：若 code 不等于 READY，整个程序不会有任何输出
 */
int main()
{
	const int READY = 24;   // 就绪状态码
	int code = 0;
	int count = 0;

	scanf("%d %d", &code, &count);
	if (code == READY)
		if (count < 20)
			printf("一切正常\n");
		else
			printf("继续等待\n");

	return 0;
}

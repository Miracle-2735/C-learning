#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 多支分路：连续的 if-else if 结构
 * 根据输入数字输出对应问候语，功能上和 switch-case 等价
 */
int main()
{
	int type;

	printf("请输入数字(1-4)：");
	scanf("%d", &type);

	if (type == 1)
		printf("你好\n");
	else if (type == 2)
		printf("早上好\n");
	else if (type == 3)
		printf("晚上好\n");
	else if (type == 4)
		printf("再见\n");
	else
		printf("啊，什么啊？\n");

	return 0;
}

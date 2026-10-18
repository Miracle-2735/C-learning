/***星期几（用 switch-case）**
输入一个 1-7 的数字，输出对应的星期：
1 = 星期一，2 = 星期二...7 = 星期日。输入其他数字输出 "输入错误"。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int day;
	printf("请输入星期数（1-7）：");
	scanf("%d", &day);

	switch (day) {
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期日\n");
		break;
	default:
		printf("输入错误");
		break;
	}
	return 0;
}
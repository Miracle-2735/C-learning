/* 星期几（用 switch-case）
 * 输入 1-7 的数字，输出对应星期；其他数字输出"输入错误"
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int day;
	printf("请输入星期数（1-7）：");
	scanf("%d", &day);

	// switch 把 day 的值和各个 case 比较，匹配到哪个就执行哪个分支
	// break 必不可少：防止执行完一个 case 后"穿透"到下一个 case 继续执行
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
	default:   // 上面所有 case 都不匹配时走这里，相当于 else
		printf("输入错误\n");
		break;
	}
	return 0;
}

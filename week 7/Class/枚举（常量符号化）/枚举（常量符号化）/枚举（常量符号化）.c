#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 枚举 enum：给整数常量起名字，比手写 0/1/2 更可读
 * RED=0, YELLOW=1, GREEN=2（不写初值就从 0 自动递增）
 */
enum COLOR { RED, YELLOW, GREEN };

int main(void)
{
	int color = -1;
	const char* colorName = NULL;   // 指向字符串字面量，加 const 更规范

	printf("输入你喜欢的颜色代码（0红/1黄/2绿）：");
	scanf("%d", &color);

	switch (color) {
	case RED:    colorName = "red";    break;
	case YELLOW: colorName = "yellow"; break;
	case GREEN:  colorName = "green";  break;
	default:     colorName = "Unknown"; break;
	}
	printf("你喜欢的颜色是 %s\n", colorName);

	return 0;
}

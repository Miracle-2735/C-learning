/*### 题 2：枚举 GPIO 模式（呼应你 STM32）
定义枚举：
enum GPIOMode { GPIO_IPU, GPIO_IPD, GPIO_FLOATING };
写函数 `const char* modeName(enum GPIOMode m)`，返回：
- GPIO_IPU → "上拉输入"
- GPIO_IPD → "下拉输入"
- GPIO_FLOATING → "浮空输入"
>
> 考点：枚举值比较，跟你 STM32 代码里 `GPIO_Mode_IPU` 是一回事
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum GPIOMode { GPIO_IPU=1, GPIO_IPD, GPIO_FLOATING };

const char* modeName(enum GPIOMode m)
{
	switch (m) {
	case GPIO_IPU: return "上拉输入";
	case GPIO_IPD: return "下拉输入";
	case GPIO_FLOATING: return "浮空输入";
	default:return "ERROR";
	}
}

int main(void)
{
	int mode;
	printf("请输入GPIO模式代码：");
	scanf("%d", &mode);
	printf("你选择的GPIO模式为：%s\n", modeName(mode));

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int amount = 0;   // 票面金额（用户输入）
	int price = 0;    // 商品金额（用户输入）
	int change = 0;   // 找零（注意拼写：change，不是 chage）

	printf("请输入商品金额(元)：");
	scanf("%d", &price);

	printf("请输入票面金额(元)：");
	scanf("%d", &amount);

	// 票面不够时不能找零，先判断余额
	if (amount < price) {
		printf("您的钱不够，还差%d元。\n", price - amount);
		return 1;
	}

	change = amount - price;
	printf("找您%d元。\n", change);

	return 0;
}

/*找零计算器需要用户做两个操作：
*输入购买的金额，输入支付的票面，
*而找零计算器则需根据用户的输入做出相应的动作，
*计算并打印找零或告知用户余额不足以购买。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int price = 0;
	int bill = 0;
	//读入金额和票面
	printf("请输入金额(元)：");
	scanf("%d", &price);
	printf("请输入票面(元)：");
	scanf("%d", &bill);
	//计算找零
	if (bill >= price) {
		printf("应该找您：%d元\n", bill - price);
	}
	else {
		printf("您的钱不够\n");
	}
	return 0;
}
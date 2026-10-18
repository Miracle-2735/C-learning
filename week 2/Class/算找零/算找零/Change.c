#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*const在这里为修饰符，意译为不变的
	<修饰符> <数据类型> <变量名称>=<初始值>?常量

	const int AMOUNT = 100;

	*/
	//<数据类型> <变量名称>?变量；
	int amount = 100;
	int price = 0;              //<数据类型> <变量名称>=<初始值>?初始化变量
	
	printf("请输入金额(元)：");
	scanf("%d", &price);

	printf("请输入票面：");
	scanf("%d", &amount);

	int chage = amount - price;

	printf("找您%d元。\n", chage);

	return 0;
}
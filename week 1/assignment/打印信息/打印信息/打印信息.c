/*练习 1（超简版）：打印信息
- 定义 3 个变量：姓名（用拼音）、年龄、身高
- 用 printf 打印出来，格式：`我叫XXX，今年XX岁，身高XX厘米`
*/
#include <stdio.h>

int main()
{
	int age, height;
	// 字符串要用 char 数组存，不能写成 char name = "Miracle"
	// 因为 char 只能存一个字符，字符串是一串字符
	char name[] = "Miracle";
	age = 26;
	height = 162;

	// %s 对应字符串，%d 对应整数
	printf("我叫%s，今年%d岁，身高%d厘米\n", name, age, height);

	return 0;
}
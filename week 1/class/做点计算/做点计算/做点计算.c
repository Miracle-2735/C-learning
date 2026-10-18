#include <stdio.h>

int main(void)
{
	//%d为整数的输入输出格式符，这里12和34为整数；""为printf要输出的字符，","后为替换%d的实际值（12+34的结果46）
	printf("12+34=%d", 12 + 34);  

	return 0;
}
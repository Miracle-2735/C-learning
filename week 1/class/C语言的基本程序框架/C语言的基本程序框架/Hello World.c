//#include 为C预处理指令
//<stdio.h>:标准输入输出库的头文件
//#include <stdio.h>，可以理解为一个人以include的方式调用翻开了<stdioh.h>这个电话簿（文件库）
#include <stdio.h>          

int main()                     //main()是一个函数名；int表明main()函数返回一个整数
{
	printf("Hello,World!\n");  //printf("");表示打印输出""里的字符

	return 0;                  //表示结束，返回一个0给main()
}
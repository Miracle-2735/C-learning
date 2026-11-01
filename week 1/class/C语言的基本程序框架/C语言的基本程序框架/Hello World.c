// #include 是 C 预处理指令，作用是把头文件的内容引入当前文件
// <stdio.h> 是标准输入输出库头文件，使用 printf 必须包含它
#include <stdio.h>

int main()                     // main 是程序入口函数；int 表示函数结束后返回一个整数
{
	printf("Hello,World!\n");  // printf 负责打印输出，双引号内是要显示的内容；\n 表示换行

	return 0;                  // 返回 0 表示程序正常结束，把这个 0 交回给操作系统
}

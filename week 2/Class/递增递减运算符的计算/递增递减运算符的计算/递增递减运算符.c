/* int a=10;
* 让我们看看a++与++a之间的区别
*/
#include <stdio.h>

int main()
{
	int a = 10;

	printf("a++=%d\n", a++);    //a++：先给别人用，自己再加 1（先用后加）
	printf("a=%d\n", a);

	printf("++a=%d\n", ++a);    //++a：自己先加 1，再给别人用（先加后用）
	printf("a=%d\n", a);

	return 0;
}
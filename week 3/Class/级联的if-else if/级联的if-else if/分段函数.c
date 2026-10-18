/*f(x)=-1;x<0
*      0;x=0
*      2x;x>0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;
	printf("请输入整数x的值：");
	scanf("%d", &x);

	int f;
	if (x < 0) {
		f = -1;
	}
	else if (x == 0) {
		f = 0;		
	}
	else {
		f = 2 * x;
	}
	printf("%d", f);
}
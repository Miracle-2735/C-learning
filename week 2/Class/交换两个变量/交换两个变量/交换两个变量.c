/*如果已经有：
* int a=6;
* int b=5;
* 如何交换a，b两个变量的值？
*/
/*想象三个杯子：
- `a` 杯装着 6
- `b` 杯装着 5
- `t` 杯是空的（0）
交换：
1. 把 a 杯的 6 倒进 t 杯 → t 杯现在有 6
2. 把 b 杯的 5 倒进 a 杯 → a 杯现在有 5
3. 把 t 杯的 6 倒进 b 杯 → b 杯现在有 6
倒完之后，**t 杯里还剩 6**，没人把它倒空，所以 t = 6。
*/
#include <stdio.h>

int main()
{
	int a = 6;
	int b = 5;
	int t;

	t = a;         
	a = b;
	b = t;
	
	printf("a=%d,b=%d\n", a, b);

	return 0;
}
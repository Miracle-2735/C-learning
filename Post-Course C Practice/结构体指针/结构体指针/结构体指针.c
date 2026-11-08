/***2. 结构体指针**
*定义一个`struct Point { int x; int y; };`
*写函数`move(struct Point *p, int dx, int dy)`，通过指针把 x 加 dx，y 加 dy。
*main 里定义一个点 (3,4)，调用 move (&p, 2, 1)，打印 (5,5)。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Point { int x; int y; };

void move(struct Point* p, int dx, int dy)
{
	p->x = p->x + dx;
	p->y = p->y + dy;
}

int main(void)
{
	struct Point p;
	p.x = 3;
	p.y = 4;

	move(&p, 2, 1);
	printf("%d,%d", p.x, p.y);

	return 0;
}
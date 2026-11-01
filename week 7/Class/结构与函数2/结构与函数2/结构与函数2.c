#include <stdio.h>

struct Point {
    int x;
    int y;
};

void change2(struct Point* p)  // 参数是指针（地址传递）
{
    p->x = 99;                  // 通过地址改原件；-> 用于指针取成员
}

int main(void)
{
    struct Point p1 = { 3, 5 };
    change2(&p1);               // 传进去的是 p1 的地址
    printf("%d\n", p1.x);       // 原件变成99

    return 0;
}

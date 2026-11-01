#include <stdio.h>

struct Point {
    int x;          // 模板里的格子1：存x坐标
    int y;          // 模板里的格子2：存y坐标
};

void change1(struct Point p)   // 注意：参数是 struct Point，不是指针（值传递）
{
    p.x = 99;                  // 改的是函数内部的复印件
    printf("p.x=%d\n", p.x);
}

int main(void)
{
    struct Point p1 = { 3, 5 };
    change1(p1);               // 把整张表复印一份送进去
    printf("p1.x=%d\n", p1.x); // 原件仍是3，没被改动

    return 0;
}

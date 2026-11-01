#include <stdio.h>

// ===== 第一步：定义"档案表模板"（只是模板，本身不占数据）=====
struct Point {
    int x;          // 模板里的格子1：存x坐标
    int y;          // 模板里的格子2：存y坐标
};                  // 注意末尾这个分号 ; 不能漏

int main(void)
{
    // ===== 第二步：按模板填一张具体的表（变量）=====
    struct Point p1;        // p1是一张按Point模板填的表，有x、y两个格子
    struct Point p2;

    p1.x = 3;               // 点号 . = "进入这张表，取x这个格子"，赋值3
    p1.y = 5;               // 给y格子赋值5
    p2.x = 10;
    p2.y = 20;

    printf("坐标是(%d, %d)\n", p1.x, p1.y);   // 用点号把格子里的值取出来打印
    printf("坐标是(%d, %d)\n", p2.x, p2.y);

    return 0;
}

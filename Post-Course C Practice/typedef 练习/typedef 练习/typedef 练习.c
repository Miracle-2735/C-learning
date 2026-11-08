/*4. typedef 练习
* typedef unsigned char uint8_t;
* typedef int* IntPtr;
*问：`IntPtr a, b;` 中，a 和 b 分别是什么类型？写代码验证一下。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef unsigned char uint8_t;   // 给 unsigned char 起个短名 uint8_t，STM32 里常见
typedef int* IntPtr;             // 注意：int* 是一个整体类型，别名 IntPtr = 指向 int 的指针

int main(void)
{
    // 考点来了：IntPtr a, b; —— a 和 b 都是 int* 类型！
    // 因为 typedef 把 "int*" 整个当成类型，不会把 * 只分给第一个变量
    // 对比：如果写成 int *a, b; 那 a 是指针、b 才是 int，这就是 typedef 的好处
    IntPtr a, b;
    int x = 10, y = 20;

    a = &x;    // a 指向 x
    b = &y;    // b 指向 y

    printf("*a = %d\n", *a);   // 输出10
    printf("*b = %d\n", *b);   // 输出20

    return 0;
}


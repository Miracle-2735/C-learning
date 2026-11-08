/*4. typedef 练习
* typedef unsigned char uint8_t;
* typedef int* IntPtr;
*问：`IntPtr a, b;` 中，a 和 b 分别是什么类型？写代码验证一下。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef unsigned char uint8_t;
typedef int* IntPtr;

int main(void)
{
    IntPtr a, b;
    int x = 10, y = 20;

    a = &x;
    b = &y;

    printf("*a = %d\n", *a);   // 输出10
    printf("*b = %d\n", *b);   // 输出20

    return 0;
}


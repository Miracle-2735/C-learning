/***1. 多文件拆分（今天学的）**
把之前写的 "找最贵的书" 拆成两个文件：

- `Book.h`：声明`struct Book`和`findMax(struct Book books[], int n)`函数
- `Book.c`：实现`findMax`
- `main.c`：定义 3 本书，调用`findMax`，打印最贵的书名
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Book.h"

int main()
{
    struct Book books[3] = {
        {"C语言教程", 55.0},
        {"STM32入门", 89.5},
        {"嵌入式实战", 72.0}
    };

    struct Book max = findMax(books, 3);
    printf("最贵的书：%s，价格：%.1f\n", max.title, max.price);

    return 0;
}

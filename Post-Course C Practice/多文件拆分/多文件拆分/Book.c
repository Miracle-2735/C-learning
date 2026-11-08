#include "Book.h"   // 把 Book.h 里的结构体定义和函数声明包含进来

// 函数实现放在 .c 里：Book.h 只负责"声明"，Book.c 负责"具体怎么干"
struct Book findMax(struct Book books[], int n)
{
    int i;
    int maxIndex = 0;                       // 先假设第0本最贵
    for (i = 1; i < n; i++)
    {
        if (books[i].price > books[maxIndex].price)
        {
            maxIndex = i;                   // 遇到更贵的，换擂主下标
       }
    }
    return books[maxIndex];                 // 把最贵那本书整个返回给 main
}

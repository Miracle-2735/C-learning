#include "Book.h"

// 在这里实现函数
struct Book findMax(struct Book books[], int n)
{
    // 你自己写：找price最大的那个，返回它
    int i;
    int maxIndex = 0;
    for (i = 1; i < n; i++)
    {
        if (books[i].price > books[maxIndex].price)
        {
            maxIndex = i;
       }
    }
    return books[maxIndex];
}

/*## 综合题：找最贵的书
结构体还是你刚写过的 `struct Book`（title [30]、author [20]、price）。要求：
**1.** main 里定义一个结构体数组，存 3 本书：
* struct Book books[3];
**2.** 给这 3 本书赋值（书名作者用 `strcpy`，价格用 `=`），就用这三本：
* 书名							 作者 				价格
C Primer Plus				Stephen Prata			89.5
STM32 库开发实战指南			刘火良				108.0
嵌入式 C 语言					谭浩强				45.0
**3.** 写一个函数，找出并打印最贵的那本：
* void printMostExpensive(struct Book *arr, int n)
{
    // 你来写：遍历n本书，找price最大的，打印书名和价格
}
**4.** main 里调用 `printMostExpensive(books, 3);`
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Book {
    char title[30];
    char author[20];
    float price;
};

// ===== 函数：遍历n本书，找出最贵的打印 =====
void printMostExpensive(struct Book* arr, int n)
{
    int maxIndex = 0;                        // 擂台主：先假设第0本（下标0）最贵

    for (int i = 1; i < n; i++) {            // 从第1本开始，挨个上台比
        if (arr[i].price > arr[maxIndex].price) {
            maxIndex = i;                    // 这本更贵，擂台主换成它的下标
        }
    }

    // 循环结束，maxIndex就是最贵那本的下标，回头拿它的书名和价格打印
    printf("最贵的书：%s，%.2f元\n",
        arr[maxIndex].title, arr[maxIndex].price);
}

int main(void)
{
    // ===== 结构体数组：一次排好3本，下标0、1、2 =====
    struct Book books[3];

    strcpy(books[0].title, "C Primer Plus");
    strcpy(books[0].author, "Stephen Prata");
    books[0].price = 89.5f;

    strcpy(books[1].title, "STM32库开发实战指南");
    strcpy(books[1].author, "刘火良");
    books[1].price = 108.0f;

    strcpy(books[2].title, "嵌入式C语言");
    strcpy(books[2].author, "谭浩强");
    books[2].price = 45.0f;

    printMostExpensive(books, 3);            // 把数组和数量3交给函数

    return 0;
}

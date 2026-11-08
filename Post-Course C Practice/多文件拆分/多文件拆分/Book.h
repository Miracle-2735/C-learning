#ifndef __BOOK_H
#define __BOOK_H

// 在这里定义结构体
struct Book {
    char title[50];
    float price;
};

// 在这里声明函数
struct Book findMax(struct Book books[], int n);

#endif


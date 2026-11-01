/*## 实操题：struct Book
自己在 VS2026 写完整代码：
1. 定义结构体 `struct Book`，三个成员：
   - `char title[30]`（书名）
   - `char author[20]`（作者）
   - `float price`（价格）
2. main 里定义一个 `struct Book b;`
3. 给三个成员赋值：
   - 书名和作者是字符数组，**不能直接用 `=` 赋值**，要用 `strcpy(b.title, "C Primer Plus");`（记得 `#include <string.h>`）
   - 价格直接 `b.price = 89.5f;`
4. 用 printf 把书名、作者、价格全部打印出来
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>          // strcpy 在这个头文件里

// ===== 结构体模板：规定一本书有哪三栏 =====
struct Book {
    char title[30];         // 书名（字符数组）
    char author[20];        // 作者（字符数组）
    float price;            // 价格（小数）
};

int main(void)
{
    struct Book b;          // 按Book模板定义一张具体的表 b

    // ===== 给三个成员赋值 =====
    strcpy(b.title, "C Primer Plus");   // 字符数组不能用=，用strcpy复制字符串进去
    strcpy(b.author, "Stephen Prata");  // 作者同理
    b.price = 89.5f;                    // price是普通float，直接用=

    // ===== 打印三个成员 =====
    printf("书名：%s\n", b.title);      // %s 打印字符串
    printf("作者：%s\n", b.author);
    printf("价格：%.2f元\n", b.price);  // %.2f 表示小数保留两位

    return 0;
}

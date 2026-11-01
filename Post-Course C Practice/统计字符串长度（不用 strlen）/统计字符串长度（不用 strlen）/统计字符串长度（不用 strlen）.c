/*## 题 2：统计字符串长度（不用 strlen）
写一个函数`my_strlen(const char *s)`，返回字符串长度（不算 \0）。
要求：
- 不能用 strlen 库函数
- 主函数里测试：`char s[] = "embedded"; printf("%d", my_strlen(s));`
*/
#include <stdio.h>

// 函数功能：统计字符串长度（不算结束符'\0'）
// 参数：s - 指向字符串的指针，const表示函数里不会改它
// 返回值：字符串里有几个字符
int my_strlen(const char* s)
{
    int count = 0;          // 计数器，从0开始数

    // while循环：只要s当前指向的字符不是'\0'，就继续
    while (*s != '\0') {
        count++;            // 数到一个字符，计数器加1
        s++;                // s往后移一格，指向下一个字符
    }

    return count;           // 循环结束，把数到的个数返回给main
}

int main(void)
{
    char s[] = "embedded";      // 定义字符串，内容是embedded
    printf("%d", my_strlen(s)); // 把s传进去，打印返回的长度，应该是8
    return 0;
}

/*## 题 1：字符串复制（不用 strcpy）

写一个函数`my_strcpy(char *dest, const char *src)`，把 src 指向的字符串复制到 dest 里。

要求：

- 不能用 strcpy 库函数
- 主函数里测试：`char s1[20] = "hello"; char s2[] = "world"; my_strcpy(s1, s2); printf("%s", s1);`
*/
#include <stdio.h>   // 输入输出库，用printf要引这个

// 定义函数：无返回值，两个参数都是字符指针
// dest：目标数组（你要复制到哪里）
// src：源字符串（从哪里复制，const表示函数里不改它）
void my_strcpy(char* dest, const char* src)
{
    // while循环：只要src当前指向的字符不是'\0'（字符串结束符），就继续
    while (*src != '\0') {
        *dest = *src;   // 把src当前指向的那个字符，复制到dest当前指向的位置
        dest++;         // dest往后移一格，指向下一个要写入的位置
        src++;          // src往后移一格，指向下一个要读的字符
    }
    *dest = '\0';       // 循环结束后，在dest末尾补上结束符'\0'，不然字符串没结尾
}

int main(void)
{
    char s1[20] = "hello";  // s1是数组，开了20个字符位置，初始内容是hello
    char s2[] = "world";    // s2是数组，内容是world
    my_strcpy(s1, s2);      // 把s2的内容复制到s1里，传进去的是两个数组的首地址
    printf("%s", s1);       // 打印s1，应该输出world
    return 0;
}

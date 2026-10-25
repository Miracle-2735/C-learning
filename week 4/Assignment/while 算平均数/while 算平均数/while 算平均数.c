/*
## 题 5：while 算平均数
用 while 循环，让用户不断输入数字，输入 0 时停止，计算所有输入数字的平均值并打印。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    int count = 0;    // 一共输入了几个数（只管个数）
    int sum = 0;      // 所有数的总和（只管加数值）

    printf("请输入一个整数: ");
    scanf("%d", &n);      // 先读第一个数

    // ===== 核心循环：输入 0 就停，其他数全部收下 =====
    while (n != 0) {          // 只要不是 0，就继续收
        sum += n;             // 把刚读入的数加进总和（注意：是 n，不是 count）
        count++;              // 个数 +1
        printf("请输入一个整数: ");
        scanf("%d", &n);      // 再读下一个数
    }

    // ===== 输出结果 =====
    if (count == 0) {         // 一个数都没输（第一个就是 0）
        printf("没有输入任何数\n");
    }
    else {
        // 1.0 * sum 先把 sum 变成小数，除法才不会丢小数
        printf("平均数为%f\n", 1.0 * sum / count);
    }

    return 0;
}
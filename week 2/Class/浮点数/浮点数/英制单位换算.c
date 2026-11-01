/* 美国人用英制单位报身高：几英尺几英寸
 * 换算公式：(英尺 + 英寸/12) × 0.3048 = 米
 * 例：5英尺7英寸 = (5 + 7/12) × 0.3048 ≈ 1.7018 米
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    // 提示语要合并成一个字符串（原来多传的第二个字符串不会被 printf 打印）
    printf("请分别输入身高的英尺和英寸（如输入\"5 7\"表示5英尺7英寸）：");

    int foot;
    int inch;

    scanf("%d %d", &foot, &inch);
    // inch 和 12 都是 int，直接除会丢小数；12.0 是 double，促使浮点除法
    printf("身高是%.4f米。\n", ((foot + inch / 12.0) * 0.3048));

    return 0;
}

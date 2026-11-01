/*### 题 1：枚举星期
定义枚举：
enum Weekday { MON, TUE, WED, THU, FRI, SAT, SUN };
写函数 `const char* dayName(enum Weekday d)`，传入枚举值，
返回中文：MON→"星期一"，TUE→"星期二"……SUN→"星期日"。main 里测三个值。
考点：枚举定义、switch、函数返回字符串
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum Weekday { MON=1, TUE, WED, THU, FRI, SAT, SUN };

// ===== 函数：传入枚举值，返回对应中文 =====
const char* dayName(enum Weekday d)
{
    switch (d) {
    case MON: return "星期一";
    case TUE: return "星期二";
    case WED: return "星期三";
    case THU: return "星期四";
    case FRI: return "星期五";
    case SAT: return "星期六";
    case SUN: return "星期日";
    default:  return "Unknown";
    }
}

int main(void)
{
    //enum Weekday w = WED;              // 定义枚举变量，直接用枚举名赋值
    //printf("%s\n", dayName(w));        // main只负责调用函数
    int choice;
    printf("请输入星期数字(1=星期一 ~ 7=星期日)：");
    scanf("%d", &choice);
    printf("对应：%s\n", dayName(choice));   // 把输入的数字传给函数，拿回中文

    return 0;
}

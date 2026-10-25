/***猜数字。**
- 程序随机生成一个 1-100 的数，你猜，提示大了还是小了，猜中结束
1.生成随机数：**
- `rand()` 会产生一个随机整数
- `rand() % 100 + 1` 就是 1~100 之间
- 但每次运行都得换种子，不然每次都是同一个数：
2.循环猜：**
- 用 `do...while` 最合适：先猜一次，不对就继续
- 或者用 `while(1)` 死循环，猜对了 `break` 出去
3.每次猜完判断：**
- 用户输入一个数 `guess`
- `guess > target` → 打印 "大了"
- `guess < target` → 打印 "小了"
- `guess == target` → 打印 "猜对了"，退出循环
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));           // 初始化随机数种子，整个程序只需要一次
    char playAgain = 'y';     // 用字符记住用户要不要继续玩，先设成'y'让循环能开始

    // 外层循环：控制整个游戏玩几局
    while (playAgain == 'y' || playAgain == 'Y') {
        int target = rand() % 100 + 1;   // 每局重新生成一个1~100的随机数
        int guess = 0;                    // 用户当前猜的数
        int count = 0;                    // 本局猜了几次

        printf("\n我已经想好了一个1到100之间的数。\n");

        // 内层循环：一局里面反复猜
        do {
            printf("请猜：");
            scanf("%d", &guess);

            // 如果用户猜的数不在1~100之间
            if (guess < 1 || guess > 100) {
                printf("你得猜1到100之间的数！\n");
                continue;   // continue的意思是：后面的代码都不执行了，直接回到do开头再来一次
                // 所以这种情况不算次数，也不算猜了
            }

            count++;    // 有效猜测，次数+1

            if (guess > target) {
                printf("大了\n");
            }
            else if (guess < target) {
                printf("小了\n");
            }
            // guess == target的时候不打印任何东西，循环结束
        } while (guess != target);  // 只要没猜中就继续循环

        printf("恭喜！你用了%d次猜对了。\n", count);

        printf("再来一局？(y/n)：");
        scanf(" %c", &playAgain);  // %c前面的空格很重要：跳过前面输入留下的回车符
    }
    // 如果用户输入的不是y，外层while条件不满足，游戏结束

    printf("再见！\n");
    return 0;
}

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
    srand(time(0));                                  // 用当前时间做种子，让每次运行随机数不一样
    int target = rand() % 100 + 1;                   // 生成1~100的随机数（%100得到0~99，+1变成1~100）
    int guess = 0;                                   // 存放玩家每次猜的数
    int count = 0;                                   // 记录猜了多少次
    printf("我已经想好了一个1到100之间的数。\n");
    // do-while循环：先执行一次循环体，再判断条件
    // 这里必须用do-while，因为玩家至少要猜一次
    do {
        printf("请猜猜这个1到100之间的数：");
        scanf("%d", &guess);
        count++;
        if (guess > target) {
            printf("大了\n");
        }
        else if (guess < target) {
            printf("小了\n");
        }
        // guess == target的时候不打印，直接退出循环
    } while (guess != target);// 只要没猜中，就继续循环
    printf("太好了！你用了%d次就猜到了答案。\n", count);

    return 0;
}

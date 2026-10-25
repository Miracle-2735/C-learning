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
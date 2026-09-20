/*### 练习 2（标准版）：及格判断
- 输入成绩（0-100）
- 如果成绩不合法（<0 或> 100），输出`输入错误`
- 否则如果 >=60，输出`及格`
- 否则输出`不及格`*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score;
	printf("请输入成绩：");
	scanf("%d", &score);

	// 先判断成绩是否合法
	if (score < 0 || score > 100) {      // 小于0 或 大于100
		printf("输入错误\n");
	}
	else if (score >= 60) {              // 合法的前提下，≥60 及格
		printf("及格\n");
	}
	else {                               // 剩下的就是 <60
		printf("不及格\n");
	}

	return 0;
}
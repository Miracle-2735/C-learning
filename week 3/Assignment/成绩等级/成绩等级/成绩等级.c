/***成绩等级**
输入一个分数（0-100），输出等级：
> =90：优秀
- 60-89：及格
- <60：不及格
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score;
	printf("请输入成绩(0-100)：");
	scanf("%d", &score);

	if (score < 0 || score>100) {
		printf("成绩不合法，范围应在0-100之间。");
	}
	else if (score >= 90) {
		printf("优秀");	
	}
	else if (score >= 60) {
		printf("及格");
	}
	else {
		printf("不及格");
	}
	return 0;
}
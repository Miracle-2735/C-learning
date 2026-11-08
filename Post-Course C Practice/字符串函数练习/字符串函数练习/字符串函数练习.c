/***1. 字符串函数练习**
*写代码验证：
* char s1[] = "hello";
* char s2[] = "hello";
* 问：`s1 == s2` 是真还是假？为什么？然后用`strcmp`比较一下，输出结果。
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[] = "hello";
	char s2[] = "hello";

	if (strcmp(s1, s2) == 0) {
		printf("两个字符串一样\n");
	}
	else {
		printf("不一样\n");
	}
	printf("s1 == s2 的结果：%d\n", s1 == s2);   // 输出0（假）

  return 0;
}
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

	// strcmp 逐字符比较两个字符串的"内容"，内容相同返回 0
	if (strcmp(s1, s2) == 0) {
		printf("两个字符串一样\n");
	}
	else {
		printf("不一样\n");
	}
	// 考点：s1 == s2 比的不是内容，而是两个数组的"首地址"！
	// s1 和 s2 是两块不同内存，地址必然不同，所以 == 结果是 0（假）
	// 想比字符串内容永远用 strcmp，不要用 ==
	printf("s1 == s2 的结果：%d\n", s1 == s2);   // 输出0（假）

  return 0;
}
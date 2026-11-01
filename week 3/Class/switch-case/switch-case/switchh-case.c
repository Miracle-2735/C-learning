#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* switch-case 课堂示例：根据输入数字输出问候语
 * 注意：源文件名 switchh-case.c 多了一个 h（正确拼写是 switch-case）；
 *       重命名会牵动 VS 工程文件引用，这里只补代码注释，不改文件名。
 */
int main()
{
	int type;
	printf("请输入数字(1-4)：");
	scanf("%d", &type);

	switch (type) {
	case 1:
		printf("你好\n");
		break;
	case 2:
		printf("早上好\n");
		break;
	case 3:
		printf("晚上好\n");
		break;
	case 4:
		printf("再见\n");
		break;
	default:
		printf("啊，什么啊？\n");
		break;
	}
	return 0;
}

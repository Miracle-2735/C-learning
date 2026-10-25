#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number;
	int sum = 0;
	int count = 0;

	/*scanf("%d", &number);
	while (number != -1) {
		sum += number;
		count++;
		scanf("%d", &number);
	}
	*/

	do {
		printf("请输入整数：");
		scanf("%d", &number);
		if (number != -1) {
			sum += number;
			count++;
		}
	} while (number != -1);
	printf("%f\n", 1.0 * sum / count);

	return 0;
}
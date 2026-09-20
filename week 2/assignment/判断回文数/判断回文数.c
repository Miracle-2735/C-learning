/*### 验收题（不看资料，独立写）
**输入一个正整数，判断它是不是回文数**
- 回文数：正读反读都一样，比如 121、12321、5
- 比如输入 12321 → `是回文数`
- 输入 12345 → `不是回文数`
- 提示：用循环把数字逆序，然后和原数比较*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("请输入一个正整数：");
	scanf("%d", &n);

	int original = n;   // 先把原数存起来（因为后面 n 会被改没）
	int rev = 0;        // rev = reverse，存倒过来的数

	// 把 n 一位一位拆开，拼到 rev 后面
	while (n > 0) {
		int last = n % 10;      // ① 取最后一位（12321%10=1）
		rev = rev * 10 + last;  // ② 拼到 rev 后面（rev=0*10+1=1）
		n = n / 10;             // ③ 去掉最后一位（12321/10=1232）
	}

	// 循环结束后，比较倒过来的数和原数
	if (rev == original) {
		printf("%d 是回文数\n", original);
	}
	else {
		printf("%d 不是回文数\n", original);
	}

	return 0;
}
#include <stdio.h>
#include <stdlib.h>

/* 演示 malloc：循环不断申请 100MB 堆内存，直到操作系统无法再分配为止
 * 作用：粗略观察当前进程最多还能申请多少内存（课程演示用）
 */
int main(void)
{
	void* p;          // 指向每次申请到的内存块
	int cnt = 0;      // 已成功分配的块数（每块 100MB）

	// malloc 失败时返回 NULL(0)，循环条件不成立即退出
	while ((p = malloc(100 * 1024 * 1024))) {
		cnt++;
	}
	// 退出循环说明内存已申请满；cnt 块 × 100MB ≈ 大致可分配容量
	// 说明：教学演示不调用 free；程序结束时操作系统会统一回收进程内存
	printf("大约连续分配了 %d 块（每块100MB）后，内存不足、malloc 失败\n", cnt);

	return 0;
}

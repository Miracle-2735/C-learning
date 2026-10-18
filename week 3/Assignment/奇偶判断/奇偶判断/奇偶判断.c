/***奇偶判断** 
输入一个整数，判断它是奇数还是偶数，输出 "奇数" 或 "偶数"。 
*/ 
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>  
int main() 
{ 	
	int n;
    printf("请输入一个整数：");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("偶数\n");
    } 	else {
        printf("奇数\n");
    } 	
    return 0;
}
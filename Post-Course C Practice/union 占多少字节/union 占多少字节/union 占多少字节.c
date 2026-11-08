/*选择题（union） 
union Data 
{ 
	int i;
	float f; 
	char str[20];
}; 
这个 union 占多少字节？为什么？
*/
#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main(void)
{
    union Data data;

    printf("union占多少字节：%d\n", (int)sizeof(data));   // sizeof返回size_t，强转int避免%d警告

    // 测试：存了i，再看str是不是被覆盖了
    data.i = 65;
    printf("存了i=65，str[0] = %c\n", data.str[0]);   // 输出A（65的ASCII码）

    // 测试：改str，i也会变
    data.str[0] = 'B';
    printf("改了str[0]='B'，i = %d\n", data.i);        // 输出66（'B'的ASCII码）

    return 0;
}

//- `sizeof`直接告诉你占 20 字节
//- 改了 i，str[0] 也变了 —— 因为它们共用同一块内存
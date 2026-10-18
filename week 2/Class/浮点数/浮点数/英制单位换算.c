/*美国人固执地使用英制计量单位，他们习惯用几尺几寸(英尺英寸)
来报自己的身高。如果遇到一个美国人告诉你她5英尺7，他的身高
应该是一米几呢？
          (5+7÷12)×0.3048=1.7018米
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    printf("请分别输入身高的英尺和英寸：",
        "如输入\"5  7\"表示5英尺7英寸:");

    int foot;
    int inch;

    scanf("%d %d", &foot, &inch);
    //inch是int，12也是int，int ÷ int = int，小数直接砍掉
    //关键就是这个 .0 ：12.0 是小数，inch 自动提升成小数再除，结果就是 0.5833... 了。
    printf("身高是%f米。\n", ((foot + inch / 12.0) * 0.3048));

    return 0;
}
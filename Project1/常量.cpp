// 常量
// 0b1111 = 07 = 0xF
// ASCII
/*	48~57<->0~9
	65~90<->A~Z
	97~122<->a~z*/
//'\'转义字符	\n=10 换行		\r=13 回车		\t=9 制表符	\b=8 退格
//					\\=92 反斜杠	\'=39 单引号	\0=0 字符0		\ddd d是八进制数, 代表八进制下的ASCII码, \xhh h是16进制, 也是ASCII\

using namespace std;
#include <iostream>
#include <cstdio>
#define U 12
int main()
{
	char a, b, c;
	a = 48;
	b = 65;
	c = 122;
	printf("%c\n%c\n%c", a, b, c);
	return 0;
}
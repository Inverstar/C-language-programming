#include <iostream>
#include <cstdio>
/*多行注释
注释不影响程序运行*/
using namespace std;
int main()
{
	char a, b, c;
	scanf_s("%c%c%c", &a, sizeof(a), &b, sizeof(b), &c, sizeof(c));
	//使用scanf_s需要给每一个输入给出缓冲大小
	printf("%c%c%c", a, b, c);
	return 0;
}
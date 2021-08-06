#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%8d %8d %8d", a, b, c);

	return 0;

}
//读入三个整数，按每个整数占8个字符的宽度，右对齐输出它们。
//622a28d7d8fa72363ec156372f81a9be0537513a98f448faeb079aa8f881a255
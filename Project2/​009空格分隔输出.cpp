#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
	char a = 0;
	int i = 0;
	float f = 0;
	double d = 0;
	scanf_s("%c\n%d\n%f\n%lf", &a,1,&i,&f,&d);
	printf("%c %d %.6f %.6f", a, i, f, d);

	return 0;

}

//读入一个字符，一个整数，一个单精度浮点数，一个双精度浮点数，然后按顺序输出它们
//并且要求在他们之间用一个空格分隔。输出浮点数时保留6位小数。
//02848dcdc9596460048e96ebdacb461b312dc18905fa8314b4780a9b0ee784b3
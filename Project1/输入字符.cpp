#include <iostream>
#include <cstdio>
/*����ע��
ע�Ͳ�Ӱ���������*/
using namespace std;
int main()
{
	char a, b, c;
	scanf_s("%c%c%c", &a, sizeof(a), &b, sizeof(b), &c, sizeof(c));
	//ʹ��scanf_s��Ҫ��ÿһ��������������С
	printf("%c%c%c", a, b, c);
	return 0;
}
// ����
// 0b1111 = 07 = 0xF
// ASCII
/*	48~57<->0~9
	65~90<->A~Z
	97~122<->a~z*/
//'\'ת���ַ�	\n=10 ����		\r=13 �س�		\t=9 �Ʊ��	\b=8 �˸�
//					\\=92 ��б��	\'=39 ������	\0=0 �ַ�0		\ddd d�ǰ˽�����, ����˽����µ�ASCII��, \xhh h��16����, Ҳ��ASCII\

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
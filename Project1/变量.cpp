#include <iostream>
#include <cstdio>
/*����: ���ֺ�������������
��������ʱ���Զ������������ڴ�ռ�
�������������ʹ��֮ǰ*/
using namespace std;
int main()
{
	int number; //��������ĸ, ����, �»������, �޿ո�, �������ֿ�ͷ
	char a, b, c; //������ؼ��ֻ������ظ�
	long a1 = 1;
	//printf("%d\n", sizeof(long long));//sizeof()���Եõ�ĳ��������ĳ�����͵��ֽڴ�С
	short b1 = 3;
	long long c1 = 4;
	unsigned char c3 = 'c';
	bool b2 = 1;
	double d = 1.0;
	float f = 4;
	short a2 = -0177777; //-1
			//  a2 = 0100001;	//32767
	unsigned short us = 0177777; //65535
	unsigned short us1 = 0277777;
	//scanf_s("%c%c%c", &a, sizeof(a), &b, sizeof(b), &c, sizeof(c));
	//ʹ��scanf_s��Ҫ��ÿһ��������������С
	char i = 32;
	printf("%c=%d\n", i, i);
	//����ת��
	int k = 'a';
	char k1 = 98;
	printf("%c\n", k1);
	printf("%d\n%d\n%d", us, us1, a2);
	return 0;


	//������ж����� ʮ�������Բ�����ʽ �洢 
}
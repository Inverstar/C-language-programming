#include<iostream>
using namespace std;
//ʮ���������������ԭ��, �����������ƶ��ǲ���.
int λ����()
{
	int a = -1, b = 0;
	int c = 0b00000000111111110000000011111111;
	int d = 037777777777;// -1 11����
	int e = 0xFFFFFFFF;// -1 8����
	cout << oct << a << endl;
	cout << hex << a << endl;
	cout << hex << d << endl;
	cout << hex << e << endl;
	cout <<dec<< (e & d) << endl;
	cout << (a&b) << endl;
	cout << (21 & 18) << endl;
	cout <<(c & 0x80)<<' '<<0x80<< endl;
	// ͨ����&������λ����ͱ���, ��ȡ�����е�ĳһλ.

	int n = 256;
	short n1 = 0x1010;
	cout <<hex<< n1 << endl;
	n1 &= 0xffffff00;
	n &= 0x80000000;
	cout << n << endl;

	// |���㽫��Ҫ��λ��1, ����λ����
	n |= 0xff;

	//^��ͬΪ0, ��ͬΪ1. ����λȡ��, ��������λ����
	n ^= 0xff;
	//�Ͱ�λȡ��, ��λ����.

	//a^b=c, ��c^b=a��a^c=b ���ܺͽ���
	//ʹ����򽻻�������ֵ
	int k = 5, g = 6;
	a = a ^ b; //��a^b=c, ������a=c
	b = b ^ a; //b=b^c=a, ����b=a
	a = a ^ b;// a=c^a=b, ����a=b
	//��: ��Ŀȡ��~
	cout << n << ' ' << ~n << ' ' << (n=~n) << endl;

	//�������ƶ��ǳ�2��n��, ������Сȡ��.
	cout <<dec<< n << ' ' << (n << 1) << ' ' << (n >> 1) << endl;
	return 0;
}
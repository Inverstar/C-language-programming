#include <iostream>
using namespace std;
int an(int a, int n)
{
	int an = 0;
	n -= 1;
	an = (a >> n) & 1;					//��a�ƶ�nλ, �ٽ��ƶ����a��1����������õ����
	//an = (a & (1 << n) )>> n;		//��1�ƶ�nλͬa����������, ������ٽ�����ƶ�nλ����һλ
	return an;
}
int ai(int a)
{
	//int an(int, int);
	for (int i = 32; i > 0; i--)
	{
		cout << an(a, i);
		if (i % 4==0 )cout << ' ';
	}
	cout << endl;
	return a;
}
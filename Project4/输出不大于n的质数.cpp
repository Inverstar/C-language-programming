#include<iostream>
using namespace std;
int main()
{
	int n;
	int f1(int);
	int f2(int);
	cin >> n;
	f1(n);
	return 0;
}
int f2(int n)
{
	cout << 2 << endl;
	for (int i = 3; i <= n; i+=2) //�ų�ż��
	{
		int k;
		for (k = 3; k < i; k+=2)
		{
			if (i % k == 0)
				break; //���i������k�������, ����
			if (k * k > i)// ֻ��Ҫ��֤С�ڸ���i��k
				break;
		}
		if (k*k> i)
			cout << i << endl; //���k����i, ��iΪ����, ���
	}
	return 0;
}
int f1(int n) 
{
	for (int i = 2; i <= n; ++i)
	{
		int k;
		for (k = 2; k < i; ++k)
		{
			if (i % k == 0)
				break; //���i������k�������, ����
		}
		if (k == i)
			cout << i << endl; //���k����i, ��iΪ����, ���
	}
	return 0;
}
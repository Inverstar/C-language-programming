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
	for (int i = 3; i <= n; i+=2) //排除偶数
	{
		int k;
		for (k = 3; k < i; k+=2)
		{
			if (i % k == 0)
				break; //如果i能整除k则非质数, 跳出
			if (k * k > i)// 只需要验证小于根号i的k
				break;
		}
		if (k*k> i)
			cout << i << endl; //如果k等于i, 则i为质数, 输出
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
				break; //如果i能整除k则非质数, 跳出
		}
		if (k == i)
			cout << i << endl; //如果k等于i, 则i为质数, 输出
	}
	return 0;
}
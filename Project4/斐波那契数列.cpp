#include<iostream>
using namespace std;
int main()
{
	double f1 = 1, f2 = 1 ,k=0;
	cin >> k;
	if (k == 1 || k == 2)
		cout << 1 << endl;
	else
	{
		cout << 1 << ' ' << 1;
		double sum = 0;
		for (int i = 0; i < k - 2; ++i)
		{
			sum = f1 + f2;
			f1 = f2;
			f2 = sum;
			cout <<' '<< f2 ;
		}
		cout <<'\n'<< "前"<<k<< "个数输出完成"<< endl;
	}
	return main();
}
//输出斐波那契数列的前k项 100项long long都不行
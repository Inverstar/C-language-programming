#include<iostream>
using namespace std;
int main()
{
	int n = 0, x=0, y = 0;
	cin >> n >> x >> y;
	if (y == 0)
		cout << n << endl;
	else if (n > 0)
	{
		if (y < x)
			cout << n - 1 << endl;
		else
		{
			if (y % x==0)
				if (n - y / x < 0)
					cout << 0 << endl;
				else
					cout << n - y / x << endl;
			else
			{
				if (n - y / x - 1 < 0)
					cout << 0 << endl;
				else
				cout << n - y / x - 1 << endl;
			}
		}
	}
	else cout << 0 << endl;
	return 0;
}
//你买了n个苹果，里面有一条虫子。
//虫子每x小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，那么经过y小时你还有多少个完整的苹果？
//bf4c1303e13a82e4164bc4ad6a8d9c3a322a4a813e5317e3cd7357375d60d4da
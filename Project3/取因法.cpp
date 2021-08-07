//对给定正整数n和m, 1~n中,取两个不同的数n1和n2, 使得n1+n2 是m的因数
#include<iostream>
using namespace std;
int main()
{
	int n, m;
	int total = 0;
	cin >> n >> m;
	for (int i = 1; i < n; ++i)
	{
		for (int j = i + 1; j <= n; ++j)
			if (m % (i + j) == 0)
				++total;
	}
	cout << total;
	return 0;
}
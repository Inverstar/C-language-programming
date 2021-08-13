#include<iostream>
constexpr auto N = 1000010;
constexpr auto k = 32767;
using namespace std;
int a[N];
int Pell(int x)
{
	if (a[x] != 0) return a[x];
	if (x == 1) return 1;
	if (x == 2) return 2;
	return a[x] = (2 * (Pell(x - 1)) % k + (Pell(x - 2)) % k) % k;
}
int main()
{
	int n, j;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> j;
		cout << Pell(j) << endl;
	}
	return 0;
}

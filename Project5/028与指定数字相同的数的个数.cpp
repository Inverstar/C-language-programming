#include<iostream>
using namespace std;
constexpr auto N = 100;
int a[N];
int main()
{
	int n,m,k=0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> m;
	for (int i = 0; i < n; i++)
		if(a[i]==m)k++;
	cout << k << endl;
	return 0;
}
//7cf94a3fce6b1d29b37595c2aaef6f4ce7d6b7a3872fae34d4ca7b710c4a276e
//输出一个整数序列中与指定数字相同的数的个数。
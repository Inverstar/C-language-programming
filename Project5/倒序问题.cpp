#include<iostream>
using namespace std;
constexpr auto N = 100;
int a[N];
int main()
{
	
	int f1(int[]);
	f1(a);
	int i = 0;
	cin >> i;
	cout << i << '-';
	cout << a << endl;
	cout << a + i * sizeof(int) << endl;//a¾ÍÊÇµØÖ·
	cout << sizeof(a) << endl;
	return 0;
}
int f1(int a[])
{
	for (int i = 0; i < N; ++i)
		cin >> a[i];
	for (int i = N - 1; i >= 0; --i)
		cout << a[i] << ' ';
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	int n;
	int f1(int );
	int f2(int );
	cin >> n;
	f1(n);
	f2(n);
	return main();
}
int f2(int n)
{
	int sum = 0;
	int factorial = 1;
	for (int i = 1; i <= n; ++i)
	{
		factorial *= i;
		if (i == n)
			cout << factorial;
		else
			cout << factorial << '+';
		sum += factorial;
	}
	cout << '=' << sum << endl;
	return 0;
}
int f1(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; ++i)
	{
		int factorial = 1;
		for (int j = 1; j <= i; ++j)
			factorial *= j;
		if (i == n)
			cout << factorial;
		else
			cout << factorial << '+';
		sum += factorial;
	}
	cout << '=' << sum << endl;
	return 0;
}
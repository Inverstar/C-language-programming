#include<iostream>
using namespace std;
int main()
{
	int a = 0, n = 0;
	cin >> a >> n;
	int result = a;
	for (int i = 0; i < n - 1; ++i)
	{
		result *= a;
	}
	cout << result<<endl;
	return 0;
}
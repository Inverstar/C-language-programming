#include<iostream>
using namespace std;
int main()
{
	int n, min, max;
	cin >> n >> min;
	max = min;
	for (int i = 0; i < n - 1; ++i)
	{
		int a;
		cin >> a;
		if (a < min)
			min = a;
		if (a > max)
			max = a;
	}
	cout << max - min << endl;
	return 0;
}
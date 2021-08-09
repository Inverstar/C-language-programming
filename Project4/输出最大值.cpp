#include<iostream>
using namespace std;
int main()
{
	int n = 0, m = 0;
	cin >> m;
	while (cin >> n)
	{
		if (n > m)
			m = n;
	}
	cout << m << endl;
	return 0;
}
#include<iostream>
using namespace std;
bool M(int k,int x)
{
	if (k == x) return true;
	if(k > x) return false;
	cout << 3 * k + 1 << endl;
	cout << 2 * k + 1 << endl;
	return M(3 * k + 1, x) || M(2 * k + 1, x);
}
int main()
{
	int k, x;
	cin >> k;
	getchar();
	cin >> x;
	if (k > x)cout << "NO" << endl;
	else
	{
		if (M(k, x))cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
	//	9794e42bf218100a4de70aa5eb3d5a307561c7dc4108aa49ae15763c7947dc0c
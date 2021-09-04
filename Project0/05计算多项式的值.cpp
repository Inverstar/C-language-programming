#include <iostream>
#include<iomanip>
#include<cmath>
float X_n(float x, int n)
{
	if (n == 0)
		return 1;
	return X_n(x, n - 1) + pow(x, n);
}
using namespace std;
int main()
{
	float x;
	int n = 2;
	cin >> x>>n;
	cout << fixed << setprecision(2);
	cout << X_n(x,n) << endl;
}
	//	e7de9b479b76c985e6d52f25c4cb216ca205e8fad0e0eb5ed284e43b5c06c958
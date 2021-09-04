#include <iostream>
#include<iomanip>
double N(int n)
{
	if (n == 1)
		return 1;
	return n * N(n - 1);
}
double E(int n)
{
	if (n == 1)
		return 2;
	return E(n - 1) + 1 / N(n);
}
using namespace std;
int main()
{

	int n = 2;
	cin >> n;
	cout << fixed << setprecision(10);
	cout << E(n) << endl;
}
	//	e78b17be64ddbe60b8172a5b09372c99af81615a5fdfdf7a7890ad877f64453b
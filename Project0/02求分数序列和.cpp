#include <iostream>
#include<iomanip>
using namespace std;
double f(int N)
{
	double q = 2, p = 1;
	if (N == 1)
		return q / p;
	else
		return 1 + 1 / f(N - 1);
}
int main()
{
	int N = 0;
	double n = 0;
	cin >> N;
	while (N--)
		n += f(N+1);
	cout << fixed << setprecision(4) << n << endl;
}
//	e2dc6dd2c6836654854319bed84bf2528e36ace43188467b99ba60b8fcffc904
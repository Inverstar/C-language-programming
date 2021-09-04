#include <iostream>
#include<iomanip>
using namespace std;
double f(double N)
{
	if (N < 5)
		return 2.5 - N;
	if (N >= 5 && N < 10)
		return 2 - 1.5*(N - 3)*(N - 3);
	if (N >= 10)
		return N / 2 - 1.5;
}
int main()
{
	double N = 0;
	cin >> N;
	cout << fixed << setprecision(3) << f(N) << endl;
}
//	7ba5831eca4765c789ada4b7d1448baff8689a7d81f04382c51abce10ae6e052
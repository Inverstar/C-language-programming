#include <iostream>
#include <cstdio>
using namespace std;
constexpr auto N = 1000;
int main()
{
	int k = 0,i=0;
	int K[N] = {};
	while (&&cin >> k)
	{
		K[i++] = k;
	}
	cout << K[i-1] << endl;
	return 0;
}
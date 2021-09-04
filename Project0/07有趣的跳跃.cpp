#include <iostream>
#include<iomanip>
#include<cstring>
using namespace std;

int main()
{
	int N[3010];
	int n ;
	int abs;

	cin >> n;
	int k = n;
	while (k--)
		cin >> N[k];
	int* a = new int[n+1];
	memset(a, -1, sizeof(a));
	for (int i = 1; i < n; i++)
	{
		if (N[i] < N[i - 1])
			abs = N[i - 1] - N[i];
		else abs = N[i] - N[i - 1];
		if (abs >= n)
			goto N;
		for (int j = 1; j < i; j++)
			if (a[j] == abs)
				goto N;
		a[i] = abs;
	}
	delete[] a;
	cout << "Jolly" << endl;
	return 0;
	N: delete[] a; cout << "Not jolly" << endl;
	return 0;
}
	//	4654b827836405be03f66b2d660ce8d492f61d3251cceb191be501751633cce8
//FILE *f;
//freopen_s(&f,"in(7).txt", "r", stdin);
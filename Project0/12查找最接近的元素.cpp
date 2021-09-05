#include <iostream>
#include<iomanip>
#include<cmath>

using namespace std;
int find(int a[], int b, int x)
{
	int k = 1000000000, d=x,c=b;
	while (d--)
	{
		if (a[d] == b) return b;
		if (abs(b - a[d]) < k)
		{
			k = abs(b-a[d]);
			c = a[d];
		}
		else if (abs(b - a[d]) == k)
		{
			if (a[d] < c)c = a[d];
		}
	}
	return c;
}
int main()
{
	int n, m, x,y;
	cin >> n;
	x = n;
	int* N = new int[n];
	while (n--)
	{
		cin >> N[n];
	}
	cin >> m;
	y = m;
	int* M = new int[m];
	while (m--)
	{
		cin >> M[m];
	}
	for (int i = y-1; i >=0; i--)
	{
		cout << find(N, M[i], x) << endl;
	}
	delete[] N;
	delete[] M;
	return 0;
}

	//	11e6ebe21d1e1aacf897a225a5bbb96c2883eefb5564b91c2d3d21c40c3fa771
//输入一个n行m列的矩阵A，输出它的转置AT
#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int a[100][100] = {};
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[j][i]<<' ';
		cout << endl;
	}
	return 0;
}
//6d39d603e56ebe0266c612f30cdbfd54c867ba71ba63075eac9e5a516556b2ca
#include <iostream>
using namespace std;
constexpr auto ROWS = 8;
constexpr auto COLS = 8;
int a[ROWS][COLS];
int b[ROWS][COLS];
int c[ROWS][COLS];
int main()
{
	int m, n, p, q;
	cin >> m >> n;
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < m; ++j)
			cin >> a[i][j];

	cin >> p >> q;
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < m; ++j)
			cin >> b[i][j];

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < q; ++j)
		{
			c[i][j] = 0;
			for (int k = 0; k < n; ++k)
				c[i][j] += a[i][k] * b[k][j];
		}
	}

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < q; ++j)
		{
			cout << c[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;
}
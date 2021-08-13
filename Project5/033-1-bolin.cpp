#include<iostream>
using namespace std;

int main()
{
	int row, col, i, j;
	char b;
	double c;
	scanf("%d%d", &row, &col);
	char a[100][100], m[row][col];
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
		{
			scanf("%d", &a[i][j]); m[i][j] = a[i][j];
		}
	for (i = 1; i < row - 1; i++)
		for (j = 1; j < col - 1; j++)
		{
			c = double(a[i][j] + a[i - 1][j] + a[i][j - 1] + a[i][j + 1] + a[i + 1][j]) / 5;
			b = char(c);
			if (c - b > 0.5) b++;
			m[i][j] = b;
		}
	for (i = 0; i < row - 1; i++)
	{
		for (j = 0; j < col - 1; j++)
			printf("%d ", m[i][j]);
		printf("%d\n", m[i][j]);
	}
	for (j = 0; j < col - 1; j++)
		printf("%d ", m[i][j]);
	printf("%d", m[i][j]);
	return 0;
}
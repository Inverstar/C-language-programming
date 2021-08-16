#include<stdio.h>
//cÊµÏÖ¾ØÕó×ªÖÃ
int main()
{
	int a[101][101];
	int b[101][101];
	int n, m;
	scanf_s("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf_s("%d", &a[i][j]);
			b[j][i] = a[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#include <iostream>
#include<iomanip>
#include<cstring>
using namespace std;
void draw(int x, int y, char a, int z)
{
	char A[10][10] = { a };
	memset(A, ' ', 100);
	if (z == 0)
	{
		for (int i = 0; i < y; i++)
		{
			A[0][i] = a; A[x - 1][i] = a;
		}
		for (int i = 1; i < x; i++)
		{
			A[i][0] = a; A[i][y - 1] = a;
		}
	}
	else if (z == 1)
		memset(A, a, x*10);
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
			cout << A[i][j];
		cout << endl;
	}
}
int main()
{
	int x, y, z;
	char a;
	cin >> x >> y >> a >> z;
	draw(x, y, a, z);
}

	//A有10列, 所以要设置x*10
	//0fa5b88a15e5059f325124600abd4fa9d2ea2f8c0b98ae81c1639cae095b12e9
	
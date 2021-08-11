//给定n行m列的图像各像素点的灰度值，要求用如下方法对其进行模糊化处理：
//1. 四周最外侧的像素点灰度值不变；
//2. 中间各像素点新灰度值为该像素点及其上下左右相邻四个像素点原灰度值的平均（舍入到最接近的整数）。
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n = 1, m = 1;
	int p[100][100] = {};
	int b[100][100] = {};
	cin >> n >> m;
	for (char i = 0; i < n; i++)
	{
		for (char j = 0; j < m; j++)
			cin >> p[i][j];
	}
	for (char i = 0; i < n; i++)
		for (char j = 0; j < m; j++)
		{
			if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
				b[i][j] = p[i][j];
			else
			{
				double k = (p[i][j]+p[i - 1][j] + p[i + 1][j] + p[i][j - 1] + p[i][j + 1]) / 5.0;
				b[i][j] = round(k);
			}
		}
	for (char i = 0; i < n; i++)
	{
		for (char j = 0; j < m; j++)
			cout << b[i][j] << ' ';
		cout << endl;
	}
	return 0;
}
//86ecf7068b606d4ddc43551891d74b0bdb0da562a11820cb598a67b839c61bc3
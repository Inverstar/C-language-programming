//����n��m�е�ͼ������ص�ĻҶ�ֵ��Ҫ�������·����������ģ��������
//1. �������������ص�Ҷ�ֵ���䣻
//2. �м�����ص��»Ҷ�ֵΪ�����ص㼰���������������ĸ����ص�ԭ�Ҷ�ֵ��ƽ�������뵽��ӽ�����������
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
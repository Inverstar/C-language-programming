#include<iostream>
using namespace std;
int main()
{
	int n = 0, x=0, y = 0;
	cin >> n >> x >> y;
	if (y == 0)
		cout << n << endl;
	else if (n > 0)
	{
		if (y < x)
			cout << n - 1 << endl;
		else
		{
			if (y % x==0)
				if (n - y / x < 0)
					cout << 0 << endl;
				else
					cout << n - y / x << endl;
			else
			{
				if (n - y / x - 1 < 0)
					cout << 0 << endl;
				else
				cout << n - y / x - 1 << endl;
			}
		}
	}
	else cout << 0 << endl;
	return 0;
}
//������n��ƻ����������һ�����ӡ�
//����ÿxСʱ�ܳԵ�һ��ƻ������������ڳ���һ��ƻ��֮ǰ�������һ������ô����yСʱ�㻹�ж��ٸ�������ƻ����
//bf4c1303e13a82e4164bc4ad6a8d9c3a322a4a813e5317e3cd7357375d60d4da
#include<iostream>
using namespace std;
int main()
{
	int n = 0, m = 0;
	cin >> n >> m;
	int a = m + 1, b = m + 1;	//a, b��¼���ҵ�������ֵ���, a<b
	for (int i = n; i < m; ++i)	//ȡ����, ��m-n��ȡ��
	{
		if (i > (a + b) / 2 + 1)
		{
			//cout << "i > (a + b) / 2 + 1" << '\n' << a <<' '<< b << endl; 
			break;
		}
		// ������ѭ��
		for (int j = i + 1; j <= m; ++j)	//ȡ����
		{
			if (i + j > a + b)
			{
				//cout << "i + j > a + b" << '\n'<<a <<' '<< b << endl; 
				break;
			}
			//������ѭ��
			if (i*j%(i+j)==0)	//�����ֵ���
			{
				if (i + j < a + b)//���ֺ͸�С���ֵ���
				{
					a = i;
					b = j;
					cout << a << ' ' << b << endl;
				}//�����ֵ���
				else if (i + j == a + b && i < a)//���ֺ���ͬ, ��������С���ֵ���
				{
					a = i;
					b = j;
					cout << a << ' ' << b << endl;
				}
			}
		}
	}
	if (a == m + 1)
		cout << "No solution." << endl;
	else
		cout << a << " " << b << endl;
	return 0;
}
//breakֻ����������ѭ��
//������ͬ��������n<m;
//m+n��m*n������
//Ѱ��һ���ֵ���, �ҳ���С��һ��, ���ҵ�����С
//ͨ��ö�ٲ�ͬ��������֤, ��¼����ֵ���.

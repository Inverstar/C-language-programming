#include<iostream>
using namespace std;
int main()
{
	int an[5][5] = {};
	int A[5][3]= {};
	int d[5] = {};
	for (int i = 0; i < 5; i++)
		for(int j =0;j<5;j++)
			cin >> an[i][j];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
		{
			if (A[i][0] < an[i][j])
			{
				A[i][0] = an[i][j];
				A[i][1] = i+1;
				A[i][2] = j+1;
			}
		}
	for (int i = 0; i < 5; i++)
		{	
			for (int k = 0; k < 5; k++)
			{
				
				int j = A[i][2] - 1;
				if (A[i][0] > an[k][j])
				{
					d[i] = 1;
					//cout << A[i][1] << ' ' << A[i][2] << ' ' << A[i][0] << endl;
					break;
				}
			}
			if(d[i]==0)cout << A[i][1] << ' ' << A[i][2] << ' ' << A[i][0] << endl;
		}
	if (d[0] != 0 && d[1] != 0 && d[2] != 0 && d[3] != 0 && d[4] != 0)
		cout << "not found" << endl;
	return 0;
}
//�е�Ӱ�, ��ô�Ľ���?
//6e6e9a03f86b4ad390a9b3ba97120ece8252b5837d630300b36c8f45c4db4e42
//cout << A[i][1] << ' ' << A[i][2] << ' ' << A[i][0] << endl;
//����һ��5*5�ľ���ÿ��ֻ��һ�����ֵ��ÿ��ֻ��һ����Сֵ��Ѱ���������İ��㡣
//����ָ���Ǿ����е�һ��Ԫ�أ����������е����ֵ�������������е���Сֵ��
//���磺������������У���4�е�1�е�Ԫ�ؾ��ǰ��㣬ֵΪ8 ����

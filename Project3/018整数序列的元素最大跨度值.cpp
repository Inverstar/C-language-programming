#include<iostream>
using namespace std;
int main()
{
	int n, min, max;
	cin >> n >> min;
	max = min;
	for (int i = 0; i < n - 1; ++i)
	{
		int a;
		cin >> a;
		if (a < min)
			min = a;
		if (a > max)
			max = a;
	}
	cout << max - min << endl;
	return 0;
}
//����һ������Ϊn�ķǸ��������У���������е������ֵ�������ֵ = ���ֵ��ȥ��Сֵ���� 
//01fe9b4aae65a2346adaa2acd997dfb1f67e53bf4a26fee7df9b6860a74038ba
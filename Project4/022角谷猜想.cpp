#include<iostream>
using namespace std;
int main()
{
	long long N;
	cin >> N;
	if (N == 1)cout << "End" <<endl;
	else 
	while (N > 1)
	{
		if (N % 2)
		{
			cout << N << "*3+1=" << N * 3 + 1 << endl;
			N = N * 3 + 1;
		}
		else 
		{ 
			cout << N << "/2=" << N / 2 << endl;
				N /= 2;
		}
		if (N == 1)
		{
			cout << "End" << endl;
			break;
		}
	}
	return 0;
}
//04c29927c0189a82a80ef50895d8b6a43b06c709260d871ab08eeee0aa0ce729
//��ν�ǹȲ��룬��ָ��������һ������������������������3��1�������ż���������2��
//�õ��Ľ���ٰ������������ظ������������ܹ��õ�1��
//�磬�ٶ���ʼ����Ϊ5��������̷ֱ�Ϊ16��8��4��2��1�� 
//����Ҫ������һ������������������õ�1�Ĺ����������
//�������ʵ�����, ����Խ�����
//��ʼֵ����Գ�ʼ��, �����ܸ�ֵ
#include<iostream>
using namespace std;
constexpr auto N = 100000;
char isPrime[N + 10];
int main()
{
	int a[3] [3]= { 0,1,2,3,4,5,6,7,8};// д��ȫ��Ԫ��
	int b[3][3] = { {}, {0,1,5},{2,3,4} };// �����ÿ����Ÿ�0
	int c[][3] = { 0,1,2,3,4,5,1};

	for (int j = -0; j <= 2; j++)
	{
		for(int i=0;i<=2;i++)
			cout << a[j][i]<<b[j][i] << c[j][i]<<endl;
		cout << a[j] - b[j] << ' ' << b[j] - c[j] << ' ' << a[j] - c[j]<<endl;
	}

	
	return 0;
}
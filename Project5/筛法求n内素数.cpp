// ��2��n�е������г���, ��2��ʼ����2�ı���, �´δ�ʣ�µ���һ������ʼ, �������ı���.���ʣ�µĶ���������
#include<iostream>
using namespace std;
constexpr auto N = 100000;
char isPrime[N + 10] ;
int main()
{
	memset(isPrime, 1, sizeof(isPrime));
	//memset����������ʼ����ʱ�������ֽ�Ϊ��λ��
	//for (int i = 2; i <= N; ++i)
	//	isPrime[i] = 1;
	for (int i = 2; i <= N; ++i)
	{
		if (isPrime[i])
			for (int j = 2 * i; j <= N; j += i)
				isPrime[j] = 0;
	}
	for (int i = 2; i <= N; ++i)
		if (isPrime[i])
			cout << i << endl;
	return 0;
}
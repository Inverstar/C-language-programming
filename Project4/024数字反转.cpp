#include<iostream>
using namespace std;
int main()
{
    long N=0;
    cin >> N;
    if (N < 0)
    {
        N = -N;
        cout << '-';
    }
    long ����(long);
    ����(N);
   
	return 0;
}
long ����(long N)
{
    while (N % 10 == 0)
    {
        N /= 10;
    }
    for (int j = 0; N > 0; N /= 10)
    {
      
        cout << N % 10;
        j++;

    }
    return 0;
}
//45a1b7c918f9fc2beb5e7c3f3cc5582eeb75be48576b129dc4d80ab29e7ad833

// ����һ���������뽫��������λ�����ַ�ת�õ�һ��������
// ����ҲӦ���������ĳ�����ʽ�������Ǹ�����ԭ��Ϊ�㣬����ת��õ������������λ���ֲ�ӦΪ�㣨�μ�����2����
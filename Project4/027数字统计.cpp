#include<iostream>
using namespace std;
int main()
{
	int L = 0, R = 0;
	cin >> L >> R;
    int j = 0;
	for (int i = L; i <= R; i++)
	{
        for (int k=i; k > 0; k /= 10)
        {
            if( k % 10==2)
            j++;
        }
	}
    cout << j << endl;
    return 0;
}

//01e731e69ec5cca924c3e2183d26fed510b1e16797fac6ce25aa8e8cecb079e8
//��ͳ��ĳ��������Χ[L, R]�����������У�����2���ֵĴ�����
//���������Χ[2, 22]��
//����2����2�г�����1�Σ�����12�г���1�Σ�����20�г���1�Σ�����21�г���1�Σ�����22�г���2�Σ�
//��������2�ڸ÷�Χ��һ��������6�Ρ�
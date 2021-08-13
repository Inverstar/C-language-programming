#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (n == m)
        cout << n << endl;
    else if (n % m == 0 || m % n == 0)
    {
        if (n < m)
            cout << n << endl;
        else
            cout << m << endl;
    }
    else
    {
        int a, b;
        if (n > m)
        {
            a = n; b = m;
        }
        else
        {
            a = m; b = n;
        }
        while (a % b != 0)
        {
            int c = a % b;
            a = b;
            b = c;
        }
        cout << b << endl;
    }
    return 0;
}
//4aca4fccbd345b7cd906ad59d0f016f61d0f9e2a0266a809d7ef5b3f66074bec
//���������������������ǵ����Լ����
//�����Լ������ʹ��շת�������
//����a > b > 0����ôa��b�����Լ������b��a % b�����Լ����Ȼ���b��a % b��Ϊ��һ�ֵ����롣
//����������̻�һֱ�ݼ���ֱ��a % b����0��ʱ��b��ֵ������Ҫ������Լ����
//���磺
//9��6�����Լ������6��9 % 6 = 3�����Լ����
//����6 % 3 == 0���������Լ��Ϊ3��
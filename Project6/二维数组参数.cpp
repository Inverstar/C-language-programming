#include <iostream>
using namespace std;
void PrintArray(int a[][5])
{
	for (int i = 0; i < 4; i++) //���������ֱ��ָ����С�ȽϺ�,sizeof(a)ʵ��Ϊָ��Ĵ�С:4
		for (int j = 0; j < 5; j++)
			cout << &a[i][j] << ' ' << a[i] + j << ' ' << *(a + i) + j << ' ' << &a[0][0] + 5 * i + j << ' ' << &(*(a + i))[j] << endl;
	//
}
//a[i][j]�ĵ�ַ: �����׵�ַ+i*N*sizeof(a[i][j])+j*sizeof(a[i][j])	NΪ��������
//�β������׵�ַ����ʵ�������׵�ַ
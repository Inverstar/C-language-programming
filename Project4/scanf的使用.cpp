#include<iostream>
using namespace std;
int main()
{
	int n = 0, m = 0;
	//printf("%d", scanf_s("%d%d", &n, &m));
	// 12 56	: 2
	// 40 a	: 1
	// a	40: 0
	//��ȡ���ݴ����ֹͣ

	//while (scanf_s("%d%d", &n, &m) != EOF) //�ƺ���Ҫ����������? ���, һ����������
		// == 2 Ҳ����ʹ, ������scanf��һ����
	//{
	//	printf("%d\n", n + m);
	//}
	//��ͣ�Ķ������������ٻس�, ֱ��Ctrl+Z�س�
	//�������
	while (cin >> n >> m) //Ctrl+Z ��^Z?
	{
		cout << n << m;
	}
	return 0;
}


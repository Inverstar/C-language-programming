#include<iostream>
using namespace std;
int main()
{
	FILE* stream;
	freopen_s(&stream, "����.txt", "r", stdin);
	freopen_s(&stream, "���.txt", "w", stdout);
	//���뽫�����ļ� ����.txt
	int n = 0, m = 0;
	while (cin >> n)
	{

		if (n > m)
			m = n;
	}
	cout << m << endl;
	fclose(stdin);//�ر��ļ� 
	fclose(stdout);//�ر��ļ�
	return 0;
}
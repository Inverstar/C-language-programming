#include<iostream>
using namespace std;
int main()
{
	int c1, c2;
	char c;
	cin >> c1 >> c2 >> c;
	if (c != '/' && c != '+' && c != '-' && c != '*')
		cout << "Invalid operator!" << endl; 
	else if (c2 == 0 && c == '/')
		cout << "Divided by zero!" << endl;
	else
	{
		switch (c)
		{
		case '+': cout << c1 + c2 << endl; break;
		case  '-': cout << c1 - c2 << endl; break;
		case '*':cout << c1 * c2 << endl; break;
		case '/':cout << c1 / c2 << endl; break;
		}
	}
	return 0;
}
//һ����򵥵ļ�������֧��+, -, *, / �������㡣���迼���������Ϊ��������������ݺ����������ᳬ��int��ʾ�ķ�Χ��
//6007c824dcbffe75cbbc2c75621e981e5c141af132441e20294762238910f895
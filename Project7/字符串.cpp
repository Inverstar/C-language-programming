#include <iostream>
#include <string>
using namespace std;
int a()
{
	string A = "C++";		//�ַ�������ռ���ڴ��ֽ��������ַ���+1,���������'\n'
	char a[] = "C++";		//�ַ������ȵ����ַ��� ����\0�ַ���һάchar�������һ���ַ���
	//string 32λ��28�ֽ�, 64λ��40�ֽ�
	cout << sizeof(A) << endl;			//28 40
	cout << sizeof(string) << endl;	//28 40
	cout << A.size() << endl;				//3	
	cout << A.length() << endl;			//3
	cout << sizeof("C++") << endl;	//4
	cout << sizeof(a) << endl;			//4
	cout << strlen(a) << endl;			//3
	cout << strlen("C++") << endl;	//3
	cout << sizeof("") << endl;			//1
	cout << sizeof('\n') << endl;			//1

	//�ڴ��Сδ���Ƕ��󳤶�

	char str[] = { 'a','b','c','\0','X' };
	string s = str;
	cout << sizeof(str) << ' ' << strlen(str) << endl;	//5 3
	return 1;
}
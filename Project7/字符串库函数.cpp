#include<iostream>
#include<cstring>
using namespace std;
//�ַ�����������'\0'�ж��ַ�����β
void PrintSmall(char s1[], char s2[])
{
	if (strcmp(s1, s2) <= 0) //int strcmp(char [] s1, char [] s2); //����0�����, ������s1>s2
		cout << s1;
	else
		cout << s2;
}
int m2()
{
	//�ַ�������
	char s1[30];
	char s2[40];
	char s3[100];
	strcpy_s(s1, "Hello");// strcpy(char [] new, char [] old) ��old���Ƶ�new��
	strcpy_s(s2, s1);
	cout << "1)" << s2 << endl;
	strcat_s(s1, ",world"); //strcat(char [] s1, char [] s2); ��s2�ӵ�s1����, �õ���s1, ����Խ��.
	cout << "2)" << s1 << endl;
	char s4[] = "abc";
	cout << "3)"; PrintSmall(s4, s2); cout << endl;
	char s5[] = "aaa";
	cout << "4)"; PrintSmall(s4, s5); cout << endl;
	int n = strlen(s2); //int strlen(char [] s); �ַ����鳤��.
	cout << "5)" << "," << strlen("abc") << endl;
	_strupr_s(s1); //strups(char[]) ���ַ���תΪ��д
	_strlwr_s(s2); //strlwr(char []) תΪСд.
	cout << "6)" << s1 << endl;
	return 0;
}
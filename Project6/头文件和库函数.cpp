#include <cmath>
#include <ctype.h>
#include <cctype>
using namespace std;
//�⺯��:	C/C++��׼�涨��, �������Դ��ĺ���
//ͷ�ļ�: C++�������ṩ���"ͷ�ļ�", �� iostream cmath string
int math()
{
	abs(-1);		//��������ֵ
	cos(5);		//��������
	fabs(-1.2);	//�������ֵ
	ceil(1.2);		//��С��x����С����
	sin(35);		//��������
	sqrt(2);		//ƽ����
	return 0;
}
int ctype()
{
	isdigit(1);			//�ж��Ƿ��������ַ�
	isalpha('a');		//�ж��Ƿ���һ����ĸ
	isalnum('��');		//�ж��Ƿ���һ����ĸ������
	islower('B');		//�ж�Сд��ĸ
	isupper('a');		//�жϴ�д��ĸ
	toupper('a');		//Сд���д
	tolower('B');	//��д��ĸ��Сд
	return 0;
}
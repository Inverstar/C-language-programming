#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
	char a = 0;
	int i = 0;
	float f = 0;
	double d = 0;
	scanf_s("%c\n%d\n%f\n%lf", &a,1,&i,&f,&d);
	printf("%c %d %.6f %.6f", a, i, f, d);

	return 0;

}

//����һ���ַ���һ��������һ�������ȸ�������һ��˫���ȸ�������Ȼ��˳���������
//����Ҫ��������֮����һ���ո�ָ������������ʱ����6λС����
//02848dcdc9596460048e96ebdacb461b312dc18905fa8314b4780a9b0ee784b3
#include <iostream>
using namespace std;
#define PI 3.14159
int main()
{
	double r,h;
	int n = 1;
	scanf_s("%lf %lf", &h,&r);
	double v = PI * r * r * h;
	n = 20000 / v + 1;
	if (20000 == v * n)
		printf("%d", n-1);
	printf("%d", n);
	return 0;
}
//����ڿ��ˣ�Ҫ��20��ˮ��ʣ�������һ����h���ף�����뾶Ϊr���׵�СԲͰ(h��r��������)���ʴ�������Ҫ�ȶ���Ͱˮ�Ż��ʡ�
//5d0b9e43d4e53f19d6704dfa0ac3580a3e36e19ef5db0540904852292167f21c
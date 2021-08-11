#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
/*C++�ı�׼��iomanip
��io������input-output��"manip"����manipulate�����ƣ���
����˼�壬��������������ƵĿ�*/
int main()
{
	float pi = 3.1415926;
	printf("%.2f", pi);  //���3.14;
	printf_s("%.3f", pi);  //���3.142
	cout << setiosflags(ios::fixed);  //��֤setprecision()������С������λ����
	cout << setprecision(2) << pi << endl;    //���3.14
	cout << pi << endl; //���3.14
	cout << fixed << setprecision(5) << pi << endl;

	double num = 12.1;
	cout << hex << uppercase << num << endl;//uppercase�������ʮ�����ƵĴ�д�ַ�
	cout << left << setw(6) << num << endl;//���ƽ����������
	cout << right << setw(6) << num << endl;//���ƽ���Ҷ������
	cout << setfill('c') << setw(6) << num << endl;//��������ַ���'c'

	float f = 2.0/3.0, f1 = 0.000000001, f2 = -9.9;
	cout << f << ' ' << f1 << ' ' << f2 << endl; //�������   
	cout.setf(ios::showpos); //ǿ��������ǰ��+��   
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout.unsetf(ios::showpos); //ȡ������ǰ��+��   
	cout.setf(ios::showpoint); //ǿ����ʾС��������Ч0   
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout.unsetf(ios::showpoint); //ȡ����ʾС��������Ч0   
	cout.setf(ios::scientific); //��ѧ������   
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout.unsetf(ios::scientific); //ȡ����ѧ������   
	cout.setf(ios::fixed); //���������ʾ   
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout.unsetf(ios::fixed); //ȡ�����������ʾ   
	cout.precision(18); //����Ϊ18������Ϊ6   
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout.precision(6); //���Ȼָ�Ϊ6   

	float f = 2.0 / 3.0, f1 = 0.000000001, f2 = -9.9;
	cout << f << ' ' << f1 << ' ' << f2 << endl; //�������   
	cout << setiosflags(ios::showpos); //ǿ��������ǰ��+��   
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout << resetiosflags(ios::showpos); //ȡ������ǰ��+��   
	cout << setiosflags(ios::showpoint); //ǿ����ʾС��������Ч0   
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout << resetiosflags(ios::showpoint); //ȡ����ʾС��������Ч0   
	cout << setiosflags(ios::scientific); //��ѧ������   
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout << resetiosflags(ios::scientific); //ȡ����ѧ������   
	cout << setiosflags(ios::fixed); //���������ʾ   
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout << resetiosflags(ios::fixed); //ȡ�����������ʾ   
	cout << setprecision(18); //����Ϊ18������Ϊ6   
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout << setprecision(6); //���Ȼָ�Ϊ6   

}
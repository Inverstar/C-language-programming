#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
/*C++的标准库iomanip
“io”代表input-output，"manip"代表manipulate（控制），
顾名思义，就是输入输出控制的库*/
int main()
{
	float pi = 3.1415926;
	printf("%.2f", pi);  //输出3.14;
	printf_s("%.3f", pi);  //输出3.142
	cout << setiosflags(ios::fixed);  //保证setprecision()是设置小数点后的位数。
	cout << setprecision(2) << pi << endl;    //输出3.14
	cout << pi << endl; //输出3.14
	cout << fixed << setprecision(5) << pi << endl;

	double num = 12.1;
	cout << hex << uppercase << num << endl;//uppercase输出的是十六进制的大写字符
	cout << left << setw(6) << num << endl;//控制结果左对齐输出
	cout << right << setw(6) << num << endl;//控制结果右对齐输出
	cout << setfill('c') << setw(6) << num << endl;//设置填充字符是'c'

	float f = 2.0/3.0, f1 = 0.000000001, f2 = -9.9;
	cout << f << ' ' << f1 << ' ' << f2 << endl; //正常输出   
	cout.setf(ios::showpos); //强制在正数前加+号   
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout.unsetf(ios::showpos); //取消正数前加+号   
	cout.setf(ios::showpoint); //强制显示小数点后的无效0   
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout.unsetf(ios::showpoint); //取消显示小数点后的无效0   
	cout.setf(ios::scientific); //科学记数法   
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout.unsetf(ios::scientific); //取消科学记数法   
	cout.setf(ios::fixed); //按点输出显示   
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout.unsetf(ios::fixed); //取消按点输出显示   
	cout.precision(18); //精度为18，正常为6   
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout.precision(6); //精度恢复为6   

	float f = 2.0 / 3.0, f1 = 0.000000001, f2 = -9.9;
	cout << f << ' ' << f1 << ' ' << f2 << endl; //正常输出   
	cout << setiosflags(ios::showpos); //强制在正数前加+号   
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout << resetiosflags(ios::showpos); //取消正数前加+号   
	cout << setiosflags(ios::showpoint); //强制显示小数点后的无效0   
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout << resetiosflags(ios::showpoint); //取消显示小数点后的无效0   
	cout << setiosflags(ios::scientific); //科学记数法   
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout << resetiosflags(ios::scientific); //取消科学记数法   
	cout << setiosflags(ios::fixed); //按点输出显示   
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout << resetiosflags(ios::fixed); //取消按点输出显示   
	cout << setprecision(18); //精度为18，正常为6   
	cout << f << ' ' << f1 << ' ' << f2 << endl;
	cout << setprecision(6); //精度恢复为6   

}
#include <iostream>
using namespace std;
void Func()
{
	int m = 3; //执行函数时定义
	m++;
	cout << m << endl;

	static int n = 4; //执行主函数时第一次调用定义
	cout << n << endl;
	++n;
}
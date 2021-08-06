#include <iostream>
using namespace std;
int main()
{
	unsigned int n1 = 0xffffFFFF;
	cout << n1 << endl;
	unsigned int n2 = n1 + 3; //0x100000002
	cout << n2 << endl;

	int a = (n1 == n2);
	cout << a << endl;

	bool k = n1 && n2;
	a = n1 & n2;

	int n = 9.12;	//自动强制转换
	double k = float(n); //C++支持
	
	k = (float)n;
	//C/C++/Java 支持
	cout << n << endl;
	return 0;
}
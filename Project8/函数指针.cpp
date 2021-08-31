#include<iostream>
using namespace std;
void CoutMIN(int a, int b)
{
	if (a > b)
		cout << b << endl;
	else
		cout << a << endl;
}
int 函数指针()
{
	void (*pf) (int,int);
	pf = CoutMIN;
	pf(4, 5);
	return 0;
}

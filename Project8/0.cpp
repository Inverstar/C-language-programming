#include<iostream>
using namespace std;
int zero()
{
	void* v;
	int k = 48;
	char c = ' ';
	c = 48;
	v = &c;
	v = &k;
	cout << k << endl;
	cout << c << endl;
	cout << ' ' << endl;
	cout << '0' << endl;
	cout << '\0' << endl;
	cout << '48' << endl;
	cout << '\48' << endl;
	return 0;
}
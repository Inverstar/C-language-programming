#include <iostream>
using namespace std;
void Swap(int a, int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	cout << "In Swap: a=" << a << " b=" << b << endl;
	//外面的a, b的值并未改变
}
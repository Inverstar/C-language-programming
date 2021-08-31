#include<iostream>
using namespace std;
void 颠倒数组(int* p, int size)
{
	for (int i = 0; i < size / 2; ++i)
	{
		int tmp = p[i];
		p[i] = p[size - 1 - i];
		p[size - 1 - i] = tmp;
	}
}
#include<iostream>
using namespace std;
int Void()
{
	char sz[200] = " ";
	memset(sz, 'a', 10);
	cout << sz << endl;

	int am1[10] = {};
	memset(am1, -1, 40);
	for(int i:am1)
		cout << i << endl;
	cout << am1[1] << endl;
	return 0;
}
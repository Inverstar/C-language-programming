﻿#include<iostream>
using namespace std;
int 数组()
{
	int a[20]; int* p;
	p = a;
	*p = 10;
	*(p + 1) = 20;
	for (int i = 0; i < 5; ++i)
		*(p + i) = i;
	++p;
	cout << p[0] << endl;
	p = a + 3;
	cout << *p << endl;
	return 0;
}
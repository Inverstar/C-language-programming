#include<iostream>
using namespace std;
int 字符指针()
{
	const char * c = "Please input your name : ";
	char const * s = "Please input your name : ";
	char p[] = "Please input your name : ";
	if (c == s)cout << c << endl;
	char* b = p;
	for (char k : p)
		cout << k << size(p) << " " << strlen(p) << endl;
	return 0;
}
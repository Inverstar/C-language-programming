#include<iostream>
using namespace std;
int Î»ÔËËã()
{
	int a = 1, b = 0;
	int c = 0b11111111;
	cout << (a&b) << endl;
	cout <<(c & 0x80)<<' '<<0x80<< endl;
	return 0;
}
#include<iostream>
#include <bitset>
using namespace std;
int 指针()
{
	int* p1,* p2;
	char* pc1, * pc2;
	int n = 4;
	p1 = (int*)100;
	p2 = (int*)200;
	cout << "1)" << p2 - p1 << endl;		//100/4=25
	pc1 = (char*)p1;
	pc2 = (char*)p2;
	cout << "2)" << (p2 + n) - p1 << endl;		//(200+4*4-100)/4=29
	int* p3 = p2 + n;
	cout << "4)" << p3 - p1 << endl;				//(216-100)/4 = 29
	cout << "5)" << (pc2-10)-pc1 << endl;		//190-100 = 90
	return 0;
}
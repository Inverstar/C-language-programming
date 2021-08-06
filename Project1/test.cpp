#include <iostream>
using namespace std;
int main()
{
	int a = 0x00FF;
	short n = 0xFFF4;//-12
	//1000 0000 0000 1100
	//800C
	//1111 1111 1111 0100
	//FFF4
	int a3 = 32768;//unsigned short 大意了, 只要是short就会变负
	short b3 = a3;
	cout << a3 <<'\n'<<b3<< endl;
	return 0;
}
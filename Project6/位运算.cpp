#include<iostream>
using namespace std;
//十进制输入输出都是原码, 但是其他进制都是补码.
int 位运算()
{
	int a = -1, b = 0;
	int c = 0b00000000111111110000000011111111;
	int d = 037777777777;// -1 11个数
	int e = 0xFFFFFFFF;// -1 8个数
	cout << oct << a << endl;
	cout << hex << a << endl;
	cout << hex << d << endl;
	cout << hex << e << endl;
	cout <<dec<< (e & d) << endl;
	cout << (a&b) << endl;
	cout << (21 & 18) << endl;
	cout <<(c & 0x80)<<' '<<0x80<< endl;
	// 通常用&来进行位清零和保留, 获取变量中的某一位.

	int n = 256;
	short n1 = 0x1010;
	cout <<hex<< n1 << endl;
	n1 &= 0xffffff00;
	n &= 0x80000000;
	cout << n << endl;

	// |运算将需要的位置1, 其余位不变
	n |= 0xff;

	//^相同为0, 不同为1. 用于位取反, 保留其他位不变
	n ^= 0xff;
	//低八位取反, 高位不变.

	//a^b=c, 则c^b=a和a^c=b 加密和解密
	//使用异或交换变量的值
	int k = 5, g = 6;
	a = a ^ b; //若a^b=c, 则现在a=c
	b = b ^ a; //b=b^c=a, 现在b=a
	a = a ^ b;// a=c^a=b, 现在a=b
	//非: 单目取反~
	cout << n << ' ' << ~n << ' ' << (n=~n) << endl;

	//左移右移都是乘2的n次, 右移向小取整.
	cout <<dec<< n << ' ' << (n << 1) << ' ' << (n >> 1) << endl;
	return 0;
}
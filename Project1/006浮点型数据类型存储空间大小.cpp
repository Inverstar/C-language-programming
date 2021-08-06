#include <iostream>
using namespace std;
int main()
{
	float a = 0;
	double b = 0;
	cout << sizeof(a) << ' ' << sizeof(b) << endl;

	return 0;
}
//分别定义float，double类型的变量各一个，并依次输出它们的存储空间大小（单位：字节）。
//5130bd56e1eda3416be67be78944cdab188d43fdf7ba34c28c470f19493a02af
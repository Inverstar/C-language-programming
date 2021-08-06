#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	short b = 0;
	cout << sizeof(a) << ' ' << sizeof(b) << endl;

	return 0;
}
//分别定义int，short类型的变量各一个，并依次输出它们的存储空间大小（单位：字节）。
//0f3ecef5a08de198d29d7c74803195400fee0ad2c90d397a08d40d0e47cac9ee
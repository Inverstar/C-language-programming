#include <iostream>
using namespace std;

void Double(int* p, int n)
{
	for (int i = 0; i < n; ++i)
		p[i] *= 2;
}


int main()
{
	int a[3][4] = { { 1,2,3,4},{5,6,7,8},
					{ 9,10,11,12 } };

	Double(
		a[1],6
		// 在此处补充你的代码
	);
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 4; ++j)
			cout << a[i][j] << ",";
		cout << endl;
	}

	return 0;
}

//	输出结果是： 1,2,3,4, 10,12,14,16, 18,20,11,12,
//	3ed6cbdc6005a7635b38a81a1da0a951f041c6e58c36c03d8929e4ccf97c474d
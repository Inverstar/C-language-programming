#include<iostream>
using namespace std;
int main()
{
	long long N;
	cin >> N;
	if (N == 1)cout << "End" <<endl;
	else 
	while (N > 1)
	{
		if (N % 2)
		{
			cout << N << "*3+1=" << N * 3 + 1 << endl;
			N = N * 3 + 1;
		}
		else 
		{ 
			cout << N << "/2=" << N / 2 << endl;
				N /= 2;
		}
		if (N == 1)
		{
			cout << "End" << endl;
			break;
		}
	}
	return 0;
}
//04c29927c0189a82a80ef50895d8b6a43b06c709260d871ab08eeee0aa0ce729
//所谓角谷猜想，是指对于任意一个正整数，如果是奇数，则乘3加1，如果是偶数，则除以2，
//得到的结果再按照上述规则重复处理，最终总能够得到1。
//如，假定初始整数为5，计算过程分别为16、8、4、2、1。 
//程序要求输入一个整数，将经过处理得到1的过程输出来。
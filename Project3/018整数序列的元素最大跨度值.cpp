#include<iostream>
using namespace std;
int main()
{
	int n, min, max;
	cin >> n >> min;
	max = min;
	for (int i = 0; i < n - 1; ++i)
	{
		int a;
		cin >> a;
		if (a < min)
			min = a;
		if (a > max)
			max = a;
	}
	cout << max - min << endl;
	return 0;
}
//给定一个长度为n的非负整数序列，请计算序列的最大跨度值（最大跨度值 = 最大值减去最小值）。 
//01fe9b4aae65a2346adaa2acd997dfb1f67e53bf4a26fee7df9b6860a74038ba
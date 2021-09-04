#include <iostream>
#include<algorithm>

using namespace std;
struct Rule1	//	按从小到大
{
	bool operator()(const int& a1, const int& a2)
		const
	{
		return a1 < a2;
	}
};
struct Rule2	//	按个位数从小到大
{
	bool operator()(const int& a1, const int& a2)
		const
	{
		return a1%10 < a2%10;
	}
};
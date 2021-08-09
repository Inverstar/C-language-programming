#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 10; ++i)
	{
		if (i % 2)
			continue;
		cout << i << ",";
	}
	return 0;
}

//break和continue一样都只对所在循环起作用.
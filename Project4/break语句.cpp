#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	while (true)
	{
		if (n > 100)
			break;
		++n;
	}
	cout << n;
	return 0;
}
//break只能跳出所在循环
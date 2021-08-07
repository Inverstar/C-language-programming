//迭代公式: xm = (xn + a/xn)/2
/*牛顿迭代法求输入数的平方根
1 使用一个随意的初始值 x1 = a/2 作为平方根
2 根据迭代公式求得x2, 然后继续求得xn
3 |xn-xn_1|<e
4 则xn即为所得*/

#include<iostream>
#include <iomanip>
using namespace std;
double EPS = 0.00001;
//2 EPS=0.1			1.41 6666666666667	
//2 EPS=0.01		1.41421 568627451
//2 EPS=0.001		1.41421356237469
//2 EPS=0.0001	1.41421356237469
//2 EPS=0.00001	1.41421356237469
int main()
{
	double a;
	cin >> a;
	if (a >= 0)
	{
		double x = a / 2, lastX = x + 1 + EPS; //确保至少进行一次迭代, 只要精度不够就继续.
		while (x - lastX > EPS || lastX - x > EPS)
		{
			lastX = x;
			x = (x + a / x) / 2;
		}
		cout << setprecision(16) <<x;
	}
	else
		cout << "It can't be nagitive. ";
	return 0;

	return 0;
}
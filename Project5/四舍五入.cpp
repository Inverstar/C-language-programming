//floor | 不大于自变量的最大整数 
//ceil | 不小于自变量的最大整数 
//round | 四舍五入到最邻近的整数 
#include <cstdio>      /* printf */
#include <cmath>       /* floor */
#include<iostream>
using namespace std;
int main()
{
	cout << (2.3) << '\t' << (3.8) << '\t' << (-2.3) << '\t' << (-3.8) << endl;
	cout << floor(2.3) << '\t' << floor(3.8) << '\t' << floor(-2.3) << '\t' << floor(-3.8) << endl;
	cout << round(2.3) << '\t' << round(3.8) << '\t' << round(-2.3) << '\t' << round(-3.8) << endl;
	cout << ceil(2.3) << '\t' << ceil(3.8) << '\t' << ceil(-2.3) << '\t' << ceil(-3.8) << endl;
	cout << trunc(2.3) << '\t' << trunc(3.8) << '\t' << trunc(-2.3) << '\t' << trunc(-3.8) << endl;

	return 0;
}
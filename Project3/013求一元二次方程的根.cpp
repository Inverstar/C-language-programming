#include<iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main()
{
	double a = 1, b = 0, c = 0;
	cin >> a >> b >> c;
	double b2 = 4 * a * c;
	if (b * b == b2)
		cout << fixed << setprecision(5) << "x1=x2=" << (sqrt(b * b - b2) -b) / (2 * a) << endl;
	else if (b * b > b2)
		cout << fixed << setprecision(5) << "x1=" << (sqrt(b * b - b2) -b) / (2 * a) << ";" << "x2=" << (-b - sqrt(b * b - 4 * a * c)) / (2 * a) << endl;
	else
	{
		double x = b / (-2 * a);
		if (x == -0)
			x = 0;
		double i = sqrt(b2 - b * b) / (2 * a);
		cout << fixed << setprecision(5) << "x1=" << x << "+" << i << "i" << ";" << "x2=" << x << "-" << i << "i" << endl;
	}
	return 0;
}
//利用公式
//x1 = (-b + sqrt(b*b-4*a*c))/(2*a)
//x2 = (-b - sqrt(b*b-4*a*c))/(2*a)
//求一元二次方程ax2+ bx + c =0的根，其中a不等于0。
//实部 = -b / (2*a), 虚部 = sqrt(4*a*c-b*b) / (2*a)
//0.25 3 9
//104064a19cb0c54653898f565d0ddfb37cf7b922aa793a36fe0f4279aa9c0ee6
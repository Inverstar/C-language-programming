//������ʽ: xm = (xn + a/xn)/2
/*ţ�ٵ���������������ƽ����
1 ʹ��һ������ĳ�ʼֵ x1 = a/2 ��Ϊƽ����
2 ���ݵ�����ʽ���x2, Ȼ��������xn
3 |xn-xn_1|<e
4 ��xn��Ϊ����*/

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
		double x = a / 2, lastX = x + 1 + EPS; //ȷ�����ٽ���һ�ε���, ֻҪ���Ȳ����ͼ���.
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
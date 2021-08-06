#include <iostream>
using namespace std;
#define PI 3.14159
int main()
{
	double r,h;
	int n = 1;
	scanf_s("%lf %lf", &h,&r);
	double v = PI * r * r * h;
	n = 20000 / v + 1;
	if (20000 == v * n)
		printf("%d", n-1);
	printf("%d", n);
	return 0;
}
//大象口渴了，要喝20升水解渴，现在有一个深h厘米，底面半径为r厘米的小圆桶(h和r都是整数)。问大象至少要喝多少桶水才会解渴。
//5d0b9e43d4e53f19d6704dfa0ac3580a3e36e19ef5db0540904852292167f21c
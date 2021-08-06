#include <iostream>
using namespace std;
#define PI 3.14
int main()
{
	double r;
	scanf("%lf", &r);
	double v = 4.0 / 3 * PI * r * r * r;
	printf("%.2f", v);
	return 0;
}
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
// 对于半径为r的球，其体积的计算公式为V=4/3*πr3，这里取π= 3.14。现给定r，求V。
//2679269fff3e35f0fab1d4ac2410208d54367c237bf670afb39a519666bc4e91
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
// ���ڰ뾶Ϊr����������ļ��㹫ʽΪV=4/3*��r3������ȡ��= 3.14���ָ���r����V��
//2679269fff3e35f0fab1d4ac2410208d54367c237bf670afb39a519666bc4e91
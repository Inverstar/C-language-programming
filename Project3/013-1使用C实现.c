#include<stdio.h>
#include<math.h>

double eps = 1e-7;
int main()
{
	double a, b, c, de, x1, x2;
	scanf("%lf%lf%lf", &a, &b, &c);
	de = b * b - 4 * a * c;
	if (de > 0)
	{
		x1 = (sqrt(de) - b) / (2 * a);
		x2 = (-sqrt(de) - b) / (2 * a);
		printf("x1=%.5lf;x2=%.5lf", x1, x2);
	}
	else if (de - 0 > -eps && de - 0 < eps)
	{
		if(b - 0 > -eps && b - 0 < eps)
			printf("x1=x2=%.5lf", 0);
		else
			printf("x1=x2=%.5lf", -b/(2*a));
	}
	else
	{
		double Re, Im;
		Re = -b / (2 * a);
		Im = sqrt(-de) / (2 * a);
		if (b - 0 > -eps && b - 0 < eps)
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi", 0, Im,0,Im);
		else
			printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi", Re, Im, Re, Im);
	}
	return 0;
}

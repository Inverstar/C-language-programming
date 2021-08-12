constexpr auto EPS = 0.001;
double Sqrt(double a)
{
	double x = a / 2, lastX = x + 1 + EPS;
	while (x - lastX > EPS || lastX - x > EPS)
	{
		lastX = x;
		x = (x + a / x) / 2;
	}
	return x;
}
double Distance(double x1, double y1, double x2, double y2)
{
	return Sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
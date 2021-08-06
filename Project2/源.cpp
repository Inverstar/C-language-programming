#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n; char c; float f;
	//scanf_s("%d%c%f", &n, &c,1, &f);
	//printf("%d %c %f", n, c, f);
	cout << 6 * 4 / 5 + (7 % 2) << endl;
	c = 'a' + 4;
	cout << c << "." << (int)c + 3 << endl;
   unsigned int x = 0xffffffff;
   unsigned int b = x + 2;
	int y = x;
	printf("%x,%d,%x,%d", y, y, b, b);
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int n, a = 0;
	cin >> n;
	while (n > 0)
	{
		if (n % 2 == 1)
			a++;
		n = n / 2;
	}
	cout << a << endl;
	return 0;
}
	//	7ace86accba7dcc02243b679708f1161477343ce14a873d083d4c53a8fc4ff48
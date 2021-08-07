#include<iostream>
using namespace std;
int main()
{
	int a = 0, n = 0, an = 0;
	cin >> a >> n;
	an = a;
	while (--n)
		an *= a;
	cout << an << endl;
	return 0;
}
//给出一个整数a和一个正整数n，求乘方an
//eca7e11b2bfe5649718a03ce710e44e41ce5354602ee693b889ae0b79c9348a3
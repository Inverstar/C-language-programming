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
//����һ������a��һ��������n����˷�an
//eca7e11b2bfe5649718a03ce710e44e41ce5354602ee693b889ae0b79c9348a3
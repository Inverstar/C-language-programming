#include <iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int main()
{
	char a[1001];
	cin >> a;
	char* p = a;
	int k = strlen(a);
	for (int l = 0;l<k;l++ )
	{
		if (a[l] >= 'a')
			a[l] = a[l]-' ';
	}
	int i = 0;
	while (k-i)
	{
		int j =0;
		char b = a[i];
		while (a[i] == b) 
		{
			i++;
			j++;
		}
		cout << "(" << b << "," << j << ")";
	}
	return 0;
}
	//	d00eea92067fc75a2fb9042e4d4ad5ebcf6ef3a67760640472db360076252d79
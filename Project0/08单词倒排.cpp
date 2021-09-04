#include <iostream>
#include<iomanip>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
	char a[101];
	int i = 0;
	gets_s(a);
	char* p = a;
	char* j = a;
	int k = strlen(a);
	string  s[100];
	while (k--)
	{
		if (*p == ' ')
		{
			*p = 0;
			s[i] = j;
			j = p + 1;
			i++;
		}
		p++;
	}
	s[i] = j;
	for (int n = i; n >= 0; n--)
		cout << s[n] << ' ';
	return 0;
}
	//	640b06f8df156555f8a4bddadad35780755979ac9f75ec887456fd0843ec8c2e
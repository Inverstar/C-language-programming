#include<iostream>
using namespace std;
int Cpy()
{
	
	char s[] = "12dahfaealds";
	char i[sizeof(s)];
	char j[sizeof(s)];
	char* k = i; char* z = j;
	void* MyCpy(void*, void*, int);
	MyCpy(k, s, sizeof(s));
	memcpy(z, s, sizeof(s));
	cout << s << endl;
	cout << k << endl;
	cout << z << endl;
	return 0;
}
void* MyCpy(void* dest, void* src, int n)
{

	char* p = (char*)dest;
	char* P = (char*)src;
	for (int i = 0; i < n; ++i)
		*(p + i) = *(P + i);
	return dest;
}
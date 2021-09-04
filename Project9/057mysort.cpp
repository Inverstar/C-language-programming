#include <iostream>
using namespace std;
struct A {
	int nouse1;
	int nouse2;
	int n;
};
// 在此处补充你的代码
void mysort(void* a, int n, int width, int(*f)(const void* e1, const void* e2))
{
	for (int i = n - 1; i >= 0; --i)
		for (int j = 0; j < i; ++j)
		{
			char* aj = (char*)a + j * width;
			char* aj1 = (char*)a + (j + 1) * width;
			if (f(aj, aj1) > 0)
			{
				for (int k = 0; k < width; k++)
				{
					char temp = aj[k];
					aj[k] = aj1[k];
					aj1[k] = temp;
				}
			}
		}
}
int MyCompare1(const void* e1, const void* e2)
{
	int* p1 = (int*)e1;
	int* p2 = (int*)e2;
	return *p1 - *p2;
}
int MyCompare2(const void* e1, const void* e2)
{
	int* p1 = (int*)e1;
	int* p2 = (int*)e2;
	if ((*p1 % 10) - (*p2 % 10))
		return (*p1 % 10) - (*p2 % 10);
	else
		return *p1 - *p2;
}
int MyCompare3(const void* e1, const void* e2)
{
	A* p1 = (A*)e1;
	A* p2 = (A*)e2;
	return p1->n - p2->n;
}
int a[20];
A b[20];
int main()
{
	int n;
	while (cin >> n) {
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			b[i].n = a[i];
		}
		mysort(a, n, sizeof(int), MyCompare1);
		for (int i = 0; i < n; ++i)
			cout << a[i] << ",";
		cout << endl;
		mysort(a, n, sizeof(int), MyCompare2);
		for (int i = 0; i < n; ++i)
			cout << a[i] << ",";
		cout << endl;
		mysort(b, n, sizeof(A), MyCompare3);
		for (int i = 0; i < n; ++i)
			cout << b[i].n << ",";
		cout << endl;
	}
	return 0;
}

//	2ac2a3c9bd44dcb780ae19f23ad0e96c6528f2b6c48ecdb36bd3680c6a301381
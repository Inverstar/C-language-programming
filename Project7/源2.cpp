#include <iostream>
#include <cstdio>
using namespace std;
char a[100] = {};
int m3()
{
	int i = 0;
	/*scanf_s("%s", a);
	printf("%s", a);*/
	cin >> a;
	//i = sizeof(a); //数组大小
	i = strlen(a); //字符串实际长度无\0
	a[i] = '1';
	cout << a <<"["<<i<<"] "<<endl;
	
	return 0;
}
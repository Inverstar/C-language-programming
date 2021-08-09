#include<iostream>
using namespace std;
int main()
{
	int n = 0, m = 0;
	
	//while (scanf_s("%d", &n )!= EOF) //²»ÐÐ
	//while (scanf_s("%d", &n)== 1)
	while (cin>>n)
	{
		
		if (n > m)
			m = n;
	}
	cout  <<m<< endl;
	return 0;
}
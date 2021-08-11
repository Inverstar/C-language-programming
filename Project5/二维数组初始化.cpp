//将数组适当扩大, 避免越界错误
//初始值表可以初始化, 但不能赋值
#include<iostream>
using namespace std;
constexpr auto N = 100000;
char isPrime[N + 10];
int main()
{
	int a[3] [3]= { 0,1,2,3,4,5,6,7,8};// 写出全部元素
	int b[3][3] = { {}, {0,1,5},{2,3,4} };// 可利用空括号赋0
	int c[][3] = { 0,1,2,3,4,5,1};

	for (int j = -0; j <= 2; j++)
	{
		for(int i=0;i<=2;i++)
			cout << a[j][i]<<b[j][i] << c[j][i]<<endl;
		cout << a[j] - b[j] << ' ' << b[j] - c[j] << ' ' << a[j] - c[j]<<endl;
	}

	
	return 0;
}
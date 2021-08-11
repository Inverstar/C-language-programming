#include<iostream>
using namespace std;
constexpr auto N = 100000;
char isPrime[N + 10];
int main()
{
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int b[10] = { 0,1,2,3,4 };
	int c[] = { 0,1,2,3,4 };
	for (int i = -3; i <= 30; i++)
	{
		cout << i << ' ' << a[i-19] << ' ' << b[i-7] << ' ' << c[i] << endl;
		//每个数组的开始和结尾都被保护了,所以当一个数组结束后,需要隔两个地址开始下一个数组
		//-858993460
		//c[5]=c[6]=b[10]=b[11]=a[10]
		//a[11]= 不定
	}

	cout << a-b <<' '<< b-c <<' '<< a-c;
	return 0;
}
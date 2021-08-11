// 将2到n中的数都列出来, 从2开始划掉2的倍数, 下次从剩下的下一个数开始, 划掉它的倍数.最后剩下的都是素数了
#include<iostream>
using namespace std;
constexpr auto N = 100000;
char isPrime[N + 10] ;
int main()
{
	memset(isPrime, 1, sizeof(isPrime));
	//memset函数在做初始化的时候是以字节为单位的
	//for (int i = 2; i <= N; ++i)
	//	isPrime[i] = 1;
	for (int i = 2; i <= N; ++i)
	{
		if (isPrime[i])
			for (int j = 2 * i; j <= N; j += i)
				isPrime[j] = 0;
	}
	for (int i = 2; i <= N; ++i)
		if (isPrime[i])
			cout << i << endl;
	return 0;
}
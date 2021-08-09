#include<iostream>
using namespace std;
int main()
{
    long N=0;
    cin >> N;
    if (N < 0)
    {
        N = -N;
        cout << '-';
    }
    long 倒序(long);
    倒序(N);
   
	return 0;
}
long 倒序(long N)
{
    while (N % 10 == 0)
    {
        N /= 10;
    }
    for (int j = 0; N > 0; N /= 10)
    {
      
        cout << N % 10;
        j++;

    }
    return 0;
}
//45a1b7c918f9fc2beb5e7c3f3cc5582eeb75be48576b129dc4d80ab29e7ad833

// 给定一个整数，请将该数各个位上数字反转得到一个新数。
// 新数也应满足整数的常见形式，即除非给定的原数为零，否则反转后得到的新数的最高位数字不应为零（参见样例2）。
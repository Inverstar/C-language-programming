#include<iostream>
using namespace std;
int a[1000100];
int main()
{
    int n, k, i;
    a[1] = 1;
    a[2] = 2;
    for (i = 3; i <= 1000000; i++)
        a[i] = (2 * a[i - 1] + a[i - 2]) % 32767;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> k;
        cout << a[k] << endl;
    }
    return 0;
}


//9710d0550e24948dc83ccc040dbf2d03a09d1ee1a29728d52b30be5a3e6dfd11
//Pell数列a1, a2, a3, ...的定义是这样的，a1 = 1, a2 = 2, ... , an = 2 * an − 1 + an - 2 (n > 2)。
//给出一个正整数k，要求Pell数列的第k项模上32767是多少。

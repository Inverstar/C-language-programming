#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (n == m)
        cout << n << endl;
    else if (n % m == 0 || m % n == 0)
    {
        if (n < m)
            cout << n << endl;
        else
            cout << m << endl;
    }
    else
    {
        int a, b;
        if (n > m)
        {
            a = n; b = m;
        }
        else
        {
            a = m; b = n;
        }
        while (a % b != 0)
        {
            int c = a % b;
            a = b;
            b = c;
        }
        cout << b << endl;
    }
    return 0;
}
//4aca4fccbd345b7cd906ad59d0f016f61d0f9e2a0266a809d7ef5b3f66074bec
//给定两个正整数，求它们的最大公约数。
//求最大公约数可以使用辗转相除法：
//假设a > b > 0，那么a和b的最大公约数等于b和a % b的最大公约数，然后把b和a % b作为新一轮的输入。
//由于这个过程会一直递减，直到a % b等于0的时候，b的值就是所要求的最大公约数。
//比如：
//9和6的最大公约数等于6和9 % 6 = 3的最大公约数。
//由于6 % 3 == 0，所以最大公约数为3。
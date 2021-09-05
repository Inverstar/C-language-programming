#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int a[1000001] = {};
int main()
{
    int n, m;
    int x;
    int left, right, mid;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> m;
    while (m--)
    {
        cin >> x;
        left = 1;
        right = n;

        while (left < right - 1)
        {
            mid = (left + right) / 2;
            if (a[mid] > x)
                right = mid;
            else
                left = mid;
        }
        if (fabs(a[left] - x) <= fabs(a[right] - x))
            cout << a[left] << endl;
        else
            cout << a[right] << endl;
    }
    return 0;
}
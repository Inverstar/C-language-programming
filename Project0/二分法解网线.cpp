#include<iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int a[10010];
int b[10010];
int n, m;
int find(int x)
{
    int h = 0;
    for (int i = 1; i <= n; i++)
    {
        h = h + a[i] / x;
    }
    return h;
}
int main()
{
    cin >> n >> m;
    b[1] = 0;
    for (int i = 1; i <= n; i++)
    {
        double w;
        cin >> w;
        a[i] = w * 100;
        b[2] = max(b[2], a[i]);
    }
    int l = 0, r = b[2];
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (mid == 0)
        {
            printf("0.00");
            return 0;
        }
        if (find(mid) < m)
        {
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << fixed << setprecision(2) << (l - 1.0) / 100.0 << endl;
}
//需要的等长网线数量C已知，要求尽可能长，那么我们可以列举所有网线可能的长度len（0，max], 
//计算出每种长度下网线的数量，时间复杂度为 O(max* n)。为了加快计算，我们在列举网线长度时，采用二分法，
//假如在 len下算出的网线数量c < C, 那么就取一个更小的len尝试，反之取更大的len尝试，最优解L 满足 c(L) >= C, c(L + 1) < C.
//百练1064网线主管
//FILE* f;
//freopen_s(&f, "in(15).txt", "r", stdin);
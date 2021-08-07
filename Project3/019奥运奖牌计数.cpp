#include<iostream>
using namespace std;
int main()
{
	int n = 0, j = 0, y = 0, t = 0;
	cin >> n;
	for (; n > 0; n--)
	{
		int jn, yn, tn;
		cin >> jn >> yn >> tn;
		j += jn; y += yn; t += tn;
	}
	cout << j <<' '<< y <<' '<< t <<' '<< j+y+t;
	return 0;
}
//奥运会A国的运动员参与了n天的决赛项目(1≤n≤17)。现在要统计一下A国所获得的金、银、铜牌数目及总奖牌数。
//92bfda51195ae2f6ce45405c1c4c61456389f8783e3a9424ef6692c17051f4cd
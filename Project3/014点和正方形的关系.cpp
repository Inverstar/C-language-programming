#include<iostream>
using namespace std;
int main()
{
	int x=0,y=0;
	cin >> x >> y;
	if (-1<=x&&x<=1&&y<=1&&y>=-1)
	{
		cout << "yes" << endl;
	}
	else
		cout << "no" << endl;
	return 0;
}
// 有一个正方形，四个角的坐标（x,y)分别是（1，-1），（1，1），（-1，-1），（-1，1），x是横轴，y是纵轴。
// 判断一个给定的点是否在这个正方形内（包括正方形边界）。
//e19a7eb47b8c21961608f99fe8ea6259d6b0b917f14a29f236525a4889558c58
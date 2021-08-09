#include<iostream>
using namespace std;
int main()
{
	int k ,i=0, h=0;
	int 收缩压 = 0, 舒张压 = 0;
	cin >> k;
	while (k--)
	{
		cin >> 收缩压 >> 舒张压;
		if (90 <= 收缩压 && 收缩压 <= 140 && 60 <= 舒张压 && 舒张压 <= 90)
		{
			i++;
			if (k == 0 && i > h)h = i; //防止最后一次满足条件后的i来不及赋给h
		}
		else
		{
			if (i > h)h = i;
			i = 0;
		}
	}
	cout << h << endl;
	return 0;
}
//6974775aae553720482b2ff26f9f242ac3ad9de527a3103ff8893089dd775d2a
//监护室每小时测量一次病人的血压，若收缩压在90 - 140之间并且舒张压在60 - 90之间（包含端点值）则称之为正常
//现给出某病人若干次测量的血压值，计算病人保持正常血压的最长小时数。

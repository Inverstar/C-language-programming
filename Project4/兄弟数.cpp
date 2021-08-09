#include<iostream>
using namespace std;
int main()
{
	int n = 0, m = 0;
	cin >> n >> m;
	int a = m + 1, b = m + 1;	//a, b记录已找到的最佳兄弟数, a<b
	for (int i = n; i < m; ++i)	//取弟数, 共m-n种取法
	{
		if (i > (a + b) / 2 + 1)
		{
			//cout << "i > (a + b) / 2 + 1" << '\n' << a <<' '<< b << endl; 
			break;
		}
		// 跳出外循环
		for (int j = i + 1; j <= m; ++j)	//取兄数
		{
			if (i + j > a + b)
			{
				//cout << "i + j > a + b" << '\n'<<a <<' '<< b << endl; 
				break;
			}
			//跳出内循环
			if (i*j%(i+j)==0)	//发现兄弟数
			{
				if (i + j < a + b)//发现和更小的兄弟数
				{
					a = i;
					b = j;
					cout << a << ' ' << b << endl;
				}//更新兄弟数
				else if (i + j == a + b && i < a)//发现和相同, 但弟数更小的兄弟数
				{
					a = i;
					b = j;
					cout << a << ' ' << b << endl;
				}
			}
		}
	}
	if (a == m + 1)
		cout << "No solution." << endl;
	else
		cout << a << " " << b << endl;
	return 0;
}
//break只能跳出所在循环
//两个不同的正整数n<m;
//m+n是m*n的因子
//寻找一对兄弟数, 找出最小的一对, 并且弟数最小
//通过枚举不同的数来验证, 记录最佳兄弟数.

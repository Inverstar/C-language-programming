#include <iostream>
using namespace std;
int an(int a, int n)
{
	int an = 0;
	n -= 1;
	an = (a >> n) & 1;					//将a移动n位, 再将移动后的a与1进行与运算得到结果
	//an = (a & (1 << n) )>> n;		//将1移动n位同a进行与运算, 运算后再将结果移动n位到第一位
	return an;
}
int ai(int a)
{
	//int an(int, int);
	for (int i = 32; i > 0; i--)
	{
		cout << an(a, i);
		if (i % 4==0 )cout << ' ';
	}
	cout << endl;
	return a;
}
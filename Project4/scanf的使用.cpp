#include<iostream>
using namespace std;
int main()
{
	int n = 0, m = 0;
	//printf("%d", scanf_s("%d%d", &n, &m));
	// 12 56	: 2
	// 40 a	: 1
	// a	40: 0
	//读取数据错误就停止

	//while (scanf_s("%d%d", &n, &m) != EOF) //似乎需要两个才有用? 奇怪, 一个不起作用
		// == 2 也不好使, 估计是scanf不一样吧
	//{
	//	printf("%d\n", n + m);
	//}
	//不停的读入两个整数再回车, 直到Ctrl+Z回车
	//程序结束
	while (cin >> n >> m) //Ctrl+Z 是^Z?
	{
		cout << n << m;
	}
	return 0;
}


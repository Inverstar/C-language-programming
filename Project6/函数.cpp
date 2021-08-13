#include<iostream>
using namespace std;
//函数 定义 调用 声明
int main()
{
	int an(int, int);
	int ai(int );
	ai(~123);
	ai(123);
	ai(-123);
	cout<<'\n'<<an(-1, 1)<<endl;
	return 0;

	int 位运算();
	位运算();
	return 0;

	int Fib(int);
	cout << Fib(23);
	return 0;

	int Factorial(int);
	cout<<Factorial(5);
	return 0;

	void PrintArray(int[][5]);
	int a3[4][5] = { 4,2,1,3,4,5,4,4,3,2 };
	cout << sizeof(a3) << endl;
	PrintArray(a3);
	return 0;

	int a1[4] = { 4,15,6,9 };
	void SetToZero(int a[], int length);//数组作为参数, 实参传入
	SetToZero(a1, sizeof(a1) / sizeof(int));
	for (int i = 0; i < 4; ++i)
		cout << a1[i] << ',';
	return 0;

	//int a1[4] = { 4,15,6,9 };
	int a2[] = { 3,18,55,30,42 };
	int FindMax(int[], int);
	cout << FindMax(a1, sizeof(a1) / sizeof(int)) << endl;
	cout << FindMax(a2, sizeof(a2) / sizeof(int)) << endl;
	return 1;

	void Swap(int, int);
	int a = 4, b = 5;
	Swap(a, b);
	cout << a << ' ' << b << endl;
	return 2;

	int Max(int, int);
	int n = Max(4, 6);
	cout << n << ',' << Max(20, n) << endl;

	bool IsPrime(unsigned int);
	cout << IsPrime(2) << ',' << IsPrime(4) << ',' << IsPrime(5);
	

	double Distance(double, double, double, double);
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	cout << Distance(x1, y1, x2, y2) << endl;
	cout << Distance(x1, y1, x3, y3) << endl;
	cout << Distance(x3, y3, x2, y2) << endl;

	return 3;
}
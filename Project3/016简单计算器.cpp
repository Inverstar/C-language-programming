#include<iostream>
using namespace std;
int main()
{
	int c1, c2;
	char c;
	cin >> c1 >> c2 >> c;
	if (c != '/' && c != '+' && c != '-' && c != '*')
		cout << "Invalid operator!" << endl; 
	else if (c2 == 0 && c == '/')
		cout << "Divided by zero!" << endl;
	else
	{
		switch (c)
		{
		case '+': cout << c1 + c2 << endl; break;
		case  '-': cout << c1 - c2 << endl; break;
		case '*':cout << c1 * c2 << endl; break;
		case '/':cout << c1 / c2 << endl; break;
		}
	}
	return 0;
}
//一个最简单的计算器，支持+, -, *, / 四种运算。仅需考虑输入输出为整数的情况，数据和运算结果不会超过int表示的范围。
//6007c824dcbffe75cbbc2c75621e981e5c141af132441e20294762238910f895
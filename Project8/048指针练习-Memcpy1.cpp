﻿#include <iostream>
using namespace std;
void Memcpy(char* src, char* dest, int n)
{
	for(int i = 0;i<n;i++)
	dest[i] = src[i];
}
int Strlen(char* s)
{
	int i;
	for (i = 0; s[i]; ++i);
	return i;
}
int main()
{
	int a;
	char s1[30];
	char s2[30];
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> a;
		int b = 99999999;
		Memcpy((char*)&a, (char*)&b, sizeof(int));
		cout << b << endl;
	}
	for (int i = 0; i < t; ++i) {
		cin >> s1;
		Memcpy(s1, s2, Strlen(s1) + 1);
		cout << s2 << endl;
	}
	return 0;
}
//	e68b56cd16acfb05282a36c6b5e3f8283f8d9bb36aef2b6b5ab33114c79d1ea1
//输入
	//第一行是整数t
	//接下来是t个整数
	//再接下来是t个不带空格的字符串，长度不超过20
//输出
	//按原样输出t个整数和t个字符串
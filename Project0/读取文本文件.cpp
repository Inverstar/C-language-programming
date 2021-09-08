#include<iostream>
#include<cstdio>
using namespace std;
void Fgets()
{
	char str[100];
	FILE* f;
	fopen_s(&f,"s.txt", "rb");
	while (fgets(str, 20, f))
		cout << str;
	fclose(f);
}
//锘?
//ANSI
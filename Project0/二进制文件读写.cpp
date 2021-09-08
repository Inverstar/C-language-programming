#include<iostream>
#include<cstdio>
using namespace std;
void 二进制文件()
{
	FILE* f;
	fopen_s(&f, "s.dat", "wb");
	int x, y;
	cin >> x ;
	fwrite(&x, 4, 1, f);
	fclose(f);
	cin >> y;
	fopen_s(&f, "s.dat", "rb");
	fread(&y, 4, 1, f);
	fclose(f);
	cout << y << endl;
}
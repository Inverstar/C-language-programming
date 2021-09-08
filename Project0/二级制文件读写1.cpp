#include<iostream>
#include<cstdio>
using namespace std;

struct Student
{
	char name[20];
	int score;
};
void 二进制文件1()
{
	Student s;
	FILE* f;
	fopen_s(&f, "s.dat", "wb");
	while (cin >> s.name >> s.score)
		fwrite(&s, sizeof(s), 1, f);
	fclose(f);

	fopen_s(&f, "s.dat", "rb");
	while (fread(&s, sizeof(s), 1, f) == 1)
		cout << s.name << ' ' << s.score;
	fclose(f);
}

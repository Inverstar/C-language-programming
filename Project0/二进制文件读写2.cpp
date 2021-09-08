#include<iostream>
#include<cstdio>
using namespace std;

struct Student
{
	char name[20];
	int score;
};
void 二进制文件2()
{
	Student s;
	FILE* f;
	fopen_s(&f, "s.dat", "r+b");
	if (!f) cout << "error" << endl; 
	fseek(f, 2 * sizeof(s), SEEK_SET);
	fwrite("Mike", 1, 5, f);
	fseek(f, 0, SEEK_SET);
	while (fread(&s, sizeof(s), 1, f) == 1)
		cout << s.name << ' ' << s.score << endl;
	fclose(f);

}
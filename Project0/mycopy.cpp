#include<iostream>
#include<cstdio>
using namespace std;

int main(int argc, char * argv[])
{
	if (argc != 3)
	{
		cout << "File name missing!" << endl;
		return 0;
	}
	FILE* fi,*fo;
	fopen_s(&fi, argv[1], "rb");
	if (!fi) cout << "Source file open error" << endl;
	fopen_s(&fo, argv[2], "wb");
	if (!fo)cout << "New file open error" << endl;
	
	char buf[4096] = {};
	int n = 0;
	while (n = fread(buf, 1, 4096, fi))
		fwrite(buf, 1, n, fo);

	fclose(fi);	fclose(fo);
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	FILE* stream;
	freopen_s(&stream, "输入.txt", "r", stdin);
	freopen_s(&stream, "输出.txt", "w", stdout);
	//输入将来自文件 输入.txt
	int n = 0, m = 0;
	while (cin >> n)
	{

		if (n > m)
			m = n;
	}
	cout << m << endl;
	fclose(stdin);//关闭文件 
	fclose(stdout);//关闭文件
	return 0;
}
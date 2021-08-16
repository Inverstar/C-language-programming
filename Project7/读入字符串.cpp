#include<iostream>
#include<cstring>
using namespace std;
string m1()
{
	string s = "\0";
	char line[100];
	//cin.getline(line, sizeof(line));	//最多读取99个.
	while (gets_s(line) != NULL) //没有大小限制, 可能导致越界.
	{
		printf("%s\n", line);
	}
	//cin.getline(line, 10);
	cout << line << endl;
	cin >> s;
	cout << s << endl;
	return s;
}
#include<iostream>
#include<cstring>
using namespace std;
string m1()
{
	string s = "\0";
	char line[100];
	//cin.getline(line, sizeof(line));	//����ȡ99��.
	while (gets_s(line) != NULL) //û�д�С����, ���ܵ���Խ��.
	{
		printf("%s\n", line);
	}
	//cin.getline(line, 10);
	cout << line << endl;
	cin >> s;
	cout << s << endl;
	return s;
}
#include <iostream>
#include <cstring>
using namespace std;

int T040()
{
	char c[256] = {};
	cin.getline(c, sizeof(c));
	int i = 0, d = 0;
	while (c[i])
	{
		if (isdigit(c[i++]))
			d++;
	}
	cout << d << endl;
	return 0;
}
//9629f80549b4e1efdb458923c1d3d48c3e08581c9625375750ad63399190de66
//����һ���ַ���ͳ�Ƴ����������ַ��ĸ���
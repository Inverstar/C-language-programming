#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int T044()
{
	char q[81] = {};
	gets_s(q);
	for (char a : q)
	{
		if (a == '\0')break;
		if (isalpha(a))
			if (a != 'z' && a != 'Z')
				a += 1;
			else a = a - 25;
		cout << a;
	}

	return 0;
}

//c35ffc036674ac2994f2f63334a1611040e51c042b60232219edb7c7490c9149
//对给定的一个字符串，把其中从a-y，A-Y的字母用其后继字母替代，把z和Z用a和A替代，其他非字母字符不变，则可得到一个简单的加密字符串
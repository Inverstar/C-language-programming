#include <iostream>
#include <cstring>
using namespace std;

int T041()
{
	char c[100001] = {};
	int j = 0, k = 0;
	gets_s(c);
	k = strlen(c);
	for (int i = 0; i <= k; i++)
	{
		if (c[j] == c[i]&&j!=i)
		{
			j++;
			i = -1;
		}
	}
	if (j == k)cout << "no" << endl;
	else cout<<c[j] << endl;
	return 0;
}
//df1981a266b789b48390941e19af0e8132232549dc7173e7ea0555f9cad90f51
//����һ��ֻ����Сд��ĸ���ַ����������ҵ���һ��������һ�ε��ַ������û�У����no
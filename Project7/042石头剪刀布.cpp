#include <iostream>
#include <cstring>
using namespace std;
constexpr auto N = 101;
int T042()
{
	char c[N] = {};
	int n = 0;
	cin >> n;
	while (n--)
	{
		string a, b;
		cin >> a >> b;
		if (a == b)
			cout << "Tie" << endl;
		else if (a == "Rock")
		{
			if (b == "Scissors")cout << "Player1" << endl;
			else cout << "Player2" << endl;
		}
		else if (a == "Scissors")
		{
			if (b == "Rock")cout << "Player2" << endl;
			else cout << "Player1" << endl;
		}
		else
		{
			if(b=="Rock")cout << "Player1" << endl;
			else cout << "Player2" << endl;
		}
	}
	return 0;
}
//51da0a01f683913130ee0507fe0227d201b6fbe9b29b11e2cdb637ed7886d84d
/*ʯͷ���Ӳ�����һ�ֲ�ȭ��Ϸ�������硣�����淨��ƴ��������غ��淨��ƴ�����ģ�
ʹ��ʯͷ���Ӳ�������ϵ���Ϸͬʱ���ڡ����⡱�롰�������������ԣ�������������ϲ���� 

��Ϸ����ʯͷ�����������ʯͷ������������ 

���ڣ���Ҫ��дһ���������ж�ʯͷ���Ӳ���Ϸ�Ľ��*/
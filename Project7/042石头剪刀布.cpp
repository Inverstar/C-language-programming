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
/*石头剪子布，是一种猜拳游戏风靡世界。单次玩法比拼运气，多回合玩法比拼心理博弈，
使得石头剪子布这个古老的游戏同时用于“意外”与“技术”两种特性，深受世界人民喜爱。 

游戏规则：石头打剪刀，布包石头，剪刀剪布。 

现在，需要你写一个程序来判断石头剪子布游戏的结果*/
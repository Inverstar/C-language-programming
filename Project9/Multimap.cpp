#include <iostream>
#include <map>
using namespace std;
struct StudentInfo
{
	int id; char name[20];
};
struct Student
{
	int score; StudentInfo info;
};
typedef multimap<int, StudentInfo> Map;
void Multimap()
{
	Map mp;
	Student st;
	char cmd[20];
	while (cin >> cmd)
	{
		if (cmd[0] == 'A')	//A 插入名字 id 分数
		{
			cin >> st.info.name >> st.info.id >> st.score;
			mp.insert(make_pair(st.score, st.info));
		}
		else if (cmd[0] == 'Q')	//Q 查询 低于分数下的
		{
			int score;
			cin >> score;
			Map::iterator p = mp.lower_bound(score);
			if (p != mp.begin())
			{
				--p;
				score = (*p).first;
				Map::iterator x = p;
				int xid = p->second.id;
				for (; p != mp.begin() && p->first == score; --p)
				{
					if (p->second.id > xid)
					{
						x = p; xid = p->second.id;
					}
				}
				if (p->first == score)
				{
					if (p->second.id > xid)
					{
						x = p; xid = p->second.id;
					}
				}
				cout << x->second.name << " "
					<< x->second.id << " "
					<< x->first << endl;
			}
			else cout << "Nobody" << endl;
		}
	}
}
#include <iostream>
#include <map>
#include<string>
#include <set>
using namespace std;
struct word
{
	int times;
	string wd;
};
struct Rule
{
	bool operator()(const word& w1, const word& w2)
		const 
		{
			if (w1.times != w2.times)
				return w1.times > w2.times;
			else return w1.wd < w2.wd;
		}
};
void 单词()
{
	string s; set<word, Rule>st; map<string, int> mp;
	while (cin >> s)
		++mp[s];
	for (auto i = mp.begin(); i != mp.end(); ++i)
	{
		word tmp; tmp.wd = i->first;
		tmp.times = i->second;
		st.insert(tmp);
	}
	for (auto i = st.begin(); i != st.end(); ++i)
		cout << i->wd << " " << i->times << endl;
}
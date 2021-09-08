#include <iostream>
#include <map>
//#include<string>
using namespace std;

struct Student
{
	string name;
	int score;
};

Student s[5] = { "j",99,"t",74 };
typedef map<string, int> mp;

void Map()
{
	mp k;
	k.insert(make_pair(s[0].name,s[1].score));
	cout << k["j"] << endl;
	k["j"] = 1; 
	k["i"] = 2;
	cout << k["j"] << endl;
	cout << k["h"] << endl;
	for (auto it = k.begin(); it != k.end(); ++it)
		cout << it->first << " " << it->second << endl;
	Student t;
	t.name = "afd"; t.score = 12;
	pair<mp::iterator, bool>p=k.insert(make_pair(t.name, t.score));
	if (p.second)cout << p.first->first << endl;
	auto q = k.find("d");
	if(q != k.end())
		cout << q->first << endl;
}

//
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

struct student
{
	char name[20];
	int a;
};
struct RuleN
{
	bool operator()(const student a1, const student a2)
		const
	{
		if (strcmp(a1.name, a2.name) < 0)
			return true;
		return false;
	}
};
struct RuleA
{
	bool operator()(const student a1, const student a2)
		const
	{
		return a1.a > a2.a;
	}
};

int main()
{
	int i,n = 0;
	cin >> n;
	student s[20] = {};
	for (i = 0; i < n; ++i)
	{
		cin >> s[i].name >> s[i].a;
	}
	sort(s, s + n, RuleN());
	sort(s, s + n, RuleA());
	
	for (i = 0; i < n; ++i)
		cout << s[i].name << " " << s[i].a << endl;
}


	//	5672c9d1c25fa9212cf84d04ea59d23ce086a5605915d3c2f383a89f1ae36c95
	//	给出班里某门课程的成绩单，请你按成绩从高到低对成绩单排序输出，如果有相同分数则名字字典序小的在前。
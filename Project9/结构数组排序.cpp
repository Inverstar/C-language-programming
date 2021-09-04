#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
struct student
{
	char name[20];
	int id;
	double gpa;
};
student s[] = { {"jack",12,3.4}, {"yack",112,3.5} , {"cack",1122,3.6} , {"dack",11122,3.7} , {"qack",111222,3.8} };
struct RuleName	//	姓名按从小到大
{
	bool operator()(const student& a1, const student& a2)
		const
	{
		if (_stricmp(a1.name, a2.name) < 0)
			return true;
		return false;
	}
};
struct RuleID	//	id按从小到大
{
	bool operator()(const student& a1, const student& a2)
		const
	{
		return a1.id < a2.id;
	}
};
struct RuleGPA	//	gpa按从大到小
{
	bool operator()(const student& a1, const student& a2)
		const
	{
		return a1.gpa > a2.gpa;
	}
};
void PrintStudent(student s[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << "(" << s[i].name << "," << s[i].id << "," << s[i].gpa << ")"<<"    ";
	cout << endl;
}
int Student()
{
	int n = sizeof(s) / sizeof(student);
	sort(s, s + n, RuleID());
	PrintStudent(s, n);

	sort(s, s + n, RuleName());
	PrintStudent(s, n);

	sort(s, s + n, RuleGPA());
	PrintStudent(s, n);

	return 0;
}
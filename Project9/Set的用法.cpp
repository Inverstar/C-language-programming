#include <iostream>
#include <set>
using namespace std;
void Set()
{
	set<int> s;
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i : a)
		s.insert(i);
	cout << s.size() << endl;
	set<int>::iterator j;
	for (int i : s)
		cout << i << endl;
	pair<set<int>::iterator, bool> r = s.insert(11);
	//struct { set<int>::iterator F; bool S; };
	cout << *r.first << endl;
	cout << r.second << endl;
	if (r.second)
		cout << *r.first << "inserted" << endl;
	else cout << *r.first << " already exists" << endl;
}
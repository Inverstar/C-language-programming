#include <iostream>
#include <algorithm>
#include <set>					//multiset和set需要此头文件
using namespace std;

int Multiset()
{
	multiset <int> st;
	int a[] = { 1, 14, 12, 18, 4 };
	for (int i : a)
		st.insert(i);					//	插入的是i的复制品
	multiset<int>::iterator i;	//	迭代器, 近似于指针
	for (i = st.begin(); i != st.end(); ++i)
		cout << *i << " " << endl;
	

	i = st.find(22);
	if (i == st.end())
		cout  << "not found" << endl;
	st.insert(22);
	i = st.find(22);
	if (i == st.end())
		cout << "not found" << endl;
	else
		cout << "found:" << *i << endl;

	i = st.lower_bound(13);
	cout << *i << endl;
	i = st.upper_bound(8);
	cout << *i << endl;
	st.erase(i);		//	删除i指向的元素
	//for (i = st.begin(); i != st.end();++i)
	//	cout << *i << endl;
	for (int i : st)
		cout << i << ' ';
	return 0;
}
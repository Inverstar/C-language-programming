#include <iostream>
#include <algorithm>
#include <set>					//multiset和set需要此头文件
#include "Struct_Rule.cpp"
using namespace std;

int GMultiset()
{
	multiset <int,greater<int>> st1;
	int a[] = { 1, 14, 12, 18, 4 };
	for (int i : a)
		st1.insert(i);					//	插入的是i的复制品
	multiset <int, greater<int>>::iterator i;	//	迭代器, 近似于指针
	for (int i : st1)
		cout << i << " " ;

	multiset <int, Rule2> st2;
	for (int i : a)
		st2.insert(i);					//	插入的是i的复制品
	multiset <int, Rule2>::iterator i2;	//	迭代器, 近似于指针
	for (int i : st2)
		cout << i << " " ;
	i2 = st2.find(134);	//14与134在规则Rule2下没有前后差别, 所以14就是所求
	cout <<'\n'<< *i2 << endl;
	return 0;
}
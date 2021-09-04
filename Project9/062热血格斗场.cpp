//描述
//facer新开了一家热血格斗场。格斗场实行会员制，但是新来的会员不需要交入会费，而只要同一名老会员打一场表演赛，证明自己的实力。
//
//我们假设格斗的实力可以用一个正整数表示，成为实力值。另外，每个人都有一个唯一的id，也是一个正整数。为了使得比赛更好看，每一个新队员都会选择与他实力最为接近的人比赛，即比赛双方的实力值之差的绝对值越小越好，如果有两个人的实力值与他差别相同，则他会选择比他弱的那个（显然，虐人必被虐好）。
//
//不幸的是，Facer一不小心把比赛记录弄丢了，但是他还保留着会员的注册记录。现在请你帮facer恢复比赛纪录，按照时间顺序依次输出每场比赛双方的id。
//
//输入
//第一行一个数n(0 < n <= 100000)，表示格斗场新来的会员数（不包括facer）。以后n行每一行两个数，按照入会的时间给出会员的id和实力值。一开始，facer就算是会员，id为1，实力值1000000000。输入保证两人的实力值不同。
//
//	输出
//	N行，每行两个数，为每场比赛双方的id，新手的id写在前面。
#include<algorithm>
#include<iostream>
#include<set>
#include<cstring>
using namespace std;
typedef struct member {
	int id;
	int ab;
}mem;
struct rule {
	bool operator()(const mem& a, const mem& b) {
		return a.ab < b.ab;
	}
};
int main()
{
	int n, i, t1, t2;
	cin >> n;
	mem t;
	multiset<mem, rule> st;
	multiset<mem, rule>::iterator p, q;
	t.id = 1;
	t.ab = 1000000000;
	st.insert(t);
	for (i = 0; i < n; i++)
	{
		cin >> t.id >> t.ab;
		st.insert(t);
		p = st.lower_bound(t);
		p--;
		//cout<<"p->id="<<p->id<<endl;
		q = st.upper_bound(t);
		t1 = t.ab - p->ab;//与弱者差距
		t2 = q->ab - t.ab;//与强者差距
		if (t1 <= t2 && p != st.end()) {
			cout << t.id << " " << p->id << endl;
		}
		else {
			cout << t.id << " " << q->id << endl;
		}
	}
	return 0;
}

//	598e953260641028c758bc52ae74b242f5fc9dff772d790ee120694bfcc17a5c
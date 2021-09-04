#include<algorithm>
#include<iostream>
#include<cmath>
#include<map>
#include<set>
using namespace std;
int main()
{
	int i, n, id, p, delta, idx, delta1;
	cin >> n;
	map<int, int> member;
	member[1000000000] = 1;
	for (i = 0; i < n; i++)
	{
		cin >> id >> p;
		map<int, int>::iterator h = member.lower_bound(p);
		if (h == member.end())
		{
			h--;
			idx = h->second;
		}//选手过于强大
		else {
			delta = abs(h->first - p);
			idx = h->second;
			h--;
			if (h != member.end()) {
				delta1 = abs(h->first - p);
				if (delta1 < delta || delta1 == delta && h->second < idx) {
					idx = h->second;
				}
			}
		}//比较选手的前后两项
		cout << id << " " << idx << endl;
		if (member[p] > id || !member[p]) {
			member[p] = id;
		}//若该选手不存在旗鼓相当对手或id更小则插入
	}
	return 0;
}
	//	624d30fcbaa5ef0a8dcd5da24092d219d013330b7541d76da676129fb21f3c02
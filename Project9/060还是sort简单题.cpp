#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

struct Point {
	int x;
	int y;
};
// 在此处补充你的代码
struct Rule1
{
    bool operator()(const int& a1, const int& a2)
    {
        if (a1 % 10 < a2 % 10)
            return true;
        else if (a1 % 10 == a2 % 10 && a1 > a2)
            return true;
        else
            return false;
    }
};

struct Rule2
{
    bool operator()(const Point& a, const Point& b)
    {

        if (a.x * a.x + a.y * a.y == b.x * b.x + b.y * b.y)
        {
            if (a.x == b.x)
                return a.y < b.y;
            else
                return a.x < b.x;
        }
        else return a.x * a.x + a.y * a.y < b.x* b.x + b.y * b.y;
    }
};

int main()
{
	int a[8] = { 6,5,55,23,3,9,87,10 };
	sort(a, a + 8, Rule1());
	for (int i = 0; i < 8; ++i)
		cout << a[i] << ",";
	cout << endl;
	Point ps[8] = { {1,0},{0,1},{0,-1},{-1,0},{1,-1},{1,1},{2,0},{-2,0} };
	sort(ps, ps + 8, Rule2());
	for (int i = 0; i < 8; ++i)
		cout << "(" << ps[i].x << "," << ps[i].y << ")";
	return 0;
}

//  8309f7b22534f598b47c9486d8cb0df46eacb1300bef44b68cbd1c08c2778c40
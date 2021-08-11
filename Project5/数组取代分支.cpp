#include<iostream>
#include<string>
using namespace std;
string weekdays[] = {
	"Mon","Tues","Wed","Thu","Fri","Sat","Sun"
};
int main()
{
	int n;
	cin >> n;
	if (n > 7 || n < 1)
		cout << "Illegal";
	else
		cout << weekdays[n - 1];
	return 0;
}
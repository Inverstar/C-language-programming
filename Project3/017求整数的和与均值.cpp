#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	double n; 
	int sum=0;
	cin >> n;
	int i = n;
	while (i--)
	{
		int x = 0;
		cin >> x;
		sum += x;
	}
	cout << sum << " " <<  fixed << setprecision(5) <<sum/n << endl;
	return 0;
}
//����n��1 <= n <= 10000���������������ǵĺ����ֵ��
//b112f97b8790ddd1fdac83045cdf0071626fede10206c5bd0c630ecf4f520421
#include<iostream>
using namespace std;
int main()
{
	int n = 0, j = 0, y = 0, t = 0;
	cin >> n;
	for (; n > 0; n--)
	{
		int jn, yn, tn;
		cin >> jn >> yn >> tn;
		j += jn; y += yn; t += tn;
	}
	cout << j <<' '<< y <<' '<< t <<' '<< j+y+t;
	return 0;
}
//���˻�A�����˶�Ա������n��ľ�����Ŀ(1��n��17)������Ҫͳ��һ��A������õĽ�����ͭ����Ŀ���ܽ�������
//92bfda51195ae2f6ce45405c1c4c61456389f8783e3a9424ef6692c17051f4cd
#include<iostream>
using namespace std;
int main()
{
	int x=0,y=0;
	cin >> x >> y;
	if (-1<=x&&x<=1&&y<=1&&y>=-1)
	{
		cout << "yes" << endl;
	}
	else
		cout << "no" << endl;
	return 0;
}
// ��һ�������Σ��ĸ��ǵ����꣨x,y)�ֱ��ǣ�1��-1������1��1������-1��-1������-1��1����x�Ǻ��ᣬy�����ᡣ
// �ж�һ�������ĵ��Ƿ�������������ڣ����������α߽磩��
//e19a7eb47b8c21961608f99fe8ea6259d6b0b917f14a29f236525a4889558c58
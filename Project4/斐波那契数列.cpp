#include<iostream>
using namespace std;
int main()
{
	double f1 = 1, f2 = 1 ,k=0;
	cin >> k;
	if (k == 1 || k == 2)
		cout << 1 << endl;
	else
	{
		cout << 1 << ' ' << 1;
		double sum = 0;
		for (int i = 0; i < k - 2; ++i)
		{
			sum = f1 + f2;
			f1 = f2;
			f2 = sum;
			cout <<' '<< f2 ;
		}
		cout <<'\n'<< "ǰ"<<k<< "����������"<< endl;
	}
	return main();
}
//���쳲��������е�ǰk�� 100��long long������
#include<iostream>
using namespace std;
int main()
{
	int L = 0, R = 0;
	cin >> L >> R;
    int j = 0;
	for (int i = L; i <= R; i++)
	{
        for (int k=i; k > 0; k /= 10)
        {
            if( k % 10==2)
            j++;
        }
	}
    cout << j << endl;
    return 0;
}

//01e731e69ec5cca924c3e2183d26fed510b1e16797fac6ce25aa8e8cecb079e8
//请统计某个给定范围[L, R]的所有整数中，数字2出现的次数。
//比如给定范围[2, 22]，
//数字2在数2中出现了1次，在数12中出现1次，在数20中出现1次，在数21中出现1次，在数22中出现2次，
//所以数字2在该范围内一共出现了6次。
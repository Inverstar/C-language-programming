#include <iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int main()
{
	int N = 4, K = 11;
	double max = 0, min = 10000;
	FILE *f;
	freopen_s(&f,"in(15).txt", "r", stdin);
	cin >> N >> K;
	double* n = new double[N];
	int k = N;
	while (k--)
	{
		cin >> n[k];
		max += n[k];
		if (n[k] < min)
			min = n[k];
	}
	if (max/K<min&&N >= K)
	{
		max = min;
		goto O;
	}
	for(max /= K;k<K;max-=0.01)
	{
		if (max < 0.01)
		{
			max = 0;
			goto O;
		}
		k = 0;
		for (int i = 0; i < N; i++)
		{
			k += n[i] / max;
			cout << k << endl;
		}
		cout << max << endl;
	}
	max += 0.01;
	O: cout << fixed << setprecision(2) << max << endl;
	delete[] n;
}

//	3f13fac696053b6f6613e5651ed218a5f291b935e5af4a03ac6023d7752f36e7
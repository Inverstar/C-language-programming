#include <iostream>
#include<iomanip>
#include<cstring>

using namespace std;
const int N = 11;
int storage[N];
int main()
{
	for (int i = 1; i < N; i++)
		cin >> storage[i];
	for(int i=1;i<N-1;i++)
		for (int j= i+1; j < N; j++)
		{
			if (storage[i] > storage[j])
			{
			/*	int temp = storage[j];
				storage[j] = storage[i];
				storage[i] = temp;*/
				storage[i] ^= storage[j];
				storage[j] ^= storage[i];
				storage[i] ^= storage[j];
			}
		}
	for (int i : storage)
		cout << i << " ";
	return 0;
}
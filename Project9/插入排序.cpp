#include <iostream>
using namespace std;
void InsertionSort(int a[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (a[j] > a[i])
			{
				int tmp = a[i];
				for (int k = i; k > j; --k)
					a[k] = a[k - 1];
				a[j] = tmp;
				break;
			}
		}
	}
}
//S^2
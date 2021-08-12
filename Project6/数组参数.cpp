int FindMax(int a[], int length)
{
	int mx = a[0];
	for (int i = 1; i < length; ++i)
		if (mx < a[i])
			mx = a[i];
	return mx;
}
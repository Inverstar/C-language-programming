#include<iostream>
using namespace std;
int MyCompare(const void* elem1, const void* elem2)
{
	unsigned int* p1, * p2;
	p1 = (unsigned int*)elem1;
	p2 = (unsigned int*)elem2;
	return(*p1 % 10) - (*p2 % 10);
}
int 排序()
{
	unsigned int an[5] = { 8,123,11,10,4 };
	qsort(an, 5, sizeof(unsigned int), MyCompare);
	for (int i : an)
		cout << i << endl;
	return 0;
}
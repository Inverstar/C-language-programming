#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a[8] = { 6,5,14,23,2,9,87,10 };
	sort(a+1,a+7,greater<int>()
		// 在此处补充你的代码
	);
	for (int i = 0; i < 8; ++i)
		cout << a[i] << ",";
	return 0;
}

//	7ce8691dc51792f69915a716da809defa827dfe22444382485e85453aa19296f
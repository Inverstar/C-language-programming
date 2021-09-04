#include <iostream>
#include<algorithm>
//#include<cstring>
#include "Struct_Rule.cpp" //结构体类型定义是一次性的, 不可声明使用.
using namespace std;
int main()
{
	int GMultiset();
	GMultiset();
	return 0;

	int Multiset();
	Multiset();
	return 0;

	/*int Student();
	Student();
	return 0;*/

	int a[] = { 12,21,3,45,5 };
	sort(a, a + sizeof(a)/sizeof(int));
	sort(a, a + sizeof(a) / sizeof(int), greater<int>());

	sort(a, a + sizeof(a) / sizeof(int), Rule1());
	cout << "大于等于该值的最小下标元素地址" << *lower_bound(a, a + 5, 3) << endl;
	cout << "二分法寻找 : " << binary_search(a, a + 5, 0) << endl;

	sort(a, a + sizeof(a) / sizeof(int), Rule2());
	cout << "二分法寻找 : " << binary_search(a, a + 5, 1,Rule2()) << endl; //1并不在a中, 但是1与21的位置相当
	cout << "大于该值的最小下标元素地址" << *upper_bound(a, a + 5, 3, Rule2()) << endl;
	cout << "大于等于该值的最小下标元素地址" << *lower_bound(a, a + 5, 3, Rule2()) << endl;
	//void BubbleSort(int a[], int size);
	//BubbleSort(a, 5);

	//void InsertionSort(int a[], int size);
	//InsertionSort(a, 5);

	//void SelectionSort(int a[], int size);
	//SelectionSort(a, 5);

	for(int i:a)
		cout << i << endl;
	return 0;

	char s[] = "-this, a sample string , OK.";
	char t[] = "-, .";
	char* static$strtok(char* p, char* sep);
	static$strtok(s, t);
	return 0;

	void static_strtok(char s[], char* t);
	static_strtok(s, t);
	return 0;

	void Func();
	Func(); //初始化
	Func(); //输出++后的n再++n
	Func();
}
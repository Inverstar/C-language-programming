#include <iostream>
using namespace std;
void Print(const char* p1, const char* p2)
{
	for (;p1<p2;p1++)
		cout << *p1;
}
int main()
{
	const char* s = "Tesla123";
	Print(s, s + 5);
	cout << endl;
	Print(s, s + 3);
	cout << endl;

	return 0;
}

//	程序输出结果是 Tesla Tes 请填空
//	490834dbe69ed97f867f87d2b695548a42e6487ad1bc90a6d5c09cf5b9b9a298
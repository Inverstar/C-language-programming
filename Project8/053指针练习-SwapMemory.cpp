#include <iostream>
using namespace std;
void SwapMemory(void* m1, void* m2, int size)
{
	// 在此处补充你的代码
	char * M1 = (char*) (m1);
	char * M2 = (char*)(m2);
	char* p = new char[size];
	for (int i = 0; i < size; i++)
	{
		p[i] = M1[i];
		M1[i] = M2[i];
		M2[i] = p[i];
	}
	delete[] p;
}

void PrintIntArray(int* a, int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << ",";
	cout << endl;
}

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 10,20,30,40,50 };
	SwapMemory(a, b, 5 * sizeof(int));
	PrintIntArray(a, 5);
	PrintIntArray(b, 5);
	char s1[] = "12345";
	char s2[] = "abcde";
	SwapMemory(s1, s2, 5);
	cout << s1 << endl;
	cout << s2 << endl;
	return 0;
}

//	填写内存交换函数 SwapMemory，使得程序输出指定结果
//	078914df6c3ee6362d05e997e61c187876bdf76ede470724dfbb904b974950e0
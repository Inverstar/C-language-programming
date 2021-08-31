#include <iostream>
using namespace std;
int main() {
	char s[] = "Hello";
	char* p;
	for (p = s; p < s + sizeof(s) - 1; p++)
		cout << *p;
	return 0;
}

//	程序片段的输出结果是 Hello ,请填空在此处补充你的代码
//	94d765bae756762834839211a83840f91d2e4fb486b9213bcb2941b232971a2c
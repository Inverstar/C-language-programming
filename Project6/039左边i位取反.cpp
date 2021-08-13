#include <iostream>
using namespace std;

int bitManipulation3(int n, int i) {
	// 在此处补充你的代码
	return ((0xFFFFFFFF << (32-i)) & (~((0xFFFFFFFF << (32 - i)) & n))) | (((0xFFFFFFFF << (32 - i)) | n) ^ (0xFFFFFFFF << (32 - i)));
}

int main() {
	int t, n, i;
	cin >> t;
	while (t--) {
		cin >> n >> i;
		cout << bitManipulation3(n, i) << endl;
	}
	return 0;
}
//7cbb64cd7c581c011c8b1f7860f282349fdbab7abdabac377cc0e1c7a64d4e9d
//写出函数中缺失的部分，使得函数返回值为一个整数,该整数的左边i位是n的左边i位取反，其余位和n相同
//请使用【一行代码】补全bitManipulation3函数使得程序能达到上述的功能
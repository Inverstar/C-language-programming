#include <iostream>
using namespace std;

int bitManipulation3(int n, int i) {
	// �ڴ˴�������Ĵ���
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
//д��������ȱʧ�Ĳ��֣�ʹ�ú�������ֵΪһ������,�����������iλ��n�����iλȡ��������λ��n��ͬ
//��ʹ�á�һ�д��롿��ȫbitManipulation3����ʹ�ó����ܴﵽ�����Ĺ���
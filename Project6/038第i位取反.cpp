#include <iostream>
using namespace std;

int bitManipulation2(int n, int i) {
	// �ڴ˴�������Ĵ���
	return (~(n & (1 << i))) & (n | (1 << i));
}

int main() {
	int t, n, i;
	cin >> t;
	while (t--) {
		cin >> n >> i;
		cout << bitManipulation2(n, i) << endl;
	}
	return 0;
}


//a0eb687e51d1c871254b6a9531d59c82030515260bae1b67e2b83cb2c853e622

//д��������ȱʧ�Ĳ��֣�ʹ�ú�������ֵΪһ������,�������ĵ�iλ��n�ĵ�iλȡ��������λ��n��ͬ

//��ʹ�á�һ�д��롿��ȫbitManipulation2����ʹ�ó����ܴﵽ�����Ĺ���
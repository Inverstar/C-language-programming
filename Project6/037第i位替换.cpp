#include <iostream>
using namespace std;

int bitManipulation1(int n, int m, int i) {
	// �ڴ˴�������Ĵ���
	return ((m& (1 << i))|(n & (~(1 << i))));
	
}

int main() {
	int n, m, i, t;
	cin >> t;
	while (t--) {
		cin >> n >> m >> i;
		cout << bitManipulation1(n, m, i) << endl;
	}
	return 0;
}
//3a1bcbba44ee7690b8a0216f30bf8ce0fbdab4f6145dbe9d22c0b25be23fb221
//д��������ȱʧ�Ĳ��֣�ʹ�ú�������ֵΪһ������,�������ĵ�iλ��m�ĵ�iλ��ͬ������λ��n��ͬ��

//��ʹ�á�һ�д��롿��ȫbitManipulation1����ʹ�ó����ܴﵽ�����Ĺ���
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a[100] = {};
	double b[4] = {};
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		if (a[i] <= 18)b[0]++;
		if (a[i]>= 19 && a[i] <= 35)b[1]++;
		if (a[i] >= 36 && a[i] <= 60)b[2]++;
		if (a[i] >= 61)b[3]++;
	}
	for (int i = 0; i < 4; i++)
		cout<< fixed << setprecision(2) <<(b[i]/n)*100<<'%'<< endl;
	return 0;
}
//af6c076f1d5703f3452a123832bed14ce97cca71748caf1c5bbc06814c2d2a8b
//ĳҽԺ��ͳ��һ��ĳ����Ļ������������Ƿ��йأ���Ҫ����ǰ����ϼ�¼��������
//����0-18��19-35��36-60��61���ϣ���61���ĸ������ͳ�ƵĻ�������ռ�ܻ��������ı�����
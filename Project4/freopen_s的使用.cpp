#include <iostream>
using namespace std;
int main()
{
    int a, b;
    FILE* stream1;
    freopen_s(&stream1, "in.txt", "r", stdin);
    freopen_s(&stream1, "out.txt", "w", stdout);
    while (cin >> a >> b)
        cout << a + b << endl; // ע��ʹ��endl 
    fclose(stdin);//�ر��ļ� 
    fclose(stdout);//�ر��ļ�
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    FILE* stream1;
    freopen_s(&stream1, "in.txt", "r", stdin);
    freopen_s(&stream1, "out.txt", "w", stdout);
    while (cin >> a >> b)
        cout << a + b << endl; // 注意使用endl 
    fclose(stdin);//关闭文件 
    fclose(stdout);//关闭文件
    return 0;
}

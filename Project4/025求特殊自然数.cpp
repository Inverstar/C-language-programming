#include<iostream>
using namespace std;
int main()
{
    int x=0, y=0, z=1;
    while (24 * x != 40 * z + y )//49*x+7*y+z!=81*z+9*y+x
    {
        if (z < 7)z++;
        if (z == 7 && y < 7)
        {
            z = 0;
            y++;
        }
        if (y == 7 && x < 7)
        {
            y = 0;
            x++;
        }
    }
    cout <<49 * x + 7 * y + z<< endl;
    cout << x << y << z<<endl;
    cout << z << y << x << endl;
    return 0;
}
//3da63b3ddc14cb65f3f207e2c7801340a26eb76ee0825374ec23ab095241d094
//一个十进制自然数,它的七进制与九进制表示都是三位数，且七进制与九进制的三位数码表示顺序正好相反。
//编程求此自然数,并输出显示。
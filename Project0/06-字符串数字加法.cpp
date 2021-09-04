#include <iostream>
#include <string>

using namespace std;
string Add(string a, string b)
{
    //a一直为位数较长的字符串
    if (a.length() < b.length())
    {
        a.swap(b);
    }

    string result(a.length(), 0);  //初步设置result长度为较长字符长度

    b.insert(0, a.length() - b.length(), '0');  //较短的字符串前面补零，方便计算

    int carry = 0;  //进位
    for (int i = a.length() - 1; i >= 0; i--)
    {
        int sum = (a[i] - 48) + (b[i] - 48) + carry;
        carry = sum / 10;
        result[i] = sum % 10 + 48;
    }

    //若进位不为0，还要在前面补上进位
    if (carry != 0)
    {
        result.insert(result.begin(), carry + 48);
    }
    int i = 0;
    while (result[i] == '0')
    {
        i++;
        if (i == result.size())
            return "0";
    }
    return &result[i];
}

int main()
{
    string a, b;
    cin >> a >> b; 
   
    cout << Add(a, b);
    //cin.get();
    return 0;
}
    //  a20222556f6108036277f15af56b0482c62e4e2505a6efce19c4fc0f7d4c4936
//a = "2380671321472160995331076601411911330004237023166924739265369137375803920668051999979494755057830067";
//b = "00008489987418349004664744197177500691165939685087873257491313005521464579016315569937027267045067842405818";
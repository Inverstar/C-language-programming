#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;
constexpr auto N = 20305;
int T043()
{
    char input[N], str[201][101];
    int i, row = 0, col = 0;
    char max[101], min[101];
    gets_s(input);
    for (i = 0; input[i] != '\0'; i++)
    {
        if (input[i] != ',' && input[i] !=' ')
        {
                str[row][col] = input[i];
                col++;
        }
        else
    {
                str[row][col] = '\0';
                row++;
                col = 0;
        }
    }
        str[row][col] = '\0';
        strcpy_s(max, str[0]);
        strcpy_s(min, max);
        for (i = 0; i <= row; i++)
        {
            if (strlen(str[i]) > strlen(max))
            {
                strcpy_s(max, str[i]);
            }
            if (strlen(min) > strlen(str[i])&&strlen(str[i])>0)
            {
                strcpy_s(min, str[i]);
            }
        }
        cout << max << endl;
        cout << min << endl;

    return 0;
}

/*����1�о��ӣ�������200�����ʣ�ÿ�����ʳ��Ȳ�����100����
ֻ������ĸ���ո�Ͷ��š�����������һ����������ĸ���ɣ��ո�Ͷ��Ŷ��ǵ��ʼ�ļ����
�������1����ĵ��ʺ͵�1����̵���*/
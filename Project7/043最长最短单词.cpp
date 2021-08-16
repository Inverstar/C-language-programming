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

/*输入1行句子（不多于200个单词，每个单词长度不超过100），
只包含字母、空格和逗号。单词由至少一个连续的字母构成，空格和逗号都是单词间的间隔。
试输出第1个最长的单词和第1个最短单词*/
#include<iostream>
#include<cstdlib>
using namespace std;
int 字符串操作()
{
	char s1[100] = "12345";
	char s2[100] = "abcdef";
	char s3[100] = "ABCDE";
	strncat_s(s1, s2, 3);
	cout << s1 << endl;
	strncpy_s(s1, s3, 3);
	cout << s1 << endl;
	cout << strncmp(s1, s3, 3) << endl;
	char str[] = "- This , a sample string, OK.";

	cout << strchr("123456", '3') << endl; //返回的指针被输出, 实际输出了查找字符及其后面的所有字符
	cout << strstr("123456", "34") << endl;
	cout << _stricmp("abcde", "ABcdE") << endl;
	cout << strncmp("abcde", "ABcdE", 3) << endl;
	char b[5];
	strncpy_s(b,"345",1); //如果n<=src, 则函数不会自动向p写入\0, 若src长度不足n:拷贝全部带\0结尾
	cout << b << endl;
	return 0;
}
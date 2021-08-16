#include<iostream>
#include<cstring>
using namespace std;
//字符串函数根据'\0'判断字符串结尾
void PrintSmall(char s1[], char s2[])
{
	if (strcmp(s1, s2) <= 0) //int strcmp(char [] s1, char [] s2); //返回0则相等, 正数则s1>s2
		cout << s1;
	else
		cout << s2;
}
int m2()
{
	//字符串拷贝
	char s1[30];
	char s2[40];
	char s3[100];
	strcpy_s(s1, "Hello");// strcpy(char [] new, char [] old) 将old复制到new中
	strcpy_s(s2, s1);
	cout << "1)" << s2 << endl;
	strcat_s(s1, ",world"); //strcat(char [] s1, char [] s2); 将s2接到s1后面, 得到新s1, 可能越界.
	cout << "2)" << s1 << endl;
	char s4[] = "abc";
	cout << "3)"; PrintSmall(s4, s2); cout << endl;
	char s5[] = "aaa";
	cout << "4)"; PrintSmall(s4, s5); cout << endl;
	int n = strlen(s2); //int strlen(char [] s); 字符数组长度.
	cout << "5)" << "," << strlen("abc") << endl;
	_strupr_s(s1); //strups(char[]) 将字符串转为大写
	_strlwr_s(s2); //strlwr(char []) 转为小写.
	cout << "6)" << s1 << endl;
	return 0;
}
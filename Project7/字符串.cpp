#include <iostream>
#include <string>
using namespace std;
int a()
{
	string A = "C++";		//字符串常量占据内存字节数等于字符数+1,多出来的是'\n'
	char a[] = "C++";		//字符串长度等于字符数 包含\0字符的一维char数组就是一个字符串
	//string 32位是28字节, 64位是40字节
	cout << sizeof(A) << endl;			//28 40
	cout << sizeof(string) << endl;	//28 40
	cout << A.size() << endl;				//3	
	cout << A.length() << endl;			//3
	cout << sizeof("C++") << endl;	//4
	cout << sizeof(a) << endl;			//4
	cout << strlen(a) << endl;			//3
	cout << strlen("C++") << endl;	//3
	cout << sizeof("") << endl;			//1
	cout << sizeof('\n') << endl;			//1

	//内存大小未必是对象长度

	char str[] = { 'a','b','c','\0','X' };
	string s = str;
	cout << sizeof(str) << ' ' << strlen(str) << endl;	//5 3
	return 1;
}
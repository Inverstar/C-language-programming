#include <cmath>
#include <ctype.h>
#include <cctype>
using namespace std;
//库函数:	C/C++标准规定的, 编译器自带的函数
//头文件: C++编译器提供许多"头文件", 如 iostream cmath string
int math()
{
	abs(-1);		//整数绝对值
	cos(5);		//弧度余弦
	fabs(-1.2);	//浮点绝对值
	ceil(1.2);		//不小于x的最小整数
	sin(35);		//弧度正弦
	sqrt(2);		//平方根
	return 0;
}
int ctype()
{
	isdigit(1);			//判断是否是数字字符
	isalpha('a');		//判断是否是一个字母
	isalnum('我');		//判断是否是一个字母或数字
	islower('B');		//判断小写字母
	isupper('a');		//判断大写字母
	toupper('a');		//小写变大写
	tolower('B');	//大写字母变小写
	return 0;
}
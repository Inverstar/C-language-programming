#include <iostream>
#include <cstdio>
/*变量: 名字和类型两种属性
程序运行时会自动给变量分配内存空间
定义变量必须在使用之前*/
using namespace std;
int main()
{
	int number; //变量由字母, 数字, 下划线组合, 无空格, 不可数字开头
	char a, b, c; //不可与关键字或保留字重复
	long a1 = 1;
	//printf("%d\n", sizeof(long long));//sizeof()可以得到某个变量或某个类型的字节大小
	short b1 = 3;
	long long c1 = 4;
	unsigned char c3 = 'c';
	bool b2 = 1;
	double d = 1.0;
	float f = 4;
	short a2 = -0177777; //-1
			//  a2 = 0100001;	//32767
	unsigned short us = 0177777; //65535
	unsigned short us1 = 0277777;
	//scanf_s("%c%c%c", &a, sizeof(a), &b, sizeof(b), &c, sizeof(c));
	//使用scanf_s需要给每一个输入给出缓冲大小
	char i = 32;
	printf("%c=%d\n", i, i);
	//类型转换
	int k = 'a';
	char k1 = 98;
	printf("%c\n", k1);
	printf("%d\n%d\n%d", us, us1, a2);
	return 0;


	//计算机中二进制 十六进制以补码形式 存储 
}
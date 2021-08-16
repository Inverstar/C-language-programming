#include <cstring>
int s1()
{
	char s[100] = "test";
	int len = strlen(s);
	for (int i = 0; i < len; ++i) //将strlen(s)提出去, 不然每次循环都要执行函数, 拖慢速度.
	{
		s[i] += 1;
	}
	return 0;
}
int s2()
{
	char s[100] = "test";
	//int len = strlen(s);
	for (int i = 0; s[i]; ++i) //利用s[i]='\0'=0来结束循环
	{
		s[i] += 1;
	}
	return 0;
}
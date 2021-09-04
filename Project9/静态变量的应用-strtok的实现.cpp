#include <iostream>
using namespace std;
void static_strtok(char s[],char* t)
{
	char* p = strtok_s(s, t, &s);
	while (p != NULL)
	{
		cout << p << endl;
		p = strtok_s(NULL, t, &s);
	}
}
char * static$strtok(char * p, char* sep)
{
	static char* start; //本次查找的起点
	if (p)
		start = p; //将非空的p交给start
	for (; *start && strchr(sep, *start); ++start); //跳过分隔符
	if (*start == 0)
		return NULL; //到达末尾, 结束查找
	char* q = start; //找到的单词起始位置
	for (; *start && !strchr(sep, *start); ++start); //跳过非分隔字符
	if (*start) //将分隔符变为\0
	{
		*start = 0;
		++start;
	}
	cout << q << endl; //本次查找单词的起始指针
	return static$strtok(start,sep); //开始下次查找单词, 将start作为起点
}
#include <cstring>
int s1()
{
	char s[100] = "test";
	int len = strlen(s);
	for (int i = 0; i < len; ++i) //��strlen(s)���ȥ, ��Ȼÿ��ѭ����Ҫִ�к���, �����ٶ�.
	{
		s[i] += 1;
	}
	return 0;
}
int s2()
{
	char s[100] = "test";
	//int len = strlen(s);
	for (int i = 0; s[i]; ++i) //����s[i]='\0'=0������ѭ��
	{
		s[i] += 1;
	}
	return 0;
}
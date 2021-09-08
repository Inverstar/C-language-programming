#include<iostream>
#include<cstdio>
using namespace std;
void Cstdio()
{
	errno_t errno;
	FILE* f, *l;
	errno= fopen_s( &f,"s.txt", "r");	//读模式
	if (errno == NULL) cout << "成功" << endl;
	int a[10];
	int i = 0;
	while (i != 10)
	{
		fscanf_s(f, "%d", &a[i]);
		cout << i << a << endl;
		i++;
	}
	errno = fopen_s(&l, "in.txt", "w");	//写模式, 创建文件用于写入, 若存在则覆盖
	if (errno == NULL) cout << "成功" << endl;

	for (; i > 0; i--)
	{
		fprintf_s(l, "%d ", a[i]);
		cout << a[i] << endl;
	}
	//errno = fopen_s(&f, "IN.txt", "a");	//添加模式, 打开已有文件尾部写入. 不存在则创建
	//if (errno == NULL) cout << "成功" << endl;
	//errno = fopen_s(&f, "IN.txt", "r+");	//读写模式, 打开文件可读可写, 不存在则打开失败
	//if (errno == NULL) cout << "成功" << endl;
	//errno = fopen_s(&f, "IN.txt", "rb");	//加b以二进制形式打开
	//if (errno == NULL) cout << "成功" << endl;
	//errno = fopen_s(&f, "IN.txt", "wb");
	//if (errno == NULL) cout << "成功" << endl;
	//errno = fopen_s(&f, "IN.txt", "ab");
	//if (errno == NULL) cout << "成功" << endl;
	//errno = fopen_s(&f, "IN.txt", "r+b");
	//if (errno == NULL) cout << "成功" << endl;
	/*fclose(f);
	fclose(l);*/
	//在windows记事本中打开linux或MacOS文本文件时会没有换行.
	//	Windows文本文件在读取时\r\n当作\n处理, 少读了\r
	//	写入时, 自动在\n前面加\r, 多写了\r
	//	所以想要准确读写文件要用二进制方式

	/*
	 *文件名的路径
	 绝对路径: 指明盘符 C: \\tmp\\s.txt
	 相对路径: 当前盘符 \\tmp\\s.txt
	 当前文件夹 tmp\\s.txt
	 当前文件夹上级目录
		..\\tmp\\s.txt
		..\\..\\tmp\\s.txt
	 */
}
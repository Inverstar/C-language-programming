#include <iostream>
using namespace std;
void PrintArray(int a[][5])
{
	for (int i = 0; i < 4; i++) //传入的数组直接指定大小比较好,sizeof(a)实际为指针的大小:4
		for (int j = 0; j < 5; j++)
			cout << &a[i][j] << ' ' << a[i] + j << ' ' << *(a + i) + j << ' ' << &a[0][0] + 5 * i + j << ' ' << &(*(a + i))[j] << endl;
	//
}
//a[i][j]的地址: 数组首地址+i*N*sizeof(a[i][j])+j*sizeof(a[i][j])	N为数组列数
//形参数组首地址就是实参数组首地址
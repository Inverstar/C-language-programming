﻿#include<iostream>
using namespace std;
void Swap(int* p1, int* p2)
{
	//int tmp = *p1;
	//*p1 = *p2;
	//*p2 = tmp;
	
	*p1 ^= *p2;
	*p2 ^= *p1;
	*p1 ^= *p2;
}
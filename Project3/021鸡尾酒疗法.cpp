//鸡尾酒疗法，原指“高效抗逆转录病毒治疗”（HAART）
//由美籍华裔科学家何大一于1996年提出，是通过三种或三种以上的抗病毒药物联合使用来治疗艾滋病。
//该疗法的应用可以减少单一用药产生的抗药性，最大限度地抑制病毒的复制，使被破坏的机体免疫功能部分甚至全部恢复，
//从而延缓病程进展，延长患者生命，提高生活质量。人们在鸡尾酒疗法的基础上又提出了很多种改进的疗法。
//为了验证这些治疗方法是否在疗效上比鸡尾酒疗法更好，可用通过临床对照实验的方式进行。
#include<iostream>
using namespace std;
int main()
{
	int n = 0, jz=0, jy=0; 
	cin >> n >> jz >> jy;
	double x = (double)jy / jz;
	while (--n)
	{
		int z = 0, y = 0;
		cin >> z >> y;
		double xn=(double)y/z;
		if (xn - x > 0.05)
			cout << "better" << endl;
		else if (x - xn > 0.05)
			cout << "worse" << endl;
		else
			cout << "same" << endl;
	}
	return 0;
}

//bfee5b2d014eb9e244329bb064309b119d7c1bc1812e34aacee32a3caa585a3b
//假设鸡尾酒疗法的有效率为x，新疗法的有效率为y，
//如果y - x大于5 % ，则效果更好，如果x - y大于5 % ，则效果更差，否则称为效果差不多。
//下面给 出n组临床对照实验，其中第一组采用鸡尾酒疗法，其他n - 1组为各种不同的改进疗法。
//请写程序判定各种改进疗法效果如何。
#include <iostream>
#include <iomanip>
using namespace std;
double GetDoubleFromString(char* str)
{
	// 在此处补充你的代码
	      static char *p;
      if(str){
          p=str;}//把首地址p
      double num=0;
      while(*p&&!(*p>='0'&&*p<='9'))
      {
          ++p;
      }
      if(*p==0)
      {
          return -1;
      }
      while(*p>='0'&&*p<='9')
      {
          num = num*10+*p-'0';//没有pow的一种字符串转数字的方式
          ++p;
      }
      if(*p=='.')
      {
          ++p;
          double i=10;
          while(*p>='0'&&*p<='9')
          {
              num += (*p-'0')/i;//字符转小数
              ++p;
              i=i*10;
          }
      }
      return num;
}

int main()
{
	char line[300];
	while (cin.getline(line, 280)) {
		double n;
		n = GetDoubleFromString(line);
		while (n > 0) {
			cout << fixed << setprecision(6) << n << endl;
			n = GetDoubleFromString(NULL);
		}
	}
	return 0;
}

//	3ef3557425e87525f044b5c29ffd5e68862e962c7bd9b2a8c2849716fb858cab
//	编写GetDoubleFromString函数，该函数可以不断从字符串中取出正浮点数或整数，无数可取，则返回值小于0
#include<iostream>
using namespace std;
int main()
{
	int year;
	scanf_s("%d", &year);
	if (year <= 0)
		printf("Illegal year.\n");
	else
	{
		printf("Legal year.\n");
		if (year > 1949 && (year - 1949) % 10 == 0) //建国
			printf("Luky year.\n");
		else if (year > 1921 && !((year - 1921) % 10)) //建党
			printf("Good year.\n");
		else if (year % 4 == 0 && year % 100 || year % 400 == 0) //闰年
			printf("Leap year.\n");
		else printf("Common year.\n");
		;
	}
		
	return 0;
}
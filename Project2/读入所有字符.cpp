#include <iostream>
using namespace std;
int main()
{
	int c;
	while ((c = cin.get()) != EOF)
	{
		cout << (char)c;
	}
	/*char i;
	while (scanf_s("%c", &i, 1) != EOF)
	{
		printf("%c", i);
	} */
	return 0;
}
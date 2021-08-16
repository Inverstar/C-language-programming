#include <iostream>
#include <cstring>
//#include <string>
using namespace std;
int ×Ö·û´®Ê¾Àý1()
{
	char title[] = "Prison Break";
	char hero[100] = "Michael Scofield";
	char prisonName[100];
	char response[100];
	cout << "What's the name of the prison in " << title << endl;
	cin >> prisonName;
	if (strcmp(prisonName, "Fox-River") == 0)
		cout << "Year! Do you love " << hero << endl;
	else
	{
		//×Ö·û´®¿½±´º¯Êý
		strcpy_s(response, "It seems you haven't watched it!\n");
		cout << response;
	}
	int c = '0';
	char k = '\0';
		cout << c << ' ' << k << ' ' << '\0' << endl;
	return 0;
}
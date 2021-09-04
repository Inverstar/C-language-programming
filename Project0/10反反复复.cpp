#include <iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int main()
{
	int l = 5;
	string s = "toioynnkpheleaigshareconhtomesnlewx";
	cin >> l;
	cin >> s;
	int h = s.size();
	char* p = new char[h];
	for (int j = 0; j < h / l; j++)
	{
		for (int i = 0; i < l; i++)
		{
			if (j % 2)
				p[j * l + i] = s[j * l + l - i-1];
			else p[j * l + i] = s[j * l +  i];
			//cout << p[j * l + i];
		}
		//cout << endl;
	}
	for (int i = 0; i < l; i++)
		for (int j = 0; j < h / l; j++)
			cout << p[j * l + i] ;
		
	delete[] p;
}
	//	a894993f5837226d965fcaa1462f1ee9f9f10f613ab501046b4286292ca8e70e
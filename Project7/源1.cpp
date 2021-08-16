#include<iostream>
#include<cstring>
using namespace std;
int m() {
	char s[100000];
	int flag = 0;
	char temp;
	cin.getline(s, 100000);
	int len = strlen(s);
	int num[100000] = {};
	for (int i = 0; i < len; i++) {
		num[s[i] - 'a']++;
		/*if(num[s[i]-'a']==1){
		temp=s[i];
		break;
		}*/
	}
	for (int i = 0; i < len; i++) {
		if (num[s[i] - 'a'] == 1) {
			temp = s[i];
			break;
		}

	}
	for (int i = 0; i < len; i++) {
		if (num[s[i] - 'a'] != 1) {
			flag++;
		}
		if (flag == len) {
			cout << "no" << endl;
		}
	}
	cout << temp << endl;
	return 0;
}
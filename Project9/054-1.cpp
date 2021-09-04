
#include<iostream>
#include<cstring>
using namespace std;
struct student 
{
    char name[100];
    int grade;
};
student s[20];
void name(student s[], int n) {
    int j, k, i;
    student temp;
    for (j = 0; j < n; j++)
        for (k = j + 1; k < n; k++)
        {
            if (strcmp(s[j].name, s[k].name) > 0)
            {
                temp = s[j];
                s[j] = s[k];
                s[k] = temp;
            }
        }
    for (i = 1; i < n; i++)
    {
        if (s[i].grade > s[i - 1].grade)
        {
            temp = s[i];
            j = i - 1;
            do {
                s[j + 1] = s[j];
                j--;
            } while (j >= 0 && s[j].grade < temp.grade);
            s[j + 1] = temp;
        }
    }
}


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i].name >> s[i].grade;
    }
    name(s, n);
    for (int i = 0; i < n; i++) {
        cout << s[i].name <<' '<< s[i].grade << endl;
    }
    return 0;

}
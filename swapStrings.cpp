#include <bits/stdc++.h>
using namespace std;

void swapStrings(char *str1, char *str2)
{
    char temp[30];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}


int main()
{
    char str1[30];
    char str2[30];
    cin >> str1 >> str2;
    swapStrings(str1, str2);
    cout << "String 1 is: " << str1 << endl;
    cout << "String 2 is: " << str2 << endl;
    return 0;
}

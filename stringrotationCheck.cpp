#include <bits/stdc++.h>
using namespace std;

bool checkstringRotation(string str1, string str2)
{
    if (str1.length() != str2.length())
    {
        return false;
    }
    string temp = str1.append(str1);
    return (temp.find(str2) != string::npos);
}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    if(checkstringRotation(str1, str2))
    {
        cout << "Success." << "\n";
    }
    else
    {
        cout << "Failure." << "\n";
    }
    return 0;
}

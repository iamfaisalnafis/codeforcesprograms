#include <bits/stdc++.h>
using namespace std;

const int MAX_CHAR = 256;

bool uniqueCharacters(string str)
{
    if (str.length() > MAX_CHAR)
    {
        return false;
    }
    bool chars[MAX_CHAR] = {0};
    for(int i = 0; i < str.length(); i++)
    {
        if(chars[str[i]] == true)
        {
            return false;
        }
        chars[str[i]] = true;
    }
    return true;
}

int main()
{
    string str;
    cin >> str;
    if(uniqueCharacters(str))
        cout << "Unique Elements" << "\n";
    else
        cout << "Contains Duplicates" << "\n";
    cout << "Time Complexity = O(n)" << "\n";
    return 0;
}

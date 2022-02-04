#include <bits/stdc++.h>
using namespace std;

bool checkStringPallindrome(string str)
{
    string copy = str;
    int n = str.length();
    reverse(str.begin(), str.end());
    if(copy != str)
    {
        return false;
    }
    return true;
}


int main()
{
    string str;
    cin >> str;
    if(checkStringPallindrome(str))
    {
        cout << "Success" << endl;
    }
    else
    {
        cout << "Failure" << endl;
    }
    return 0;
}

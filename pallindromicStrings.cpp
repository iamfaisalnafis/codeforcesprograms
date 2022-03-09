#include <iostream>
using namespace std;

int pallindromicstringsChecker (string str)
{
    int n = str.length();
    int count(0);
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            return 0;         
        }
    }
    return 1;
}

int main()
{
    string str;
    cout << "Enter first string: ";
    cin >> str;

    if (pallindromicstringsChecker(str))
    {
        cout << "Pallindromic String.";
    }
    else
    {
        cout << "Not a Pallindromic String.";
    }
    return 0;
}

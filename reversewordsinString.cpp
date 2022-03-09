#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string reversewordsinString(string str)
{
    reverse (str.begin(), str.end());
    str.insert(str.end(), ' ');
    int n = str.length();
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {
            reverse(str.begin() + j, str.begin() + i);
            j = i + 1;
        }
    }
    str.pop_back();
    return str;
}

int main()
{
    string str;
    cout << "Enter the String: ";
    getline (cin, str);
    string rev = reversewordsinString(str);
    cout << rev;
    return 0;
}

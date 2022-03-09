#include <iostream>

using namespace std;

int nonrepeatingCharacter(string str)
{
    int fi[256];
    for (int i = 0; i < 256; i++)
    {
        fi[i] = -1;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (fi[str[i]] == -1)
        {
            fi[str[i]] = i;
        }
        else
        {
            fi[str[i]] = -2;
        }
    }

    int res = INT_MAX;
    for (int i = 0; i < 256; i++)
    {
        if (fi[i] >= 0)
        {
            res = min(res, fi[i]);
        }
    }
    if (res == INT_MAX) return -1;
    else return res;    
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int firstIndex = nonrepeatingCharacter(str);
    if ( firstIndex == -1)
    {
        cout << "All characters are repeating or the string is Empty";
    }
    else {
        cout << "The first non repeating character is: " << str[firstIndex];
    }
    return 0;
}

#include <iostream>
using namespace std;

void stringComparision (string s1, string s2)
{
    int n1 = s1.length();
    int n2 = s2.length();
    int i, j;
    for (i = 0, j = 0; i < n1 && j < n2; i++, j++)
    {
        if (s1[i] != s2[j])
        {
            break;
        }
    }
    if (s1[i] == s2[j])
    {
        cout << endl;
        cout << "Both the Strings are equal.";
        cout << endl;
    }
    else if(s1[i] < s2[j])
    {
        cout << endl;
        cout << "String 1 is smaller than String 2.";
        cout << endl;
    }
    else if (s1[i] > s2[j])
    {
        cout << endl;
        cout << "String 1 is greater than String 2.";
        cout << endl;
    }
}

int main()
{
    string s1, s2;
    cout << "First String: ";
    cin >> s1;

    cout << endl;
    cout << "Second String: ";
    cin >> s2;

    stringComparision (s1, s2);
    return 0;
}

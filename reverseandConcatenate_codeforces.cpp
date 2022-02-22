#include <bits/stdc++.h>

using namespace std;

string reverseSTR (string s)
{
    int n = s.length();
    for (int i = 0, j = n - 1 ; i < j; i++, j--)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    return s;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        string newstr = s;
        int count(0);
        if (k == 0 || s == reverseSTR(s))
        {
            cout << 1 << endl;
            continue;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.length() - 1; i+=2)
        {
            cout << s[i];
        }
        cout << s[s.length() - 1] << endl;
    }
    return 0;
}

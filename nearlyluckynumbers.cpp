#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    long long n, c(0);
    cin >> n;
    string s = "";
    s += to_string(n);
    s.erase(remove(s.begin(), s.end(), '0'), s.end());
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '4' || s[i] == '7')
        {
            c++;
        }
    }
    if (c == 4 || c == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
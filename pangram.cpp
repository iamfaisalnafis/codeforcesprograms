#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    set<char> arr;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 'a' - 'A';
        {
            arr.insert(s[i]);
        }
    }
    if(arr.size() == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
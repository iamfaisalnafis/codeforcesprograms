#include <bits/stdc++.h>
using namespace std;
// const int MAX_CHAR = 256;

bool uniqueCharacters(string s)
{
    sort(s.begin(), s.end());
    for(int i = 0; i < s.length(); i++)
        if(s[i] == s[i+1]) return false;
    return true;
}

int main()
{
    string s;
    cin >> s;
    if(uniqueCharacters(s))
        cout << "Unique String" << "\n";
    else
        cout << "Contains Duplicates" << "\n";
    cout << "Time Complexity = O(nlogn)" << "\n";
    return 0;
}
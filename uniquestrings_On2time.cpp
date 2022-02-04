#include <bits/stdc++.h>
using namespace std;

bool isUnique(string s)
{
    if (s.length() > 128) return false;
    for (int i = 0; i < s.length(); i++)
        for (int j = i + 1; j < s.length(); j++)
            if (s[i] == s[j]) return false;
    return true;
}

int main(){
    string s;
    cin >> s;
    if (isUnique(s))
        cout << "It's a unique string" << "\n";
    else
        cout << "Contains Duplicates" << "\n";
    cout << "Time Complexity = O(n2)" << endl;
    return 0;
}

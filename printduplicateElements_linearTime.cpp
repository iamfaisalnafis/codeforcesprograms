#include <bits/stdc++.h>
using namespace std;

void printDuplicates(string str)
{
    unordered_map<char, int> count;
    for(int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;
    }
    for (auto it : count)
    {
        if(it.second > 1)
        {
            cout << it.first << ", count = " << it.second << "\n";
        }
    }
}

int main()
{
    string str;
    cin >> str;
    printDuplicates(str);
    return 0;
}

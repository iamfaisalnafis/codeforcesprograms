#include <bits/stdc++.h>
using namespace std;

string removeChar(string str1, string str2)
{
    for (auto i : str2)
    {
        while (find(str1.begin(), str1.end(), i) != str1.end())
        {
            auto itr = find(str1.begin(), str1.end(), i);
            str1.erase(itr);
        }
    }
    return str1;
}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    cout << removeChar(str1, str2) << endl;
    return 0;
}

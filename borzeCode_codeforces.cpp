#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<int> result;
    string zero = ".", one = "-.", two = "--";
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == '.')
        {
            result.push_back(0);
        }
        else if(str[i] == '-' && str[i+1] == '.')
        {
            result.push_back(1);
            i++;
        }
        else if(str[i] == '-' && str[i+1] == '-')
        {
            result.push_back(2);
            i++;
        }
    }
    for (auto x : result)
    {
        cout << x;
    }
    return 0;
}

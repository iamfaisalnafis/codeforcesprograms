#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> arr;
    int n;
    cin >> n;
    string s;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        arr.push_back(s);
    }
    sort(arr.begin(), arr.end());
    for (auto s : arr)
    {
        cout << s << " ";
    }
    return 0;
}

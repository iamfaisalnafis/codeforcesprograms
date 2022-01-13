#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n;
    vector<int> v1, v2, v3;
    for(int i = 0; i < n; i++)
    {
        cin >> t;
        if (t == 1)
        {
            v1.push_back(i);
        }
        else if (t == 2)
        {
            v2.push_back(i);
        }
        else
        {
            v3.push_back(i);
        }
    }
    int v1size = v1.size();
    int v2size = v2.size();
    int v3size = v3.size();
    int count = min(v1size, min(v2size, v3size));
    cout << count << endl;
    for(int i = 0; i < count; i++)
    {
        cout << v1[i] + 1 << " " << v2[i] + 1 << " " << v3[i] + 1 << endl;
    }
    return 0;
}
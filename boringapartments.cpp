#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string x;
        cin >> x;
        int dig = x[0] - '0' - 1;
        int len = x.size();
        cout << dig * 10 + len * (len + 1) / 2 << endl;
    }
    return 0;
}

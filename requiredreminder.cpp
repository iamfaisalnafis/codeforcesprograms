#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n;
    while (n--)
    {
        int x, y, t;
        cin >> x >> y >> t;
        if (t - t % x + y <= t)
        {
            cout << t - t % x + y << endl;
        }
        else
        {
            cout << t - t % x - (x - y) << endl;
        }
                
    }
    return 0;
}

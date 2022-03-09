#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int ms = min(a, b);
    int ans = max((a - ms) / 2, (b - ms) / 2);
    cout << ms << " " << ans << endl;

    return 0;
}
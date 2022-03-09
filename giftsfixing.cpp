#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;  
        vector<long long> a(n);
        vector<long long> b(n);
        long long minia = 1e18, minib = 1e18;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i], minia  = min(minia, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i], minib = min(minib, b[i]);
        }
        long long total(0);
        for (int i = 0; i < n; i++)
        {
            long long d1 = a[i] - minia;
            long long d2 = b[i] - minib;
            total += max(d1, d2);
        }
        cout << total << "\n";   
    }
    return 0;
}

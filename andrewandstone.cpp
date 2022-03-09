#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long n, a, k(1), ans(0);
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 3 && arr[1] % 2)
        {
            cout << -1 << endl;
            continue;
        }
        while (k < n - 1 && arr[k] == 1)
        {
            k++;
        }
        if (k == n - 1)
        {
            cout << -1 << endl;
            continue;
        }
        for (int i = 1; i < n - 1; i++)
        {
            ans += (arr[i] + 1) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}

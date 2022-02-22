#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int ans(0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                ans += (j - i + 1); 
                for (int k = i; k <= j; k++)
                {
                    if (arr[k] == 0) ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}

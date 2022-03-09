#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        vector<int> arr;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            arr.push_back(a);
        }
        if (!is_sorted(arr.begin(), arr.end()))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    } 
    return 0;
}

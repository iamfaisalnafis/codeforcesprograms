#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++)
    {
        cin >> k;
        arr.push_back(k);
    }
    
    sort(arr.begin(), arr.end());
    int count(0);
    for(int i = 0; i < n - 1; i++)
    {
        count = count + (arr[n-1] - arr[i]);
    }
    cout << count;
    return 0; 
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, n1, n2, n3, n4;
    vector<int> arr;
    for(int i = 0; i < 4; i++)
    {
        cin >> n;
        arr.push_back(n);
    }
    
    int max = *max_element(arr.begin(), arr.end());
    
    sort(arr.begin(),arr.end());
    
    for(int i  = 0; i < arr.size() - 1; i++)
    {
        cout << max - arr[i] << " ";
    }




    return 0;
}
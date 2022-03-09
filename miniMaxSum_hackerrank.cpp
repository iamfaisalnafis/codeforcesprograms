#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    long sum = 0;
    int pmax = 0, pmin = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
        if (arr[i] < arr[pmin]) pmin = i;
        if (arr[i] > arr[pmax]) pmax = i;
    }
    cout << (sum-arr[pmax]) << " ";
    cout << (sum-arr[pmin]) << endl;
    return 0;
}

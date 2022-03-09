#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {-4, 3, -9, 0, 4, 1};
    float zero(0), pos(0), neg(0);
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] > 0) pos++;
        else if(arr[i] < 0) neg++;
        else if(arr[i] == 0) zero++;
    }
    cout << fixed;
    cout << setprecision(6) << zero/arr.size() << "\n";
    cout << setprecision(6) << pos/arr.size() << "\n";
    cout << setprecision(6) << neg/arr.size() << "\n";
}
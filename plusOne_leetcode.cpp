#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n = digits.size() - 1;
    if (digits[n] < 9)
    {
        digits[n] += 1;
        return digits;
    }
    else
    {
        while (n >= 0)
        {
            if (n == 0 && digits[n] == 9)
            {
                digits[n] = 1;
                digits.push_back(0);
                return digits;
            }
            else if (digits[n] == 9)
            {
                digits[n] = 0;
                n--;
            }
            else
            {
                digits[n] += 1;
                return digits;
            }
        }
    }
    return digits;
}

int main()
{
    vector<int> arr = {9, 9, 9, 9};
    vector<int> OP = plusOne(arr);
    for (auto x : OP)
    {
        cout << x << " ";
    }
    return 0;
}

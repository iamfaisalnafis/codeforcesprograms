#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> candles = {3, 2, 1, 3};
    ios::sync_with_stdio(0);
    cin.tie(0);
    int maxNum(INT_MIN), count(0);
    for (int i = 0; i < candles.size(); i++)
    {
        maxNum = max(candles[i], maxNum);
    }
    for (int i = 0; i < candles.size(); i++)
    {
        if (maxNum == candles[i])
        {
            count++;
        }
    }
    cout << count;
    return 0;
}

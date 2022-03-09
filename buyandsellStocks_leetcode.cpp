#include <bits/stdc++.h>
using namespace std;



int main()
{
    vector<int> prices = {7,6,4,3,1};
    int lsf = INT_MAX, op(0), pist(0);
    for (int i = 0; i < prices.size(); i++)
    {
        if(prices[i] < lsf)
        {
            lsf = prices[i];
        }
        pist = prices[i] - lsf;
        if(op < pist)
        {
            op = pist;
        }
    }
    cout << op;
    return 0;
}

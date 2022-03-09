#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int trailingZeroes(int n)
    {
        if (n < 5)
        {
            return 0;
        }
        return (n = n / 5) + trailingZeroes(n);
    }
};

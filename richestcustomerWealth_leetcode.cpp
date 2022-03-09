#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxCount(0);
        for (vector<int>& account : accounts)
        {
            int currentWealth(0);
            for (int money : account)
            {
                currentWealth += money;
            }
            maxCount = max(maxCount, currentWealth);
        }
        return maxCount;
    }
};

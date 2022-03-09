#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int cur_sum(0), max_sum(INT_MIN);
        for(int i = 0; i < nums.size(); i++)
        {
            cur_sum = cur_sum + nums[i];
            max_sum = max(cur_sum, max_sum);
            if(cur_sum < 0) cur_sum = 0;
        }      
        return max_sum;
    }
};
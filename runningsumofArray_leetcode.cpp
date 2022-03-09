#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++)
        {
            if(i == 0)
            {
                nums[i] = nums[i];
                continue;
            }
            nums[i] = nums[i] + nums[i - 1];
        }
        return nums;
    }
};

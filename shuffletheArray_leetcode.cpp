#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        vector<int> result;
        for (int i = 0, j = n; i < n, j < nums.size(); i++, j++)
        {
            result.push_back(nums[i]);
            result.push_back(nums[j]);
        }
        return result;
    }
};
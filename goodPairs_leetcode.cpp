#include <bits/stdc++.h>
using namespace std;

int identicalPairs(vector<int>& nums)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	unordered_map<int, int> count;
	int ans(0);
	for (int i = 0; i < nums.size(); i++)
	{
		count[nums[i]]++;
	}
	for (auto i : count)
	{
		if (i.second > 1)
		{
			int nc = i.second;
			ans += (nc * (nc - 1)) / 2; 
		}
	}
	return ans;
}

int main()
{
	int n, a;
	vector<int> nums;
	cin >> n;
	for (int i =0; i < n; i++)
	{
		cin >> a;
		nums.push_back(a);
	}
	cout << identicalPairs(nums) << endl;
	return 0;
}

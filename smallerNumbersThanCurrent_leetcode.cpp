#include <bits/stdc++.h>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums)
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	std::map<int, int> helper;
	std::vector<int> vec(nums.begin(), nums.end());
	sort (vec.begin(), vec.end());
	for (int i = nums.size() - 1; i >= 0; i--)
	{
		helper[vec[i]] = i;
	}
	for (int i = 0; i < nums.size(); i++)
	{
		nums[i] = helper[nums[i]];
	}
	for (auto x : nums)
	{
		cout << x << " ";
	}
	return nums;
}

int main()
{
	vector<int> nums;
	int n, a;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		nums.push_back(a);
	}
	smallerNumbersThanCurrent(nums);
	return 0;
}

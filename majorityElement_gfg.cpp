#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int majorityElement (vector<int>& nums)
{
	int votes(0), candidate(-1);
	int nS = nums.size();
	for (int i = 0; i < nS; i++)
	{
		if(votes == 0)
		{
			candidate = nums[i];
			votes = 1;
		}
		else
		{
			if(nums[i] == candidate)
			{
				votes++;
			}
			else
			{
				votes--;
			}
		}
	}
	int count(0);
	for (int i = 0; i < nS; i++)
	{
		if(nums[i] == candidate)
		{
			count++;
		}
	}
	if (count > nS/2)
	{
		return candidate;
	}
	return -1;
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
	cout << majorityElement(nums);
	return 0;
}
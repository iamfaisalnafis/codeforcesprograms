#include <bits/stdc++.h>
using namespace std;

int removElement(vector<int>& nums, int val)
{
	int count(0);
	for (auto i = nums.begin(); i != nums.end(); i++)
	{
		if(*i == val)
		{
			nums.erase(i);
			--i;
		}
	}
	return nums.size();
}

int main()
{
	vector<int> nums = {0,1,2,2,3,0,4,2};
	int val;
	cin >> val;
	cout << removElement(nums, val);
	cout << endl;
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << " ";
	}
	return 0;
}

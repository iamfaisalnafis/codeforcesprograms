#include <bits/stdc++.h>
using namespace std;

vector<bool> kidswithCandies(vector<int>& candies, int extraCandies)
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	vector<bool> result;
	int maxNum(INT_MIN);
	for (int i = 0; i < candies.size(); i++)
	{
		if(candies[i] > maxNum)
		{
			maxNum = candies[i];
		}
	}
	for (int i = 0; i < candies.size(); i++)
	{
		if(candies[i] + extraCandies >= maxNum)
		{
			result.push_back(true);
		}
		else
		{
			result.push_back(false);
		}
	}
	return result;
}

int main()
{
	vector<int> candies;
	int n, a, eC;
	cin >> n >> eC;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		candies.push_back(a);
	}
	kidswithCandies(candies, eC);
	return 0;
}

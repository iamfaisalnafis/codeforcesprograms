#include <bits/stdc++.h>
using namespace std;

string fractiontoDecimal(int numerator, int denominator)
{
	int whole = numerator / denominator;
	int decimal = numerator % denominator;
	string ans = to_string(whole);
	if (decimal == 0) return ans;
	unordered_map<int, int> mp;
	mp.clear();
	ans += ".";
	while (decimal != 0)
	{
		if(mp.count(decimal))
		{
			ans.insert(mp[decimal], "(");
			ans += ")";
			return ans;
		}
		else
		{
			mp[decimal] = ans.length();
			decimal *= 10;
			int q = decimal / denominator;
			decimal = decimal % denominator;
			ans += to_string(q);
		}
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int numerator, denominator;
	cin >> numerator >> denominator;
	cout << fractiontoDecimal (numerator, denominator) << endl;
	return 0;
}

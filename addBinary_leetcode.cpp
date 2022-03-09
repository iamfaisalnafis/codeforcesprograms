#include <bits/stdc++.h>
using namespace std;

string addBinary(string a, string b)
{
	if(a.length() > b.length())
	{
		return addBinary(b, a);
	} 
	int diff = b.length() - a.length();
	string padding;
	for (int i = 0; i < diff; i++)
	{
		padding.push_back('0');
	}
	a = padding + a;
	string res;
	char carry = '0';
	for (int i = a.length() - 1; i >= 0; i--)
	{
		if(a[i] == '1' && b[i] == '1')
		{
			if(carry == '1')
			{
				res.push_back('1'), carry = '1';
			}
			else
			{
				res.push_back('0'), carry = '1';
			}
		}
		else if(a[i] == '0' && b[i] == '0')
		{
			if(carry == '1')
			{
				res.push_back('1'), carry = '0';
			}
			else
			{
				res.push_back('0'), carry = '0';
			}
		}
		else if(a[i] != b[i])
		{
			if(carry == '1')
			{
				res.push_back('0'), carry = '1';
			}
			else
			{
				res.push_back('1'), carry = '0';
			}
		}
	}
	if(carry == '1')
		res.push_back(carry);
	reverse(res.begin(), res.end());
	int index = 0;
	while (index + 1 < res.length() && res[index] == '0')
		index++;
	return (res.substr(index));
}

int main(int argc, char const *argv[])
{
	string a = "1101";
	string b = "100";
	cout << addBinary(a, b);
	return 0;
}

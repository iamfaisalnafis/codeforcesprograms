#include <bits/stdc++.h>
using namespace std;

int main()
{
	string address;
	cin >> address;
	string res = "";
	for (int i = 0; i < address.length(); i++)
	{
		if(address[i] == '.')
		{
			res += "[.]";
		}
		else
			res += address[i];
	}
	cout << res;
}
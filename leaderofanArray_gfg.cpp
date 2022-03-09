#include <bits/stdc++.h>
using namespace std;
#define PB push_back

int main(int argc, char const *argv[])
{
	vector<int> arr;
	int n, a;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		arr.push_back(a);
	}
	int max_from_right = arr[arr.size() - 1];
	cout << max_from_right << " ";
	for (int i = arr.size() - 2; i >= 0; i--)
	{
		if(max_from_right < arr[i])
		{
			max_from_right = arr[i];
			cout << max_from_right << " ";
		}
	}
	return 0;
}
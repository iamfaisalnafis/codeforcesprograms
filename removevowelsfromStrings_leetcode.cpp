#include <bits/stdc++.h>
using namespace std;

string removeVowels(string str)
{
	vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
	for (int i = 0; i < str.length(); i++)
	{
		if(find(vowels.begin(), vowels.end(), str[i]) != vowels.end())
		{
			str = str.replace(i, 1, "");
			i -= 1;
		}
	}
	return str;
}

int main()
{
	string str;
	getline (cin, str);
	string result = removeVowels(str);
	cout << result;
	return 0;
}

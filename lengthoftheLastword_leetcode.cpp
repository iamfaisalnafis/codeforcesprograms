#include <bits/stdc++.h>
using namespace std;

int lengthoflastWord(string s)
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
    int len(0);
    for(int i = s.size() - 1; i >= 0; i--)
    {
        
        if(s[i] != ' ')
        {
            len++;
        }
        if(s[i] == ' ' && len > 0)
        {
            break;
        }
    }
    return len;
}

int main()
{
	string str = "Fly me to the moon and beyond";
	cout << lengthoflastWord(str);
	return 0;
}

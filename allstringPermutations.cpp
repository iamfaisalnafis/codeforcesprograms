#include <iostream>

using namespace std;

void stringPermutations (string str, string ans)
{
    if (str.length() == 0)
    {
        cout << ans << " ";
        return;
    }
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        string left_substr = str.substr(0, i);
        string right_substr = str.substr(i + 1);
        string rest = left_substr + right_substr;
        stringPermutations (rest, ans + ch);
    }
}

int main()
{
    string str;
    string ans = "";
    cout << "Enter the string: ";
    cin >> str;

    cout << "The possible permutations are: ";
    stringPermutations (str, ans);
    return 0;
}

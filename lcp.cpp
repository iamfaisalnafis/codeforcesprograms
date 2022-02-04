#include <bits/stdc++.h>
using namespace std;

int findminLength(string arr[], int n)
{
    int min = arr[0].length();

    for (int i = 0; i < n; i++)
    {
        if(arr[i].length() < min)
        {
            min = arr[i].length();
        }
    }
    return min;
}


string longestcommonPrefix(string arr[], int n)
{
    int minlength = findminLength(arr, n);

    string result;
    char current;
    for(int i = 0; i < minlength; i++)
    {
        current = arr[0][i];
        for(int j = 1; j < n; j++)
        {
            if(arr[j][i] != current)
            {
                return result;
            }
        }
        result.push_back(current);
    }
    return result;
}


int main()
{
    string arr[] = {"geeksforgeeks", "geeks",
                    "geek", "geezer"};
    int n = sizeof (arr) / sizeof (arr[0]);
 
    string ans = longestcommonPrefix(arr, n);
 
    if (ans.length())
        cout << "The longest common prefix is "
             << ans;
    else
        cout << "There is no common prefix";
    return 0;
}

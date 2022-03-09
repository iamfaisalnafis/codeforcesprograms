#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int count(0);
    sort(str.begin(), str.end());
    int n = str.length();
    for(int i = 0; i < n; i++)
    {
        if(str[i] == str[i+1])
        {
            cout << str[i];
            count++;
        }
    }
    cout << endl;
    if(count == 0)
    {
        cout << "No Duplicates found" << endl; 
    }
    cout << "Time Complexity = O(nlogn)" << endl;

    return 0;
}

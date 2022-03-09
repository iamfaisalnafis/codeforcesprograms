#include <bits/stdc++.h>
using namespace std;

// Function to check if two strings are permutations of each other
bool checkPermutations(string str1, string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();
    
    if(n1 != n2) return false;
    
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for(int i = 0; i < n1; i++)
    {
        if(str1[i] != str2[i])
        {
            return false;
        }
    }
    return true;
}

// Driver Program
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    if(checkPermutations(str1, str2))
    {
        cout << "Success" << "\n";
    }
    else
    {
        cout << "Failure" << "\n";
    }

    return 0;
}

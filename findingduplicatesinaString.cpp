#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string str;
    cout << "Enter a String to check if it contains Duplicate elements: ";
    cin >> str;
    int n = str.length();
    int hash[26] = { 0 };
    for (int i = 0; i < n; i++)
    {
        hash[str[i] - 97] += 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if (hash[i] > 1)
        {
            cout << "Duplicate Found: " << static_cast<char> (i + 97) << "\n";
            cout << "Count: " << hash[i] << "\n";
        }
    }
    return 0;
}

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

void runlengthEncoding (string str)
{
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        int count(1);
        while (i < n - 1 && str[i] == str[i+1])
        {
            count++;
            i++;
        }
        cout << str[i] << count;
    }
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    runlengthEncoding (str);
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int count(0);
        for (int i = 0; i < str.length(); i++)
        {
            if(str[i] == '4')
            {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}

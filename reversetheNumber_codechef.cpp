#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int rev_num = 0;
        while ( n > 0)
        {
            rev_num = rev_num * 10 + n % 10;
            n = n / 10;
        }
        cout << rev_num << "\n";
    }
    return 0;
}

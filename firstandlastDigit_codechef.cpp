#include <iostream>

using namespace std;

int lastDigit (int n)
{
    return n % 10;
}
int firstDigit (int n)
{
    while (n >= 10)
    {
        n /= 10;
    }
    return n;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, first, last;
        cin >> n;
        last = lastDigit(n);
        first = firstDigit(n);
        cout << first + last << "\n";
    }
    return 0;
}

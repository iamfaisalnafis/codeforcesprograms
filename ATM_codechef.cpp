#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int withdraw;
    float balance;
    cin >> withdraw;
    cin >> balance;
    if ((withdraw % 5 == 0)&&(balance >= (withdraw + 0.50)))
    {
        cout << fixed;
        cout << setprecision(2) <<(balance - withdraw - 0.50);
    }
    else
    {
        cout << fixed;
        cout << setprecision(2) << balance;
    }
    return 0;
}

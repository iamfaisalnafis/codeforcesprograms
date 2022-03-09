<<<<<<< HEAD
#include <iostream>

using namespace std;

int main()
{
    long long int n, f;
    cin >> n;
    if (n % 2 == 0)
    {
        f = n / 2;
        cout << f;
    }
    else
    {
        f = (n - 1) / 2 - n;
        cout << f;
    }
    return 0;
=======
#include <iostream>

using namespace std;

int main()
{
    long long int n, f;
    cin >> n;
    if (n % 2 == 0)
    {
        f = n / 2;
        cout << f;
    }
    else
    {
        f = (n - 1) / 2 - n;
        cout << f;
    }
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}
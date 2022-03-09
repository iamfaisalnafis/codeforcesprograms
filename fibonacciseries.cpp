<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
    int64_t number, term1 = 0, term2 = 1, fibb;
    cout << "Enter the number for which you want to print the Fibonacci Series: ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        if (i == 1)
        {
            cout << term1 << " , ";
            continue;
        }
        if (i == 2)
        {
            cout << term2 << " , ";
            continue;
        }
        fibb = term1 + term2;
        term1 = term2;
        term2 = fibb;

        cout << fibb << " , ";
    }
    return 0;
=======
#include <iostream>
using namespace std;

int main()
{
    int64_t number, term1 = 0, term2 = 1, fibb;
    cout << "Enter the number for which you want to print the Fibonacci Series: ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        if (i == 1)
        {
            cout << term1 << " , ";
            continue;
        }
        if (i == 2)
        {
            cout << term2 << " , ";
            continue;
        }
        fibb = term1 + term2;
        term1 = term2;
        term2 = fibb;

        cout << fibb << " , ";
    }
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}
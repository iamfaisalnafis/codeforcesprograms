<<<<<<< HEAD
#include <iostream>

using namespace std;

int main()
{
    int n;
    int counter = 1;
    cin >> n;
    int ar[n+1];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if(ar[i] != ar[i+1])
        {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
=======
#include <iostream>

using namespace std;

int main()
{
    int n;
    int counter = 1;
    cin >> n;
    int ar[n+1];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if(ar[i] != ar[i+1])
        {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}
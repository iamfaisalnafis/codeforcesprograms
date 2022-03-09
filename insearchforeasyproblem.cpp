<<<<<<< HEAD
#include <iostream>

using namespace std;

int main()
{
    int n, c(0);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        c += x;
    }
    if (c)
    {
        cout << "HARD";
    }
    else
    {
        cout << "EASY";
    }
    return 0;
=======
#include <iostream>

using namespace std;

int main()
{
    int n, c(0);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        c += x;
    }
    if (c)
    {
        cout << "HARD";
    }
    else
    {
        cout << "EASY";
    }
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}
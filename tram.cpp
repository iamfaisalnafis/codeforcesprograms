<<<<<<< HEAD
#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c(0), d(0);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        d -= a;
        d += b;
        c = max(c, d);
    }
    cout << c;
    return 0;
=======
#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c(0), d(0);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        d -= a;
        d += b;
        c = max(c, d);
    }
    cout << c;
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}
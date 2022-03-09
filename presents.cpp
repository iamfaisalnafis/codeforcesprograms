<<<<<<< HEAD
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, p;
    cin >> n;
    vector<int> f(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> p;
        f[p] = i;
    }
    cout << f[1];
    for (int i = 2; i <= n; i++)
    {
        cout << " " << f[i];
    }
    cout << endl;
    return 0;
=======
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, p;
    cin >> n;
    vector<int> f(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> p;
        f[p] = i;
    }
    cout << f[1];
    for (int i = 2; i <= n; i++)
    {
        cout << " " << f[i];
    }
    cout << endl;
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}
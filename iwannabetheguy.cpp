<<<<<<< HEAD
#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int p, q;
    int counter = 0;
    set<int>levels;
    set<int>::iterator t1;
    set<int>::iterator t2;
    cin >> n;
    cin >> p;
    if (p != 0)
    {
        for (int i = 0; i < p; i++)
        {
            int x;
            cin >> x;
            levels.insert(x);
        }
    }
    cin >> q;
    if (q != 0)
    {
        for (int i = 0; i < q; i++)
        {
            int x;
            cin >> x;
            levels.insert(x);
        }
    }
    if (p || q != 0)
    {
        t1 = levels.begin();
        for (int i = 1; i <= n; i++, t1++)
        {
            if(*t1 == i)
            {
                counter++;
            }
        }
        if (counter == n)
        {
            cout << "I become the guy.";
        }
        else
        {
            cout << "Oh, my keyboard!";
        }
    }
    if (!p&&!q)
    {
        cout << "Oh, my keyboard!";
    }
    return 0;
=======
#include <iostream>
#include <cmath>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int p, q;
    int counter = 0;
    set<int>levels;
    set<int>::iterator t1;
    set<int>::iterator t2;
    cin >> n;
    cin >> p;
    if (p != 0)
    {
        for (int i = 0; i < p; i++)
        {
            int x;
            cin >> x;
            levels.insert(x);
        }
    }
    cin >> q;
    if (q != 0)
    {
        for (int i = 0; i < q; i++)
        {
            int x;
            cin >> x;
            levels.insert(x);
        }
    }
    if (p || q != 0)
    {
        t1 = levels.begin();
        for (int i = 1; i <= n; i++, t1++)
        {
            if(*t1 == i)
            {
                counter++;
            }
        }
        if (counter == n)
        {
            cout << "I become the guy.";
        }
        else
        {
            cout << "Oh, my keyboard!";
        }
    }
    if (!p&&!q)
    {
        cout << "Oh, my keyboard!";
    }
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}
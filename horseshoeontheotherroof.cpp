<<<<<<< HEAD
#include <iostream>
#include <set>

using namespace std;

int main()
{
    long long x;
    set<long long> s;
    for(int i = 0; i < 4; i++)
    {
        cin >> x;
        s.insert(x);
    }
    cout << 4 - s.size();
    return 0;
=======
#include <iostream>
#include <set>

using namespace std;

int main()
{
    long long x;
    set<long long> s;
    for(int i = 0; i < 4; i++)
    {
        cin >> x;
        s.insert(x);
    }
    cout << 4 - s.size();
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}
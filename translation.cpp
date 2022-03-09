<<<<<<< HEAD
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    reverse(s.begin(), s.end());
    if( s == t)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
=======
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    reverse(s.begin(), s.end());
    if( s == t)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}
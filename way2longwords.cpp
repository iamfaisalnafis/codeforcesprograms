<<<<<<< HEAD
#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        if (s.length() > 10)
        {
            cout << s[0] << s.length() - 2 << s[s.length()-1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
=======
#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        if (s.length() > 10)
        {
            cout << s[0] << s.length() - 2 << s[s.length()-1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}
<<<<<<< HEAD
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string s;
    set<char> a;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            a.insert(s[i]);
        }
    }
    cout << a.size() << endl;
    return 0;
=======
#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s1{};
    
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}